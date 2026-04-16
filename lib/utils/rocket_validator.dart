import 'package:flutter/material.dart';
import '../models/rocket_part.dart';
import 'rocket_physics.dart';

/// Educational recommendations for rocket building
/// 
/// This class generates helpful, educational feedback based on
/// the rocket's current configuration and stability issues.

class RocketValidationResult {
  final bool isValid;
  final List<ValidationIssue> issues;
  final List<ValidationRecommendation> recommendations;
  final StabilityAnalysis? analysis;

  RocketValidationResult({
    required this.isValid,
    required this.issues,
    required this.recommendations,
    this.analysis,
  });
}

enum IssueSeverity {
  critical,   // Must fix to launch
  warning,    // Should fix for safety
  info,       // Educational suggestion
}

class ValidationIssue {
  final String title;
  final String description;
  final String educationalNote; // Why this matters scientifically
  final IssueSeverity severity;
  final IconData icon;

  ValidationIssue({
    required this.title,
    required this.description,
    required this.educationalNote,
    required this.severity,
    required this.icon,
  });
}

class ValidationRecommendation {
  final String action;
  final String expectedOutcome;
  final String physicsExplanation;
  final IconData icon;

  ValidationRecommendation({
    required this.action,
    required this.expectedOutcome,
    required this.physicsExplanation,
    required this.icon,
  });
}

