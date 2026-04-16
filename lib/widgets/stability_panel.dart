import 'package:flutter/material.dart';
import '../utils/rocket_physics.dart';
import '../utils/rocket_validator.dart';
import '../screens/spaceflight_2d_screen.dart';

/// Educational stability checker panel
/// 
/// Shows:
/// - CG/CP positions with visual markers
/// - Static margin calculation
/// - Thrust-to-weight ratio
/// - Validation issues and recommendations
/// - Launch readiness status

class StabilityPanel extends StatelessWidget {
  final RocketValidationResult? validation;
  final List<PlacedPart> placedParts;
  final VoidCallback onRunAnalysis;
  final VoidCallback? onLaunch;
  final VoidCallback? onRiskyLaunch;
  final VoidCallback? onClose;
  final bool isAnalyzing;

  const StabilityPanel({
    super.key,
    this.validation,
    required this.placedParts,
    required this.onRunAnalysis,
    this.onLaunch,
    this.onRiskyLaunch,
    this.onClose,
    this.isAnalyzing = false,
  });

  @override
  Widget build(BuildContext context) {
    final analysis = validation?.analysis;
    final hasParts = placedParts.isNotEmpty;
    final screenWidth = MediaQuery.of(context).size.width;
    // Responsive width: full width on small screens, fixed on larger
    final panelWidth = screenWidth > 600 ? 320.0 : screenWidth - 32;

    return Container(
      width: panelWidth,
      margin: const EdgeInsets.all(8),
      decoration: BoxDecoration(
        color: const Color(0xFF1E1E1E),
        borderRadius: BorderRadius.circular(12),
        border: Border.all(
          color: analysis?.isReadyToLaunch == true 
              ? const Color(0xFF404040) 
              : const Color(0xFF404040),
          width: 1,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.black.withOpacity(0.5),
            blurRadius: 20,
            spreadRadius: 5,
          ),
        ],
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // Header
          _buildHeader(analysis),
          
          if (!hasParts) 
            _buildEmptyState()
          else if (analysis == null)
            _buildAnalyzeButton()
          else ...[
            // Status Banner
            _buildStatusBanner(analysis),
            
            // CG/CP Visualization
            _buildCGCPVisualization(analysis),
            
            // Stats Grid
            _buildStatsGrid(analysis),
            
            // Issues List
            if (validation?.issues.isNotEmpty == true)
              _buildIssuesList(validation!.issues),
            
            // Recommendations
            if (validation?.recommendations.isNotEmpty == true)
              _buildRecommendations(validation!.recommendations),
            
            // Launch Button Logic:
            // - Ready: Green Launch button (isReadyToLaunch AND no issues)
            // - Risky: Orange button (isReadyToLaunch but has issues, or has warnings)
            // - No button: Critical issues blocking launch
            Builder(builder: (context) {
              final hasCriticalIssues = validation?.issues.any((i) => i.severity == IssueSeverity.critical) ?? false;
              final hasWarnings = validation?.issues.any((i) => i.severity == IssueSeverity.warning) ?? false;
              
              if (analysis.isReadyToLaunch && !hasCriticalIssues && !hasWarnings) {
                // Perfect rocket - green button
                return _buildLaunchButton();
              } else if ((analysis.isReadyToLaunch && hasWarnings) || 
                         (analysis.isReadyToLaunch && hasCriticalIssues) ||
                         (!analysis.isReadyToLaunch && !hasCriticalIssues)) {
                // Ready but has issues, or not ready but no critical issues - orange risky
                return _buildRiskyLaunchButton();
              }
              // Critical issues blocking launch - no button
              return const SizedBox.shrink();
            }),
          ],
        ],
      ),
    );
  }

  Widget _buildHeader(StabilityAnalysis? analysis) {
    return Container(
      padding: const EdgeInsets.all(16),
      decoration: BoxDecoration(
        color: const Color(0xFF252525),
        borderRadius: const BorderRadius.vertical(top: Radius.circular(12)),
        border: Border(
          bottom: BorderSide(
            color: const Color(0xFF404040),
          ),
        ),
      ),
      child: Row(
        children: [
          Icon(
            Icons.science,
            color: analysis?.isReadyToLaunch == true ? Colors.white : const Color(0xFFB0B0B0),
            size: 24,
          ),
          const SizedBox(width: 12),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const Text(
                  'STABILITY ANALYSIS',
                  style: TextStyle(
                    color: Colors.white,
                    fontSize: 14,
                    fontWeight: FontWeight.w300,
                    letterSpacing: 1,
                  ),
                ),
                if (analysis != null)
                  Text(
                    analysis.rating.label,
                    style: TextStyle(
                      color: analysis.rating.color,
                      fontSize: 11,
                      fontWeight: FontWeight.w400,
                    ),
                  ),
              ],
            ),
          ),
          // Info tooltip button
          Tooltip(
            message: RocketValidator.getEducationalTooltip(),
            padding: const EdgeInsets.all(12),
            textStyle: const TextStyle(fontSize: 12, color: Colors.white),
            decoration: BoxDecoration(
              color: const Color(0xFF1E1E1E),
              borderRadius: BorderRadius.circular(8),
              border: Border.all(color: const Color(0xFF404040)),
            ),
            child: Icon(
              Icons.help_outline,
              color: const Color(0xFF707070),
              size: 18,
            ),
          ),
          if (onClose != null)
            IconButton(
              onPressed: onClose,
              icon: const Icon(Icons.close, size: 18),
              color: const Color(0xFF707070),
              tooltip: 'Close panel',
              padding: EdgeInsets.zero,
              constraints: const BoxConstraints(),
            ),
        ],
      ),
    );
  }

  Widget _buildEmptyState() {
    return Padding(
      padding: const EdgeInsets.all(20),
      child: Column(
        children: [
          Icon(
            Icons.rocket_launch_outlined,
            color: Colors.white.withOpacity(0.3),
            size: 48,
          ),
          const SizedBox(height: 12),
          Text(
            'Add parts to analyze',
            style: TextStyle(
              color: Colors.white.withOpacity(0.5),
              fontSize: 13,
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildAnalyzeButton() {
    return Padding(
      padding: const EdgeInsets.all(16),
      child: SizedBox(
        width: double.infinity,
        child: ElevatedButton.icon(
          onPressed: isAnalyzing ? null : onRunAnalysis,
          icon: isAnalyzing 
              ? const SizedBox(
                  width: 16,
                  height: 16,
                  child: CircularProgressIndicator(strokeWidth: 2),
                )
              : const Icon(Icons.analytics, size: 18),
          label: Text(
            isAnalyzing ? 'Analyzing...' : 'Check Stability',
            style: const TextStyle(fontWeight: FontWeight.bold),
          ),
          style: ElevatedButton.styleFrom(
            backgroundColor: const Color(0xFF2D2D2D),
            foregroundColor: Colors.white,
            side: const BorderSide(color: Color(0xFF505050)),
            padding: const EdgeInsets.symmetric(vertical: 12),
            shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(8)),
          ),
        ),
      ),
    );
  }

  Widget _buildStatusBanner(StabilityAnalysis analysis) {
    return Container(
      margin: const EdgeInsets.fromLTRB(16, 8, 16, 8),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: analysis.rating.color.withOpacity(0.1),
        borderRadius: BorderRadius.circular(8),
        border: Border.all(
          color: analysis.rating.color.withOpacity(0.3),
        ),
      ),
      child: Row(
        children: [
          Icon(
            analysis.rating.icon,
            color: analysis.rating.color,
            size: 28,
          ),
          const SizedBox(width: 12),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  analysis.rating.label,
                  style: TextStyle(
                    color: analysis.rating.color,
                    fontWeight: FontWeight.bold,
                    fontSize: 13,
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildCGCPVisualization(StabilityAnalysis analysis) {
    // Accept marginal stability (0.3+) as flyable - matches physics thresholds
    final isStable = analysis.staticMargin >= 0.3 && analysis.staticMargin < 2.5;
    
    return Container(
      margin: const EdgeInsets.symmetric(horizontal: 16),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: Colors.white.withOpacity(0.05),
        borderRadius: BorderRadius.circular(8),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // Mini diagram
          Row(
            children: [
              Expanded(
                child: Container(
                  height: 60,
                  decoration: BoxDecoration(
                    gradient: LinearGradient(
                      begin: Alignment.topCenter,
                      end: Alignment.bottomCenter,
                      colors: [
                        Colors.white.withOpacity(0.1),
                        Colors.white.withOpacity(0.05),
                      ],
                    ),
                    borderRadius: BorderRadius.circular(4),
                  ),
                  child: Stack(
                    children: [
                      // Rocket representation (simplified)
                      Center(
                        child: Container(
                          width: 20,
                          height: 50,
                          decoration: BoxDecoration(
                            color: Colors.grey.withOpacity(0.3),
                            borderRadius: BorderRadius.circular(10),
                            border: Border.all(
                              color: Colors.white.withOpacity(0.3),
                            ),
                          ),
                        ),
                      ),
                      // CG marker (blue - higher up)
                      Positioned(
                        top: 15,
                        left: 0,
                        right: 0,
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: [
                            Container(
                              width: 60,
                              height: 2,
                              color: Colors.blue,
                            ),
                            Container(
                              width: 8,
                              height: 8,
                              decoration: const BoxDecoration(
                                color: Colors.blue,
                                shape: BoxShape.circle,
                              ),
                            ),
                            Container(
                              width: 60,
                              height: 2,
                              color: Colors.blue,
                            ),
                          ],
                        ),
                      ),
                      // CP marker (orange - lower)
                      Positioned(
                        top: 35,
                        left: 0,
                        right: 0,
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: [
                            Container(
                              width: 60,
                              height: 2,
                              color: Colors.orange,
                            ),
                            Container(
                              width: 8,
                              height: 8,
                              decoration: const BoxDecoration(
                                color: Colors.orange,
                                shape: BoxShape.circle,
                              ),
                            ),
                            Container(
                              width: 60,
                              height: 2,
                              color: Colors.orange,
                            ),
                          ],
                        ),
                      ),
                      // Labels
                      const Positioned(
                        left: 8,
                        top: 10,
                        child: Text(
                          'CG',
                          style: TextStyle(
                            color: Colors.blue,
                            fontSize: 9,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                      ),
                      const Positioned(
                        left: 8,
                        top: 38,
                        child: Text(
                          'CP',
                          style: TextStyle(
                            color: Colors.orange,
                            fontSize: 9,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
              const SizedBox(width: 12),
              // Margin indicator
              Container(
                padding: const EdgeInsets.all(8),
                decoration: BoxDecoration(
                  color: isStable ? Colors.green.withOpacity(0.1) : Colors.orange.withOpacity(0.1),
                  borderRadius: BorderRadius.circular(6),
                  border: Border.all(
                    color: isStable ? Colors.green.withOpacity(0.3) : Colors.orange.withOpacity(0.3),
                  ),
                ),
                child: Column(
                  children: [
                    Text(
                      analysis.staticMargin.toStringAsFixed(1),
                      style: TextStyle(
                        color: isStable ? Colors.green : Colors.orange,
                        fontSize: 20,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                    Text(
                      'calibers',
                      style: TextStyle(
                        color: Colors.white.withOpacity(0.5),
                        fontSize: 9,
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          Text(
            'Margin: ${analysis.staticMargin.toStringAsFixed(1)} calibers',
            style: TextStyle(
              color: Colors.white.withOpacity(0.5),
              fontSize: 10,
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildStatsGrid(StabilityAnalysis analysis) {
    return Padding(
      padding: const EdgeInsets.all(16),
      child: Column(
        children: [
          _buildStatRow(
            'Mass',
            '${(analysis.totalMass / 1000).toStringAsFixed(1)} t',
            Icons.fitness_center,
            '',
          ),
          const SizedBox(height: 8),
          _buildStatRow(
            'Thrust',
            '${(analysis.totalThrust / 1000000).toStringAsFixed(1)} MN',
            Icons.local_fire_department,
            '',
          ),
          const SizedBox(height: 8),
          _buildStatRow(
            'TWR',
            analysis.thrustToWeightRatio.toStringAsFixed(2),
            Icons.trending_up,
            '',
            isGood: analysis.thrustToWeightRatio > 1.1,
          ),
        ],
      ),
    );
  }

  Widget _buildStatRow(String label, String value, IconData icon, String note, {bool? isGood}) {
    final good = isGood ?? true;
    
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
      decoration: BoxDecoration(
        color: Colors.white.withOpacity(0.05),
        borderRadius: BorderRadius.circular(6),
      ),
      child: Row(
        children: [
          Icon(icon, color: const Color(0xFF909090), size: 18),
          const SizedBox(width: 12),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  label,
                  style: TextStyle(
                    color: Colors.white.withOpacity(0.6),
                    fontSize: 10,
                  ),
                ),
                Text(
                  value,
                  style: const TextStyle(
                    color: Colors.white,
                    fontSize: 14,
                    fontWeight: FontWeight.bold,
                  ),
                ),
              ],
            ),
          ),
          if (isGood != null)
            Icon(
              good ? Icons.check_circle : Icons.error,
              color: good ? Colors.green : Colors.orange,
              size: 18,
            ),
          const SizedBox(width: 8),
          SizedBox(
            width: 60,
            child: Text(
              note,
              style: TextStyle(
                color: Colors.white.withOpacity(0.4),
                fontSize: 8,
              ),
              textAlign: TextAlign.right,
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildIssuesList(List<ValidationIssue> issues) {
    return Container(
      margin: const EdgeInsets.symmetric(horizontal: 16),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: Colors.red.withOpacity(0.1),
        borderRadius: BorderRadius.circular(8),
        border: Border.all(color: Colors.red.withOpacity(0.3)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Icon(Icons.warning, color: Colors.red.withOpacity(0.7), size: 16),
              const SizedBox(width: 8),
              Text(
                'ISSUES TO FIX',
                style: TextStyle(
                  color: Colors.red.withOpacity(0.8),
                  fontSize: 11,
                  fontWeight: FontWeight.bold,
                  letterSpacing: 1,
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          ...issues.map((issue) => _buildIssueItem(issue)),
        ],
      ),
    );
  }

  Widget _buildIssueItem(ValidationIssue issue) {
    final Color color = issue.severity == IssueSeverity.critical 
        ? Colors.red 
        : issue.severity == IssueSeverity.warning 
            ? Colors.orange 
            : Colors.cyanAccent;
    
    return Container(
      margin: const EdgeInsets.only(bottom: 8),
      padding: const EdgeInsets.all(8),
      decoration: BoxDecoration(
        color: color.withOpacity(0.1),
        borderRadius: BorderRadius.circular(4),
        border: Border.all(color: color.withOpacity(0.3)),
      ),
      child: Row(
        children: [
          Icon(issue.icon, color: color, size: 14),
          const SizedBox(width: 6),
          Expanded(
            child: Text(
              issue.title,
              style: TextStyle(
                color: color,
                fontWeight: FontWeight.bold,
                fontSize: 11,
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildRecommendations(List<ValidationRecommendation> recommendations) {
    return Container(
      margin: const EdgeInsets.fromLTRB(16, 8, 16, 16),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: Colors.blue.withOpacity(0.1),
        borderRadius: BorderRadius.circular(8),
        border: Border.all(color: Colors.blue.withOpacity(0.3)),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            children: [
              Icon(Icons.lightbulb, color: Colors.blue.withOpacity(0.7), size: 16),
              const SizedBox(width: 8),
              Text(
                'RECOMMENDATIONS',
                style: TextStyle(
                  color: Colors.blue.withOpacity(0.8),
                  fontSize: 11,
                  fontWeight: FontWeight.bold,
                  letterSpacing: 1,
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          ...recommendations.map((rec) => _buildRecommendationItem(rec)),
        ],
      ),
    );
  }

  Widget _buildRecommendationItem(ValidationRecommendation rec) {
    return Container(
      margin: const EdgeInsets.only(bottom: 6),
      padding: const EdgeInsets.all(6),
      decoration: BoxDecoration(
        color: Colors.white.withOpacity(0.05),
        borderRadius: BorderRadius.circular(4),
      ),
      child: Row(
        children: [
          Icon(rec.icon, color: Colors.green, size: 12),
          const SizedBox(width: 6),
          Expanded(
            child: Text(
              rec.action,
              style: const TextStyle(
                color: Colors.white,
                fontSize: 10,
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildLaunchButton() {
    return Container(
      margin: const EdgeInsets.all(16),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: const Color(0xFF1E2E1E),
        borderRadius: BorderRadius.circular(8),
        border: Border.all(color: const Color(0xFF404040)),
      ),
      child: Column(
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              const Icon(Icons.check_circle, color: Color(0xFF4CAF50), size: 24),
              const SizedBox(width: 8),
              const Text(
                'READY TO LAUNCH',
                style: TextStyle(
                  color: Color(0xFF4CAF50),
                  fontWeight: FontWeight.w400,
                  fontSize: 14,
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton.icon(
              onPressed: onLaunch,
              icon: const Icon(Icons.rocket_launch, size: 20, color: Colors.white),
              label: const Text(
                'LAUNCH',
                style: TextStyle(fontWeight: FontWeight.w400, letterSpacing: 1, color: Colors.white),
              ),
              style: ElevatedButton.styleFrom(
                backgroundColor: const Color(0xFF4CAF50),
                foregroundColor: Colors.white,
                padding: const EdgeInsets.symmetric(vertical: 14),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(8),
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildRiskyLaunchButton() {
    return Container(
      margin: const EdgeInsets.all(16),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: const Color(0xFF2E2A1E),
        borderRadius: BorderRadius.circular(8),
        border: Border.all(color: const Color(0xFF404040)),
      ),
      child: Column(
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              const Icon(Icons.warning_amber_rounded, color: Color(0xFFFFA726), size: 24),
              const SizedBox(width: 8),
              const Text(
                'RISKY LAUNCH',
                style: TextStyle(
                  color: Color(0xFFFFA726),
                  fontWeight: FontWeight.w400,
                  fontSize: 14,
                ),
              ),
            ],
          ),
          const SizedBox(height: 8),
          SizedBox(
            width: double.infinity,
            child: ElevatedButton.icon(
              onPressed: onRiskyLaunch ?? onLaunch,
              icon: const Icon(Icons.rocket_launch, size: 20, color: Colors.white),
              label: const Text(
                'LAUNCH (RISKY)',
                style: TextStyle(fontWeight: FontWeight.w400, letterSpacing: 1, color: Colors.white),
              ),
              style: ElevatedButton.styleFrom(
                backgroundColor: const Color(0xFFFFA726),
                foregroundColor: Colors.white,
                padding: const EdgeInsets.symmetric(vertical: 14),
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(8),
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }

}
