import 'package:flutter/material.dart';
import 'dart:math' as math;

class RocketCanvas extends StatefulWidget {
  const RocketCanvas({super.key});

  @override
  State<RocketCanvas> createState() => _RocketCanvasState();
}

class _RocketCanvasState extends State<RocketCanvas> with SingleTickerProviderStateMixin {
  late AnimationController _starController;
  final List<BackgroundStar> _stars = [];

  @override
  void initState() {
    super.initState();
    _starController = AnimationController(
      duration: const Duration(milliseconds: 50),
      vsync: this,
    )..repeat();

    WidgetsBinding.instance.addPostFrameCallback((_) {
      _generateStars();
    });
  }

  void _generateStars() {
    final random = math.Random();
    final size = MediaQuery.of(context).size;
    
    setState(() {
      _stars.clear();
      for (int i = 0; i < 150; i++) {
        _stars.add(BackgroundStar(
          random.nextDouble() * size.width,
          random.nextDouble() * (size.height - 200),
          random.nextDouble() * 1.2 + 0.3,
          random.nextDouble() * 0.4 + 0.6,
          random.nextDouble() * 0.02 + 0.01,
          random.nextDouble(),
        ));
      }
    });
  }

  @override
  void dispose() {
    _starController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
      width: double.infinity,
      height: double.infinity,
      decoration: BoxDecoration(
        gradient: LinearGradient(
          begin: Alignment.topCenter,
          end: Alignment.bottomCenter,
          colors: [
            const Color(0xFF000000),
            const Color(0xFF0A0E27),
            const Color(0xFF1A1A2E),
          ],
        ),
      ),
      child: Stack(
        children: [
          if (_stars.isNotEmpty)
            CustomPaint(
              painter: StarfieldCanvasPainter(_starController, _stars),
              size: Size.infinite,
            ),

          Positioned(
            left: 0,
            right: 0,
            bottom: 0,
            child: CustomPaint(
              painter: MoonSurfacePainter(),
              child: Container(height: 200),
            ),
          ),

          Positioned(
            bottom: 120,
            left: MediaQuery.of(context).size.width / 2 - 100,
            child: Container(
              width: 200,
              height: 8,
              decoration: BoxDecoration(
                color: Colors.grey.shade800,
                borderRadius: BorderRadius.circular(4),
                boxShadow: [
                  BoxShadow(
                    color: Colors.black.withOpacity(0.5),
                    blurRadius: 10,
                    offset: const Offset(0, 3),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class BackgroundStar {
  final double x, y, size, baseOpacity, twinkleSpeed;
  double twinkleProgress;
  BackgroundStar(this.x, this.y, this.size, this.baseOpacity, this.twinkleSpeed, this.twinkleProgress);
}

class StarfieldCanvasPainter extends CustomPainter {
  final Animation<double> animation;
  final List<BackgroundStar> stars;
  StarfieldCanvasPainter(this.animation, this.stars) : super(repaint: animation);

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()..color = Colors.white;
    for (var star in stars) {
      star.twinkleProgress += star.twinkleSpeed;
      if (star.twinkleProgress > 1.0) star.twinkleProgress = 0.0;
      double twinkleOpacity = (math.sin(star.twinkleProgress * math.pi * 2) + 1) / 2;
      canvas.drawCircle(
        Offset(star.x, star.y),
        star.size,
        paint..color = Colors.white.withOpacity(star.baseOpacity * twinkleOpacity),
      );
    }
  }
  @override
  bool shouldRepaint(StarfieldCanvasPainter oldDelegate) => true;
}

class MoonSurfacePainter extends CustomPainter {
  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()..style = PaintingStyle.fill;
    final moonGradient = LinearGradient(
      begin: Alignment.topCenter,
      end: Alignment.bottomCenter,
      colors: [const Color(0xFF4A4A4A), const Color(0xFF2A2A2A)],
    );
    final rect = Rect.fromLTWH(0, 0, size.width, size.height);
    paint.shader = moonGradient.createShader(rect);

    final path = Path();
    path.moveTo(0, size.height * 0.3);
    final random = math.Random(42);
    double x = 0;
    while (x < size.width) {
      path.quadraticBezierTo(
        x + 50, size.height * 0.3 + random.nextDouble() * 30 - 15,
        x + 100, size.height * 0.3 + random.nextDouble() * 30 - 15,
      );
      x += 100;
    }
    path.lineTo(size.width, size.height);
    path.lineTo(0, size.height);
    path.close();
    canvas.drawPath(path, paint);

    final craterPaint = Paint()..color = Colors.black.withOpacity(0.3);
    for (int i = 0; i < 8; i++) {
      canvas.drawCircle(
        Offset(random.nextDouble() * size.width, size.height * 0.3 + random.nextDouble() * 100),
        random.nextDouble() * 20 + 10,
        craterPaint,
      );
    }
  }
  @override
  bool shouldRepaint(MoonSurfacePainter oldDelegate) => false;
}