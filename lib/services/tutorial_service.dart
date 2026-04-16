import 'package:shared_preferences/shared_preferences.dart';
import '../widgets/tutorial_overlay.dart';

/// Service for managing tutorial persistence
class TutorialService {
  static const String _tutorialCompletedKey = 'tutorial_completed';
  static const String _tutorialVersionKey = 'tutorial_version';
  
  // Increment this when you update the tutorial to force users to see it again
  static const int currentTutorialVersion = 1;

  static Future<bool> shouldShowTutorial() async {
    final prefs = await SharedPreferences.getInstance();
    final completed = prefs.getBool(_tutorialCompletedKey) ?? false;
    final seenVersion = prefs.getInt(_tutorialVersionKey) ?? 0;
    
    // Show if not completed or if tutorial was updated
    return !completed || seenVersion < currentTutorialVersion;
  }

  static Future<void> markTutorialCompleted() async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setBool(_tutorialCompletedKey, true);
    await prefs.setInt(_tutorialVersionKey, currentTutorialVersion);
  }

  static Future<void> resetTutorial() async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setBool(_tutorialCompletedKey, false);
    await prefs.setInt(_tutorialVersionKey, 0);
  }
}

/// Pre-defined tutorial steps for the rocket builder
class RocketBuilderTutorial {
  static List<TutorialStep> getSteps() {
    return [
      TutorialStep(
        id: 'welcome',
        title: 'Welcome to HCI Rocket Builder!',
        message: 'This tutorial will guide you through building your first rocket. You can skip anytime using the button in the top right.',
        position: TooltipPosition.center,
        allowInteraction: false,
      ),
      
      TutorialStep(
        id: 'parts_menu',
        title: 'Rocket Parts Menu',
        message: 'Tap here to open the parts menu. You\'ll find Saturn V and Delta III rocket components here.',
        targetKey: 'parts_menu_button',
        position: TooltipPosition.bottom,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'select_rocket_type',
        title: 'Choose Your Rocket',
        message: 'Swipe between tabs to select Saturn V or Delta III. Each has different parts and requirements.',
        targetKey: 'rocket_tabs',
        position: TooltipPosition.bottom,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'add_part',
        title: 'Add Parts',
        message: 'Tap on any part to add it to your rocket. Start with an engine or fuel tank at the bottom.',
        targetKey: 'parts_list',
        position: TooltipPosition.right,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'drag_parts',
        title: 'Move Parts',
        message: 'Drag parts to position them. They\'ll snap together when close. Build from bottom (engine) to top (capsule).',
        position: TooltipPosition.center,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'connectors',
        title: 'Use Connectors',
        message: 'Saturn V needs 3 connectors between stages. Delta III needs connectors too. Without them, you\'ll get an orange warning button.',
        position: TooltipPosition.center,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'check_stability',
        title: 'Check Stability',
        message: 'Tap CHECK to analyze your rocket. Green button = perfect, Orange = risky but possible, No button = critical issues.',
        targetKey: 'check_button',
        position: TooltipPosition.top,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'launch_rocket',
        title: 'Launch!',
        message: 'Green button = safe launch with success message. Orange button = risky launch with uncertain outcome. Build properly for best results!',
        targetKey: 'launch_button',
        position: TooltipPosition.top,
        allowInteraction: true,
      ),
      
      TutorialStep(
        id: 'tips',
        title: 'Pro Tips',
        message: '• Saturn V: 3 stages + 3 connectors + F-1 engine + Command Module for green button\\n• Delta III: 2 boosters (or none) + nose cone required\\n• Never mix Saturn V and Delta III parts',
        position: TooltipPosition.center,
        allowInteraction: false,
      ),
      
      TutorialStep(
        id: 'complete',
        title: 'You\'re Ready!',
        message: 'That\'s it! Build amazing rockets and reach for the stars. Tap FINISH to start building.',
        position: TooltipPosition.center,
        allowInteraction: false,
      ),
    ];
  }
}
