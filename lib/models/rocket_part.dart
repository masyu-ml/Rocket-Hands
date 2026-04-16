enum PartType {
  stage,
  engine,
  nozzle,
  booster,
  capsule,
  escape,
  connector,
  noseCone,
}

enum RocketFamily {
  saturnV,
  deltaIII,
}

class RocketPart {
  final String id;
  final String name;
  final String imagePath;
  final PartType type;
  final RocketFamily family;
  
  // Physics properties (the "rigged" weights from our tables)
  final double mass;              // kg
  final double thrust;            // Newtons
  final double structuralStrength; // Max G-force
  final double dragCoefficient;   // Air resistance
  final double diameter;          // meters
  final double height;            // meters
  
  const RocketPart({
    required this.id,
    required this.name,
    required this.imagePath,
    required this.type,
    required this.family,
    required this.mass,
    required this.thrust,
    required this.structuralStrength,
    required this.dragCoefficient,
    required this.diameter,
    required this.height,
  });
}