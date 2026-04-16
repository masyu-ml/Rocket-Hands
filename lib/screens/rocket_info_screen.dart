import 'package:flutter/material.dart';
import '../models/rocket_part.dart';
import '../data/parts_database.dart';

class RocketInfoScreen extends StatelessWidget {
  const RocketInfoScreen({super.key});

  @override
  Widget build(BuildContext context) {
    final allParts = PartsDatabase.getAllParts();

    return Scaffold(
      backgroundColor: const Color(0xFF0A0E27),
      body: Stack(
        children: [
          // Background gradient
          Container(
            decoration: const BoxDecoration(
              gradient: LinearGradient(
                begin: Alignment.topCenter,
                end: Alignment.bottomCenter,
                colors: [
                  Color(0xFF000000),
                  Color(0xFF0A0E27),
                  Color(0xFF1A1A2E),
                ],
              ),
            ),
          ),

          // Content
          SafeArea(
            child: Column(
              children: [
                // Header
                Container(
                  height: 60,
                  decoration: BoxDecoration(
                    color: Colors.black.withOpacity(0.7),
                    border: Border(
                      bottom: BorderSide(
                        color: Colors.cyanAccent.withOpacity(0.3),
                        width: 1,
                      ),
                    ),
                  ),
                  child: Row(
                    children: [
                      IconButton(
                        icon: const Icon(Icons.arrow_back, color: Colors.white),
                        onPressed: () => Navigator.pop(context),
                      ),
                      const Expanded(
                        child: Center(
                          child: Text(
                            "ROCKET PARTS INFO",
                            style: TextStyle(
                              color: Colors.cyanAccent,
                              fontSize: 18,
                              fontWeight: FontWeight.bold,
                              letterSpacing: 2,
                            ),
                          ),
                        ),
                      ),
                      const SizedBox(width: 48), // Balance the back button
                    ],
                  ),
                ),

                // Scrollable list of parts
                Expanded(
                  child: ListView.builder(
                    padding: const EdgeInsets.all(16),
                    itemCount: allParts.length,
                    itemBuilder: (context, index) {
                      final part = allParts[index];
                      return _buildPartCard(context, part);
                    },
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildPartCard(BuildContext context, RocketPart part) {
    return Card(
      color: Colors.white.withOpacity(0.05),
      margin: const EdgeInsets.only(bottom: 16),
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(12),
        side: BorderSide(
          color: Colors.cyanAccent.withOpacity(0.3),
          width: 1,
        ),
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          // Part Image
          ClipRRect(
            borderRadius: const BorderRadius.vertical(top: Radius.circular(12)),
            child: Container(
              width: double.infinity,
              height: 200,
              color: Colors.black.withOpacity(0.3),
              child: Image.asset(
                part.imagePath,
                fit: BoxFit.contain,
                errorBuilder: (context, error, stackTrace) {
                  return Center(
                    child: Icon(
                      _getIconForPartType(part.type),
                      color: Colors.cyanAccent.withOpacity(0.5),
                      size: 80,
                    ),
                  );
                },
              ),
            ),
          ),

          // Part Info
          Padding(
            padding: const EdgeInsets.all(16),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                // Name and Family Badge
                Row(
                  children: [
                    Expanded(
                      child: Text(
                        part.name,
                        style: const TextStyle(
                          color: Colors.white,
                          fontSize: 20,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                    Container(
                      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 4),
                      decoration: BoxDecoration(
                        color: part.family == RocketFamily.saturnV
                            ? Colors.blueAccent.withOpacity(0.3)
                            : Colors.orangeAccent.withOpacity(0.3),
                        borderRadius: BorderRadius.circular(12),
                        border: Border.all(
                          color: part.family == RocketFamily.saturnV
                              ? Colors.blueAccent
                              : Colors.orangeAccent,
                        ),
                      ),
                      child: Text(
                        part.family == RocketFamily.saturnV ? 'SATURN V' : 'DELTA III',
                        style: TextStyle(
                          color: part.family == RocketFamily.saturnV
                              ? Colors.blueAccent
                              : Colors.orangeAccent,
                          fontSize: 10,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ),
                  ],
                ),

                const SizedBox(height: 8),

                // Part Type
                Text(
                  _getPartTypeLabel(part.type),
                  style: TextStyle(
                    color: Colors.cyanAccent.withOpacity(0.8),
                    fontSize: 14,
                    fontWeight: FontWeight.w500,
                  ),
                ),

                const SizedBox(height: 12),

                // Description
                Text(
                  _getPartDescription(part),
                  style: TextStyle(
                    color: Colors.white.withOpacity(0.7),
                    fontSize: 14,
                    height: 1.5,
                  ),
                ),

                const SizedBox(height: 16),

                // Specs Grid
                Container(
                  padding: const EdgeInsets.all(12),
                  decoration: BoxDecoration(
                    color: Colors.black.withOpacity(0.3),
                    borderRadius: BorderRadius.circular(8),
                  ),
                  child: Column(
                    children: [
                      _buildSpecRow('Mass', '${part.mass.toInt()} kg', Icons.fitness_center),
                      const SizedBox(height: 8),
                      _buildSpecRow('Height', '${part.height} m', Icons.height),
                      const SizedBox(height: 8),
                      _buildSpecRow('Diameter', '${part.diameter} m', Icons.circle_outlined),
                      if (part.thrust > 0) ...[
                        const SizedBox(height: 8),
                        _buildSpecRow('Thrust', '${(part.thrust / 1000).toInt()} kN', Icons.rocket_launch),
                      ],
                    ],
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildSpecRow(String label, String value, IconData icon) {
    return Row(
      children: [
        Icon(
          icon,
          color: Colors.cyanAccent.withOpacity(0.6),
          size: 18,
        ),
        const SizedBox(width: 8),
        Text(
          '$label: ',
          style: TextStyle(
            color: Colors.white.withOpacity(0.5),
            fontSize: 13,
          ),
        ),
        Text(
          value,
          style: const TextStyle(
            color: Colors.white,
            fontSize: 13,
            fontWeight: FontWeight.bold,
          ),
        ),
      ],
    );
  }

  String _getPartTypeLabel(PartType type) {
    switch (type) {
      case PartType.stage:
        return 'Rocket Stage';
      case PartType.engine:
        return 'Engine';
      case PartType.nozzle:
        return 'Engine Nozzle';
      case PartType.booster:
        return 'Side Booster';
      case PartType.capsule:
        return 'Crew Capsule';
      case PartType.escape:
        return 'Escape System';
      case PartType.connector:
        return 'Interstage Connector';
      case PartType.noseCone:
        return 'Nose Cone / Fairing';
    }
  }

  String _getPartDescription(RocketPart part) {
    final descriptions = {
      // Saturn V
      'Saturn V First Stage': 'The massive first stage of the Saturn V rocket, powered by five F-1 engines. It provided the initial thrust needed to lift the entire rocket off the launch pad and carry it through the first 68 kilometers of ascent.',
      'Saturn V Second Stage': 'The second stage used five J-2 engines and carried the rocket from 68km to 175km altitude. It burned liquid hydrogen and liquid oxygen to push the spacecraft closer to orbital velocity.',
      'Saturn V Third Stage': 'A single J-2 engine powered this stage, which had two critical jobs: pushing the Apollo spacecraft into Earth orbit, then restarting for the Translunar Injection burn to send astronauts to the Moon.',
      'F-1 Engine': 'One of the most powerful single-chamber rocket engines ever built. Five of these massive engines powered the Saturn V first stage, producing a combined 7.6 million pounds of thrust.',
      'Command Module': 'The conical crew cabin where astronauts lived during the mission. It was the only part of the Apollo spacecraft that returned to Earth, splashing down in the ocean with its heat shield and parachutes.',
      'Launch Escape System': 'A tower with solid rockets designed to pull the Command Module to safety if something went wrong during launch. It would activate automatically if the rocket began to fail.',
      'Interstage Connector': 'The structural ring that connected the first and second stages of the Saturn V. It housed separation mechanisms and protected the top of the first stage during ascent.',
      // Delta III
      'Delta III Nose Cone': 'The aerodynamic fairing that protected the payload (usually a satellite) during launch. It was jettisoned once the rocket reached space to reduce weight.',
      'Delta III Fuel Tank': 'The main structural body of the Delta III rocket, containing both liquid hydrogen and liquid oxygen tanks to feed the RS-27 main engine.',
      'Delta III Core Engine': 'The Rocketdyne RS-27A engine that served as the primary propulsion for the Delta III first stage, burning kerosene and liquid oxygen.',
      'RS-27 Engine Nozzle': 'The large bell-shaped nozzle that expanded and accelerated the hot exhaust gases from the RS-27 engine to produce thrust efficiently.',
      'GEM-46 Side Booster': 'Graphite-Epoxy Motor boosters strapped to the sides of the first stage. These solid rockets provided additional thrust during the first minute of flight, then dropped away.',
      'Delta III Interstage': 'The adapter section that connected the first and second stages, allowing the second stage engine to ignite after first stage separation.',
      'Delta III Connector': 'A smaller structural connector used between various sections of the Delta III rocket stack.',
    };
    return descriptions[part.name] ?? 'A critical component of the ${part.family == RocketFamily.saturnV ? "Saturn V" : "Delta III"} rocket system.';
  }

  IconData _getIconForPartType(PartType type) {
    switch (type) {
      case PartType.stage:
        return Icons.battery_full;
      case PartType.engine:
        return Icons.local_fire_department;
      case PartType.nozzle:
        return Icons.filter_tilt_shift;
      case PartType.booster:
        return Icons.bluetooth;
      case PartType.capsule:
        return Icons.home;
      case PartType.escape:
        return Icons.rocket_launch;
      case PartType.connector:
        return Icons.link;
      case PartType.noseCone:
        return Icons.change_history;
    }
  }
}