class RocketValidator {
  /// Perform full validation and generate educational recommendations
  static RocketValidationResult validate(
    StabilityAnalysis analysis,
    List<dynamic> placedParts, // PlacedPart objects
    Map<String, Set<String>> connectionGraph,
  ) {
    final issues = <ValidationIssue>[];
    final recommendations = <ValidationRecommendation>[];

    // ===== CRITICAL ISSUES =====

    // 1. Structural disconnection
    if (!analysis.isConnected) {
      issues.add(ValidationIssue(
        title: 'Floating Parts Detected',
        description: 'Some rocket parts are not connected to the main structure.',
        educationalNote: 'During launch, all parts must move together. Unattached parts will fall off immediately, causing catastrophic failure.',
        severity: IssueSeverity.critical,
        icon: Icons.link_off,
      ));

      recommendations.add(ValidationRecommendation(
        action: 'Connect all floating parts by dragging them near other parts until they snap together.',
        expectedOutcome: 'Single unified structure',
        physicsExplanation: 'Rocket stages must be structurally linked to share thrust loads.',
        icon: Icons.link,
      ));
    }

    // 2. Critical instability (CP ahead of CG)
    if (analysis.rating == StabilityRating.criticalUnstable) {
      issues.add(ValidationIssue(
        title: 'CRITICAL: Rocket Will Flip!',
        description: 'Center of Pressure is ahead of Center of Gravity by ${(-analysis.staticMargin).toStringAsFixed(1)} diameters.',
        educationalNote: 'The Center of Pressure (CP) is where aerodynamic forces push the rocket. The Center of Gravity (CG) is the balance point. If CP is ahead of CG, the rocket acts like a dart thrown backwards - it will immediately tumble and crash.',
        severity: IssueSeverity.critical,
        icon: Icons.dangerous,
      ));

      recommendations.addAll([
        ValidationRecommendation(
          action: 'Add mass to the NOSE of the rocket (Command Module, Nose Cone)',
          expectedOutcome: 'Move CG forward by ~${(-analysis.staticMargin * 0.8).toStringAsFixed(1)} diameters',
          physicsExplanation: 'Adding weight at the nose shifts the balance point (CG) forward. We want CG at least 1 body diameter ahead of CP.',
          icon: Icons.add_circle,
        ),
        ValidationRecommendation(
          action: 'Remove heavy engines from the bottom OR add side boosters higher up',
          expectedOutcome: 'Reduce rear weight, shifting CG forward',
          physicsExplanation: 'Engines at the bottom push CG backward. Moving thrust sources higher helps stability.',
          icon: Icons.remove_circle,
        ),
        ValidationRecommendation(
          action: 'Make rocket longer - stack more stages vertically',
          expectedOutcome: 'Increases separation between CG and CP',
          physicsExplanation: 'Longer rockets are inherently more stable because the lever arm between CG and CP is larger.',
          icon: Icons.height,
        ),
      ]);
    }

    // 3. Not enough thrust
    if (!analysis.hasEnoughThrust) {
      issues.add(ValidationIssue(
        title: 'Insufficient Thrust',
        description: 'Thrust-to-Weight Ratio is ${analysis.thrustToWeightRatio.toStringAsFixed(2)} (needs > 1.1)',
        educationalNote: 'To lift off, thrust must exceed weight. The Saturn V had a TWR of ~1.5 at launch. Your rocket is too heavy for its engines.',
        severity: IssueSeverity.critical,
        icon: Icons.trending_down,
      ));

      recommendations.addAll([
        ValidationRecommendation(
          action: 'Add more engines or larger nozzles to the bottom stage',
          expectedOutcome: 'TWR increases to > 1.1',
          physicsExplanation: 'More thrust = more upward force to counteract gravity.',
          icon: Icons.local_fire_department,
        ),
        ValidationRecommendation(
          action: 'Remove unnecessary stages or use smaller tanks',
          expectedOutcome: 'Reduce mass, improving TWR',
          physicsExplanation: 'Less mass requires less thrust to lift. The Delta III was lighter than Saturn V for this reason.',
          icon: Icons.fitness_center,
        ),
      ]);
    }

    // ===== WARNING ISSUES =====

    // 4. Marginal stability - changed to WARNING only, not blocking
    if (analysis.rating == StabilityRating.marginal) {
      issues.add(ValidationIssue(
        title: 'Marginal Stability',
        description: 'Static margin is ${analysis.staticMargin.toStringAsFixed(1)} diameters (optimal is 0.5-1.5)',
        educationalNote: 'Your rocket is stable but has a small safety margin. Real rockets like Delta III flew with margins around 0.3-0.5. It\'ll fly, but avoid windy conditions!',
        severity: IssueSeverity.warning,  // Changed from critical
        icon: Icons.info,
      ));

      recommendations.add(ValidationRecommendation(
        action: 'Optional: Add small nose weight or make rocket slightly taller',
        expectedOutcome: 'Increased safety margin',
        physicsExplanation: 'More margin = more stability buffer, but your rocket will fly as-is.',
        icon: Icons.tips_and_updates,
      ));
    }

    // 5. Over-stable (too much nose weight) - also just a warning
    if (analysis.rating == StabilityRating.overStable) {
      issues.add(ValidationIssue(
        title: 'Very High Stability',
        description: 'Static margin is ${analysis.staticMargin.toStringAsFixed(1)} diameters (quite high)',
        educationalNote: 'Very stable rockets can turn sharply into wind ("weathercock"). Still flyable but may drift off course.',
        severity: IssueSeverity.info,  // Just info, not warning
        icon: Icons.info,
      ));
    }

    // ===== INFO/SUGGESTIONS =====

    // 6. Missing key components
    final hasEngine = placedParts.any((p) => p.part.type == PartType.engine || p.part.type == PartType.nozzle);
    final hasFuel = placedParts.any((p) => p.part.type == PartType.stage);
    final hasPayload = placedParts.any((p) => p.part.type == PartType.capsule || p.part.type == PartType.noseCone);
    final hasConnector = placedParts.any((p) => p.part.type == PartType.connector);

    // Require at least one connector for structural integrity
    if (!hasConnector) {
      issues.add(ValidationIssue(
        title: 'No Interstage Connector',
        description: 'Add a connector to link rocket stages together.',
        educationalNote: 'Connectors hold rocket stages together during ascent. Without them, stages may separate unexpectedly during launch.',
        severity: IssueSeverity.critical,
        icon: Icons.link_off,
      ));
    }

    // 6b. Delta III specific: requires nose cone for aerodynamics
    final hasDeltaIIIParts = placedParts.any((p) => p.part.family == RocketFamily.deltaIII);
    final hasNoseCone = placedParts.any((p) => p.part.type == PartType.noseCone);
    if (hasDeltaIIIParts && !hasNoseCone) {
      issues.add(ValidationIssue(
        title: 'No Aerodynamic Nose Cone',
        description: 'Delta III requires a nose cone for stable flight.',
        educationalNote: 'The nose cone reduces air resistance and keeps the rocket stable. Without it, the rocket will tumble due to excessive drag at the front.',
        severity: IssueSeverity.critical,
        icon: Icons.air,
      ));
    }

    // 6c. Delta III specific: boosters must be in pairs (2 or none) for symmetry
    final boosterCount = placedParts.where((p) => p.part.type == PartType.booster).length;
    if (hasDeltaIIIParts && boosterCount == 1) {
      issues.add(ValidationIssue(
        title: 'Unbalanced Boosters',
        description: 'Delta III requires 2 boosters (one on each side) or none at all.',
        educationalNote: 'A single booster creates uneven thrust, causing the rocket to spin uncontrollably. Symmetrical boosters are required for stable flight.',
        severity: IssueSeverity.critical,
        icon: Icons.balance,
      ));
    }

    // 6d. Check for mixed rocket families - Saturn V and Delta III cannot be combined
    final hasSaturnVParts = placedParts.any((p) => p.part.family == RocketFamily.saturnV);
    if (hasDeltaIIIParts && hasSaturnVParts) {
      issues.add(ValidationIssue(
        title: 'Mixed Rocket Families',
        description: 'Cannot combine Saturn V and Delta III parts.',
        educationalNote: 'Each rocket family has different engineering, aerodynamics, and structural requirements. Mixing them creates an unstable and unsafe configuration.',
        severity: IssueSeverity.critical,
        icon: Icons.block,
      ));
    }

    // 6e. Saturn V specific validations
    if (hasSaturnVParts && !hasDeltaIIIParts) {
      // Saturn V should have all 3 stages for optimal performance
      final hasFirstStage = placedParts.any((p) => p.part.name.contains('First'));
      final hasSecondStage = placedParts.any((p) => p.part.name.contains('Second'));
      final hasThirdStage = placedParts.any((p) => p.part.name.contains('Third'));
      final hasF1Engine = placedParts.any((p) => p.part.name.contains('F-1') || p.part.name.contains('F1'));
      final hasCommandModule = placedParts.any((p) => p.part.type == PartType.capsule);
      
      if (!hasF1Engine) {
        issues.add(ValidationIssue(
          title: 'Missing F-1 Engines',
          description: 'Saturn V requires F-1 engines for first stage thrust.',
          educationalNote: 'The F-1 engines produced 6.7 million Newtons each. Saturn V had 5 of them for lift-off.',
          severity: IssueSeverity.warning,
          icon: Icons.local_fire_department,
        ));
      }
      
      if (!hasCommandModule) {
        issues.add(ValidationIssue(
          title: 'No Command Module',
          description: 'Saturn V needs a command module for crew/payload.',
          educationalNote: 'The Command Module housed the astronauts and was the only part that returned to Earth.',
          severity: IssueSeverity.critical,
          icon: Icons.people,
        ));
      }
      
      // Warning if missing stages
      final missingStages = [!hasFirstStage, !hasSecondStage, !hasThirdStage].where((e) => e).length;
      if (missingStages > 0) {
        issues.add(ValidationIssue(
          title: 'Incomplete Staging',
          description: 'Saturn V works best with all 3 stages configured.',
          educationalNote: 'Saturn V had S-IC (1st), S-II (2nd), and S-IVB (3rd) stages for optimal trajectory.',
          severity: IssueSeverity.warning,
          icon: Icons.layers,
        ));
      }
      
      // Saturn V requires 3 connectors for structural integrity
      final saturnVConnectorCount = placedParts.where((p) => 
        p.part.type == PartType.connector && p.part.family == RocketFamily.saturnV
      ).length;
      if (saturnVConnectorCount < 3) {
        issues.add(ValidationIssue(
          title: 'Insufficient Connectors',
          description: 'Saturn V requires 3 interstage connectors to link all stages.',
          educationalNote: 'Each stage transition needs a connector. With ${saturnVConnectorCount == 0 ? 'no' : 'only $saturnVConnectorCount'} connector${saturnVConnectorCount == 1 ? '' : 's'}, the rocket may separate during ascent.',
          severity: IssueSeverity.warning,
          icon: Icons.link,
        ));
      }
    }

    if (!hasEngine) {
      issues.add(ValidationIssue(
        title: 'No Propulsion System',
        description: 'Your rocket has no engines or nozzles.',
        educationalNote: 'Every rocket needs thrust. The F-1 engines on Saturn V produced 6.7 million Newtons each!',
        severity: IssueSeverity.critical,
        icon: Icons.local_fire_department_outlined,
      ));
    }

    if (!hasFuel) {
      issues.add(ValidationIssue(
        title: 'No Fuel Tanks',
        description: 'Your rocket has no fuel stages.',
        educationalNote: 'Rockets need propellant. Saturn V first stage carried 770,000 tons of fuel!',
        severity: IssueSeverity.warning,
        icon: Icons.battery_unknown,
      ));
    }

    if (!hasPayload) {
      issues.add(ValidationIssue(
        title: 'No Payload',
        description: 'Add a capsule or payload fairing.',
        educationalNote: 'The "payload" is the mission - whether astronauts, satellites, or science instruments.',
        severity: IssueSeverity.info,
        icon: Icons.rocket_launch_outlined,
      ));
    }

    // 7. Good stability educational note
    if (analysis.isLaunchReady && issues.isEmpty) {
      recommendations.add(ValidationRecommendation(
        action: 'Your rocket is well-designed!',
        expectedOutcome: 'Safe flight expected',
        physicsExplanation: 'CG is ${analysis.staticMargin.toStringAsFixed(1)} body diameters ahead of CP. This is the "sweet spot" used by real rockets like Saturn V.',
        icon: Icons.verified,
      ));
    }

    // Determine overall validity
    final hasCritical = issues.any((i) => i.severity == IssueSeverity.critical);
    final isValid = !hasCritical && analysis.isReadyToLaunch;

    return RocketValidationResult(
      isValid: isValid,
      issues: issues,
      recommendations: recommendations,
      analysis: analysis,
    );
  }

  /// Get a quick summary text for the UI
  static String getQuickStatus(StabilityAnalysis analysis) {
    if (analysis.rating == StabilityRating.criticalUnstable) {
      return 'UNSTABLE: Will tumble immediately';
    }
    if (analysis.rating == StabilityRating.unstable) {
      return 'Risky: May fail in wind';
    }
    if (analysis.rating == StabilityRating.marginal) {
      return 'Barely stable';
    }
    if (analysis.thrustToWeightRatio < 1.1) {
      return 'Too heavy to lift off';
    }
    if (analysis.rating == StabilityRating.overStable) {
      return 'Stable (may weathercock)';
    }
    return 'Good to launch!';
  }

  /// Get educational tooltip about CG/CP
  static String getEducationalTooltip() {
    return '''
🚀 ROCKET STABILITY 101:

• Center of Gravity (CG): The balance point
  → Add weight to move it

• Center of Pressure (CP): Where wind pushes
  → Depends on shape and drag

• Static Margin: How far CG is ahead of CP
  → Measured in "body diameters"
  → 1.0-1.5 = perfect for most rockets
  → < 0.5 = dangerous
  → < 0 = will crash!

Think of it like a dart: heavy front, draggy back.
''';
  }
}
