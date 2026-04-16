import 'package:flutter/material.dart';
import 'dart:ui';
import 'dart:math' as math;
import 'package:flutter/services.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:url_launcher/url_launcher.dart';
import 'package:permission_handler/permission_handler.dart';
import 'screens/spaceflight_2d_screen.dart';
import 'screens/rocket_info_screen.dart';
import 'widgets/help_dialog.dart';

void main() {
  runApp(const RocketHandsApp());
}

class RocketHandsApp extends StatelessWidget {
  const RocketHandsApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Rocket Hands',
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        brightness: Brightness.dark,
        scaffoldBackgroundColor: Colors.black,
        useMaterial3: true,
      ),
      home: const MainMenuScreen(),
    );
  }
}

class StarfieldPainter extends CustomPainter {
  final Animation<double> animation;
  final List<Star> stars;

  StarfieldPainter(this.animation, this.stars) : super(repaint: animation);

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()..color = Colors.white;

    for (var star in stars) {
      star.twinkleProgress += star.twinkleSpeed;
      if (star.twinkleProgress > 1.0) {
        star.twinkleProgress = 0.0;
      }

      double twinkleOpacity = (math.sin(star.twinkleProgress * math.pi * 2) + 1) / 2;
      double finalOpacity = star.baseOpacity * twinkleOpacity;

      canvas.drawCircle(
        Offset(star.x, star.y),
        star.size,
        paint..color = Colors.white.withOpacity(finalOpacity),
      );
    }
  }

  @override
  bool shouldRepaint(StarfieldPainter oldDelegate) => true;
}

class Star {
  final double x;
  final double y;
  final double size;
  final double baseOpacity;
  final double twinkleSpeed;
  double twinkleProgress;

  Star(this.x, this.y, this.size, this.baseOpacity, this.twinkleSpeed, this.twinkleProgress);
}

class FloatingParticle {
  double x;
  double y;
  final double size;
  final double speed;
  final double opacity;
  double progress;

  FloatingParticle(this.x, this.y, this.size, this.speed, this.opacity, this.progress);
}

class FloatingParticlesPainter extends CustomPainter {
  final Animation<double> animation;
  final List<FloatingParticle> particles;

  FloatingParticlesPainter(this.animation, this.particles) : super(repaint: animation);

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()..color = Colors.white;

    for (var particle in particles) {
      particle.progress += particle.speed;
      if (particle.progress > 1.0) {
        particle.progress = 0.0;
        particle.x = math.Random().nextDouble() * size.width;
        particle.y = size.height + 10;
      }

      double y = particle.y - (particle.progress * size.height * 0.5);
      double x = particle.x + math.sin(particle.progress * math.pi * 2) * 20;
      
      double fadeOpacity = particle.progress < 0.1 
          ? particle.progress * 10 
          : particle.progress > 0.9 
              ? (1 - particle.progress) * 10 
              : 1.0;

      canvas.drawCircle(
        Offset(x, y),
        particle.size,
        paint..color = Colors.white.withOpacity(particle.opacity * fadeOpacity * 0.4),
      );
    }
  }

  @override
  bool shouldRepaint(FloatingParticlesPainter oldDelegate) => true;
}

class MainMenuScreen extends StatefulWidget {
  const MainMenuScreen({super.key});

  @override
  State<MainMenuScreen> createState() => _MainMenuScreenState();
}

class _MainMenuScreenState extends State<MainMenuScreen> with TickerProviderStateMixin {
  static const platform = MethodChannel('com.rocket_hands/unity');
  late AnimationController _buttonController;
  late AnimationController _starController;
  late Animation<double> _scaleAnimation;
  final List<Star> _stars = [];
  final List<FloatingParticle> _particles = [];

  @override
  void initState() {
    super.initState();

    _buttonController = AnimationController(
      duration: const Duration(seconds: 2),
      vsync: this,
    )..repeat(reverse: true);

    _scaleAnimation = Tween<double>(begin: 1.0, end: 1.05).animate(
      CurvedAnimation(parent: _buttonController, curve: Curves.easeInOut),
    );

    _starController = AnimationController(
      duration: const Duration(milliseconds: 50),
      vsync: this,
    )..repeat();

    WidgetsBinding.instance.addPostFrameCallback((_) {
      _generateStars();
      _generateParticles();
    });
  }

  void _generateStars() {
    final random = math.Random();
    final size = MediaQuery.of(context).size;
    
    setState(() {
      _stars.clear();
      for (int i = 0; i < 200; i++) {
        _stars.add(Star(
          random.nextDouble() * size.width,
          random.nextDouble() * size.height,
          random.nextDouble() * 1.5 + 0.5,
          random.nextDouble() * 0.5 + 0.5,
          random.nextDouble() * 0.02 + 0.01,
          random.nextDouble(),
        ));
      }
    });
  }

