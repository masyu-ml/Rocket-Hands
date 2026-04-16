import 'package:flutter/material.dart';
import 'dart:ui';

/// Data class for a single tutorial step
class TutorialStep {
  final String id;
  final String title;
  final String message;
  final String? targetKey; // GlobalKey identifier for highlighting
  final TooltipPosition position;
  final bool allowInteraction; // Can user interact with UI during this step?
  final VoidCallback? onShow; // Callback when step shows

  TutorialStep({
    required this.id,
    required this.title,
    required this.message,
    this.targetKey,
    this.position = TooltipPosition.bottom,
    this.allowInteraction = false,
    this.onShow,
  });
}

enum TooltipPosition { top, bottom, left, right, center }

/// Tutorial controller - manages state and persistence
class TutorialController extends ChangeNotifier {
  bool _isActive = false;
  int _currentStep = 0;
  final List<TutorialStep> steps;
  final String tutorialId;
  final VoidCallback? onComplete;
  final VoidCallback? onSkip;

  TutorialController({
    required this.steps,
    required this.tutorialId,
    this.onComplete,
    this.onSkip,
  });

  bool get isActive => _isActive;
  int get currentStep => _currentStep;
  TutorialStep? get currentStepData => _isActive && _currentStep < steps.length ? steps[_currentStep] : null;
  bool get isLastStep => _currentStep == steps.length - 1;
  double get progress => steps.isEmpty ? 0 : (_currentStep + 1) / steps.length;

  void start() {
    _isActive = true;
    _currentStep = 0;
    _triggerOnShow();
    notifyListeners();
  }

  void next() {
    if (_currentStep < steps.length - 1) {
      _currentStep++;
      _triggerOnShow();
      notifyListeners();
    } else {
      complete();
    }
  }

  void previous() {
    if (_currentStep > 0) {
      _currentStep--;
      _triggerOnShow();
      notifyListeners();
    }
  }

  void complete() {
    _isActive = false;
    onComplete?.call();
    notifyListeners();
  }

  void skip() {
    _isActive = false;
    onSkip?.call();
    notifyListeners();
  }

  void goToStep(int index) {
    if (index >= 0 && index < steps.length) {
      _currentStep = index;
      _triggerOnShow();
      notifyListeners();
    }
  }

  void _triggerOnShow() {
    if (_currentStep < steps.length) {
      steps[_currentStep].onShow?.call();
    }
  }
}

/// Tutorial overlay widget - renders highlights and tooltips
class TutorialOverlay extends StatelessWidget {
  final TutorialController controller;
  final Map<String, GlobalKey> targetKeys;
  final Widget child;

  const TutorialOverlay({
    super.key,
    required this.controller,
    required this.targetKeys,
    required this.child,
  });

  @override
  Widget build(BuildContext context) {
    return AnimatedBuilder(
      animation: controller,
      builder: (context, _) {
        return Stack(
          children: [
            // Main content
            child,
            
            // Tutorial overlay
            if (controller.isActive)
              _buildOverlay(context),
          ],
        );
      },
    );
  }

  Widget _buildOverlay(BuildContext context) {
    final step = controller.currentStepData;
    if (step == null) return const SizedBox.shrink();

    // Get target position if there's a target key
    Rect? targetRect;
    if (step.targetKey != null && targetKeys.containsKey(step.targetKey)) {
      final key = targetKeys[step.targetKey]!;
      final context = key.currentContext;
      if (context != null) {
        final renderBox = context.findRenderObject() as RenderBox?;
        if (renderBox != null) {
          final position = renderBox.localToGlobal(Offset.zero);
          final size = renderBox.size;
          targetRect = Rect.fromLTWH(position.dx, position.dy, size.width, size.height);
        }
      }
    }

    return Stack(
      children: [
        // Dark background with cutout
        CustomPaint(
          size: MediaQuery.of(context).size,
          painter: _TutorialBackgroundPainter(
            highlightRect: targetRect,
            overlayColor: Colors.black.withOpacity(0.75),
          ),
        ),

        // Tap blocker (if interaction not allowed)
        if (!step.allowInteraction)
          Positioned.fill(
            child: GestureDetector(
              onTap: () {
                // Pulse animation to indicate tapping is blocked
              },
              behavior: HitTestBehavior.translucent,
              child: const SizedBox.expand(),
            ),
          ),

        // Highlight border around target
        if (targetRect != null)
          Positioned(
            left: targetRect.left - 4,
            top: targetRect.top - 4,
            width: targetRect.width + 8,
            height: targetRect.height + 8,
            child: Container(
              decoration: BoxDecoration(
                border: Border.all(
                  color: Colors.cyanAccent,
                  width: 3,
                ),
                borderRadius: BorderRadius.circular(8),
                boxShadow: [
                  BoxShadow(
                    color: Colors.cyanAccent.withOpacity(0.5),
                    blurRadius: 20,
                    spreadRadius: 5,
                  ),
                ],
              ),
            ),
          ),

        // Tooltip
        _buildTooltip(context, step, targetRect),

        // Controls (bottom)
        Positioned(
          left: 0,
          right: 0,
          bottom: 40,
          child: _buildControls(),
        ),

        // Progress indicator (top)
        Positioned(
          left: 20,
          right: 20,
          top: 60,
          child: _buildProgressBar(),
        ),

        // Skip button (top right)
        Positioned(
          top: 60,
          right: 20,
          child: _buildSkipButton(),
        ),
      ],
    );
  }