  void _generateParticles() {
    final random = math.Random();
    final size = MediaQuery.of(context).size;
    
    setState(() {
      _particles.clear();
      for (int i = 0; i < 30; i++) {
        _particles.add(FloatingParticle(
          random.nextDouble() * size.width,
          size.height + random.nextDouble() * 100,
          random.nextDouble() * 2 + 1,
          random.nextDouble() * 0.002 + 0.001,
          random.nextDouble() * 0.5 + 0.3,
          random.nextDouble(),
        ));
      }
    });
  }

  Future<void> _launchUnity3D() async {
    // Request camera permission first
    var status = await Permission.camera.status;
    if (!status.isGranted) {
      status = await Permission.camera.request();
    }
    
    if (status.isGranted) {
      try {
        await platform.invokeMethod('launchUnity');
      } on PlatformException catch (e) {
        debugPrint("Failed to launch Unity: ${e.message}");
      }
    } else {
      debugPrint("Camera permission denied");
    }
  }

  @override
  void dispose() {
    _buttonController.dispose();
    _starController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFF121212),
      body: Stack(
        children: [
          AnimatedBuilder(
            animation: _buttonController,
            builder: (context, child) {
              return Container(
                decoration: BoxDecoration(
                  gradient: LinearGradient(
                    begin: Alignment.topCenter,
                    end: Alignment.bottomCenter,
                    colors: [
                      Color.lerp(const Color(0xFF121212), const Color(0xFF1A1A2A), _buttonController.value * 0.3) ?? const Color(0xFF121212),
                      const Color(0xFF1E1E1E),
                      Color.lerp(const Color(0xFF252525), const Color(0xFF202030), _buttonController.value * 0.2) ?? const Color(0xFF252525),
                    ],
                  ),
                ),
              );
            },
          ),

          if (_particles.isNotEmpty)
            AnimatedBuilder(
              animation: _starController,
              builder: (context, child) {
                return CustomPaint(
                  painter: FloatingParticlesPainter(_starController, _particles),
                  size: Size.infinite,
                );
              },
            ),

          if (_stars.isNotEmpty)
            AnimatedBuilder(
              animation: _starController,
              builder: (context, child) {
                return CustomPaint(
                  painter: StarfieldPainter(_starController, _stars),
                  size: Size.infinite,
                );
              },
            ),

          Center(
            child: AnimatedBuilder(
              animation: _buttonController,
              builder: (context, child) {
                final floatOffset = math.sin(_buttonController.value * math.pi * 2) * 5;
                return Transform.translate(
                  offset: Offset(0, floatOffset),
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      _buildNeonTitle("ROCKET"),
                      _buildNeonTitle("HANDS"),

                      const SizedBox(height: 60),

                      ScaleTransition(
                        scale: _scaleAnimation,
                        child: _buildMinimalButton(
                          text: "START PLAYING",
                          icon: Icons.rocket_launch,
                          isPrimary: true,
                          onTap: () {
                            Navigator.push(
                              context,
                              MaterialPageRoute(
                                builder: (context) => const Spaceflight2DScreen(),
                              ),
                            );
                          },
                        ),
                      ),

                      const SizedBox(height: 20),

                      _buildMinimalButton(
                        text: "HOW TO PLAY",
                        icon: Icons.help_outline,
                        isPrimary: false,
                        onTap: () => HelpDialog.show(context),
                      ),

                      const SizedBox(height: 20),

                      _buildMinimalButton(
                        text: "PARTS INFO",
                        icon: Icons.info_outline,
                        isPrimary: false,
                        onTap: () {
                          Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) => const RocketInfoScreen(),
                            ),
                          );
                        },
                      ),

                      const SizedBox(height: 20),

                      _build3DSimulatorButton(),

                      const SizedBox(height: 20),

                      _buildMinimalButton(
                        text: "ABOUT US",
                        icon: Icons.people_outline,
                        isPrimary: false,
                        onTap: () async {
                          final Uri url = Uri.parse('https://github.com/masyu-ml/Rocket-Hands');
                          if (await canLaunchUrl(url)) {
                            await launchUrl(url, mode: LaunchMode.externalApplication);
                          }
                        },
                      ),
                    ],
                  ),
                );
              },
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildNeonTitle(String text) {
    return AnimatedBuilder(
      animation: _buttonController,
      builder: (context, child) {
        final glowOpacity = 0.3 + (_buttonController.value * 0.2);
        return Container(
          decoration: BoxDecoration(
            boxShadow: [
              BoxShadow(
                color: Colors.white.withOpacity(glowOpacity * 0.3),
                blurRadius: 20,
                spreadRadius: 2,
              ),
              BoxShadow(
                color: Colors.white.withOpacity(glowOpacity * 0.1),
                blurRadius: 40,
                spreadRadius: 10,
              ),
            ],
          ),
          child: Text(
            text,
            style: GoogleFonts.orbitron(
              fontSize: 56,
              fontWeight: FontWeight.w700,
              color: Colors.white,
              letterSpacing: 12,
              height: 0.9,
              shadows: [
                BoxShadow(
                  color: Colors.white.withOpacity(glowOpacity),
                  blurRadius: 10,
                  spreadRadius: 0,
                ),
              ],
            ),
          ),
        );
      },
    );
  }

  Widget _buildMinimalButton({
    required String text,
    required IconData icon,
    required bool isPrimary,
    required VoidCallback onTap,
  }) {
    return Container(
      width: 280,
      height: 56,
      decoration: BoxDecoration(
        color: isPrimary ? const Color(0xFF2D2D2D) : Colors.transparent,
        border: Border.all(
          color: isPrimary ? const Color(0xFF404040) : const Color(0xFF404040),
          width: 1,
        ),
        borderRadius: BorderRadius.circular(8),
        boxShadow: isPrimary
            ? [
                BoxShadow(
                  color: Colors.black.withOpacity(0.3),
                  blurRadius: 8,
                  offset: const Offset(0, 2),
                ),
              ]
            : null,
      ),
      child: Material(
        color: Colors.transparent,
        borderRadius: BorderRadius.circular(8),
        child: InkWell(
          onTap: onTap,
          borderRadius: BorderRadius.circular(8),
          splashColor: Colors.white.withOpacity(0.1),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Icon(
                icon,
                color: isPrimary ? Colors.white : const Color(0xFFB0B0B0),
                size: 20,
              ),
              const SizedBox(width: 12),
              Text(
                text,
                style: TextStyle(
                  color: isPrimary ? Colors.white : const Color(0xFFB0B0B0),
                  fontSize: 14,
                  letterSpacing: 2,
                  fontWeight: isPrimary ? FontWeight.w500 : FontWeight.w400,
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _build3DSimulatorButton() {
    return GestureDetector(
      onTap: _launchUnity3D,
      child: Container(
        width: 280,
        height: 60,
        child: Stack(
          children: [
            // Shadow layer for 3D effect
            Positioned(
              left: 4,
              top: 4,
              child: Container(
                width: 272,
                height: 56,
                decoration: BoxDecoration(
                  color: const Color(0xFF1A237E),
                  borderRadius: BorderRadius.circular(12),
                ),
              ),
            ),
            // Main button layer
            Container(
              width: 280,
              height: 56,
              decoration: BoxDecoration(
                gradient: const LinearGradient(
                  begin: Alignment.topLeft,
                  end: Alignment.bottomRight,
                  colors: [
                    Color(0xFF5C6BC0),
                    Color(0xFF3949AB),
                    Color(0xFF283593),
                  ],
                ),
                borderRadius: BorderRadius.circular(12),
                border: Border.all(
                  color: const Color(0xFF7986CB),
                  width: 2,
                ),
                boxShadow: [
                  BoxShadow(
                    color: const Color(0xFF5C6BC0).withOpacity(0.4),
                    blurRadius: 15,
                    spreadRadius: 2,
                    offset: const Offset(0, 4),
                  ),
                ],
              ),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Container(
                    padding: const EdgeInsets.all(6),
                    decoration: BoxDecoration(
                      color: Colors.white.withOpacity(0.2),
                      borderRadius: BorderRadius.circular(8),
                    ),
                    child: const Icon(
                      Icons.threed_rotation,
                      color: Colors.white,
                      size: 22,
                    ),
                  ),
                  const SizedBox(width: 12),
                  Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        "3D SIMULATOR",
                        style: TextStyle(
                          color: Colors.white,
                          fontSize: 14,
                          letterSpacing: 2,
                          fontWeight: FontWeight.w700,
                          shadows: [
                            BoxShadow(
                              color: Colors.black.withOpacity(0.3),
                              blurRadius: 4,
                              offset: const Offset(1, 1),
                            ),
                          ],
                        ),
                      ),
                      Text(
                        "Unity Powered",
                        style: TextStyle(
                          color: Colors.white.withOpacity(0.7),
                          fontSize: 10,
                          letterSpacing: 1,
                        ),
                      ),
                    ],
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