  Widget _buildTooltip(BuildContext context, TutorialStep step, Rect? targetRect) {
    // Calculate tooltip position
    Offset tooltipPosition;
    double maxWidth = 300;

    final screenSize = MediaQuery.of(context).size;

    if (targetRect == null || step.position == TooltipPosition.center) {
      // Center of screen
      tooltipPosition = Offset(
        (screenSize.width - maxWidth) / 2,
        screenSize.height / 2 - 100,
      );
    } else {
      switch (step.position) {
        case TooltipPosition.bottom:
          tooltipPosition = Offset(
            targetRect.center.dx - maxWidth / 2,
            targetRect.bottom + 20,
          );
          break;
        case TooltipPosition.top:
          tooltipPosition = Offset(
            targetRect.center.dx - maxWidth / 2,
            targetRect.top - 180,
          );
          break;
        case TooltipPosition.right:
          tooltipPosition = Offset(
            targetRect.right + 20,
            targetRect.center.dy - 75,
          );
          break;
        case TooltipPosition.left:
          tooltipPosition = Offset(
            targetRect.left - maxWidth - 20,
            targetRect.center.dy - 75,
          );
          break;
        default:
          tooltipPosition = Offset(
            (screenSize.width - maxWidth) / 2,
            screenSize.height / 2 - 100,
          );
      }
    }

    // Clamp to screen bounds
    tooltipPosition = Offset(
      tooltipPosition.dx.clamp(20, screenSize.width - maxWidth - 20),
      tooltipPosition.dy.clamp(100, screenSize.height - 200),
    );

    return Positioned(
      left: tooltipPosition.dx,
      top: tooltipPosition.dy,
      child: Container(
        width: maxWidth,
        padding: const EdgeInsets.all(20),
        decoration: BoxDecoration(
          color: Colors.black.withOpacity(0.95),
          borderRadius: BorderRadius.circular(12),
          border: Border.all(
            color: Colors.cyanAccent.withOpacity(0.5),
            width: 2,
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
          crossAxisAlignment: CrossAxisAlignment.start,
          mainAxisSize: MainAxisSize.min,
          children: [
            Text(
              step.title,
              style: const TextStyle(
                color: Colors.cyanAccent,
                fontSize: 18,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 12),
            Text(
              step.message,
              style: TextStyle(
                color: Colors.white.withOpacity(0.9),
                fontSize: 14,
                height: 1.5,
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildControls() {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 40),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          // Previous button
          if (controller.currentStep > 0)
            ElevatedButton.icon(
              onPressed: controller.previous,
              icon: const Icon(Icons.arrow_back),
              label: const Text('BACK'),
              style: ElevatedButton.styleFrom(
                backgroundColor: Colors.white.withOpacity(0.2),
                foregroundColor: Colors.white,
              ),
            )
          else
            const SizedBox(width: 120),

          const SizedBox(width: 20),

          // Next/Complete button
          ElevatedButton.icon(
            onPressed: controller.next,
            icon: Icon(controller.isLastStep ? Icons.check : Icons.arrow_forward),
            label: Text(controller.isLastStep ? 'FINISH' : 'NEXT'),
            style: ElevatedButton.styleFrom(
              backgroundColor: Colors.cyanAccent,
              foregroundColor: Colors.black,
              padding: const EdgeInsets.symmetric(horizontal: 24, vertical: 12),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildProgressBar() {
    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        Row(
          children: [
            Text(
              'Step ${controller.currentStep + 1} of ${controller.steps.length}',
              style: TextStyle(
                color: Colors.white.withOpacity(0.7),
                fontSize: 12,
              ),
            ),
            const SizedBox(width: 12),
            Expanded(
              child: ClipRRect(
                borderRadius: BorderRadius.circular(4),
                child: LinearProgressIndicator(
                  value: controller.progress,
                  backgroundColor: Colors.white.withOpacity(0.2),
                  valueColor: const AlwaysStoppedAnimation<Color>(Colors.cyanAccent),
                  minHeight: 6,
                ),
              ),
            ),
          ],
        ),
      ],
    );
  }

  Widget _buildSkipButton() {
    return TextButton.icon(
      onPressed: controller.skip,
      icon: const Icon(Icons.close, size: 18),
      label: const Text('SKIP TUTORIAL'),
      style: TextButton.styleFrom(
        foregroundColor: Colors.white.withOpacity(0.6),
        padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
      ),
    );
  }
}

/// Custom painter for dark background with highlight cutout
class _TutorialBackgroundPainter extends CustomPainter {
  final Rect? highlightRect;
  final Color overlayColor;

  _TutorialBackgroundPainter({
    required this.highlightRect,
    required this.overlayColor,
  });

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()
      ..color = overlayColor
      ..style = PaintingStyle.fill;

    if (highlightRect == null) {
      // Full screen overlay
      canvas.drawRect(
        Rect.fromLTWH(0, 0, size.width, size.height),
        paint,
      );
      return;
    }

    // Create path with cutout
    final path = Path()
      ..addRect(Rect.fromLTWH(0, 0, size.width, size.height));

    // Cut out the highlight area
    final cutoutPath = Path()
      ..addRRect(
        RRect.fromRectAndRadius(
          Rect.fromLTWH(
            highlightRect!.left - 8,
            highlightRect!.top - 8,
            highlightRect!.width + 16,
            highlightRect!.height + 16,
          ),
          const Radius.circular(12),
        ),
      );

    final finalPath = Path.combine(
      PathOperation.difference,
      path,
      cutoutPath,
    );

    canvas.drawPath(finalPath, paint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => true;
}
