import 'package:rocket_hands/models/rocket_part.dart';

class PartsDatabase {
  
  // ========== SATURN V PARTS ==========
  
  static const saturnV1stStage = RocketPart(
    id: 'saturn_v_1st_stage',
    name: 'Saturn V First Stage',
    imagePath: 'assets/images/saturn_v/1st_stage.png',
    type: PartType.stage,
    family: RocketFamily.saturnV,
    mass: 130000,
    thrust: 0,
    structuralStrength: 8.0,
    dragCoefficient: 0.25,
    diameter: 10.0,
    height: 42.0,
  );
  
  static const saturnV2ndStage = RocketPart(
    id: 'saturn_v_2nd_stage',
    name: 'Saturn V Second Stage',
    imagePath: 'assets/images/saturn_v/2nd_stage.png',
    type: PartType.stage,
    family: RocketFamily.saturnV,
    mass: 36000,
    thrust: 0,
    structuralStrength: 6.0,
    dragCoefficient: 0.22,
    diameter: 10.0,
    height: 24.8,
  );
  
  static const saturnV3rdStage = RocketPart(
    id: 'saturn_v_3rd_stage',
    name: 'Saturn V Third Stage',
    imagePath: 'assets/images/saturn_v/3rd_stage.png',
    type: PartType.stage,
    family: RocketFamily.saturnV,
    mass: 10000,
    thrust: 0,
    structuralStrength: 4.0,
    dragCoefficient: 0.20,
    diameter: 6.6,
    height: 17.8,
  );
  
  static const saturnVEngineNozzle = RocketPart(
    id: 'saturn_v_engine_nozzle',
    name: 'F-1 Engine',
    imagePath: 'assets/images/saturn_v/engine_nozzle.png',
    type: PartType.nozzle,
    family: RocketFamily.saturnV,
    mass: 8400,
    thrust: 6770000,
    structuralStrength: 8.0,
    dragCoefficient: 0.30,
    diameter: 3.7,
    height: 5.8,
  );
  
  static const saturnVCommandModule = RocketPart(
    id: 'saturn_v_command_module',
    name: 'Command Module',
    imagePath: 'assets/images/saturn_v/command_module.png',
    type: PartType.capsule,
    family: RocketFamily.saturnV,
    mass: 5900,
    thrust: 0,
    structuralStrength: 3.0,
    dragCoefficient: 0.40,
    diameter: 3.9,
    height: 3.2,
  );
  
  static const saturnVLaunchEscape = RocketPart(
    id: 'saturn_v_launch_escape',
    name: 'Launch Escape System',
    imagePath: 'assets/images/saturn_v/launch_escape_system.png',
    type: PartType.escape,
    family: RocketFamily.saturnV,
    mass: 4000,
    thrust: 689000,
    structuralStrength: 2.0,
    dragCoefficient: 0.50,
    diameter: 1.2,
    height: 10.0,
  );
  
  static const saturnVConnector = RocketPart(
    id: 'saturn_v_connector',
    name: 'Interstage Connector',
    imagePath: 'assets/images/saturn_v/connector.png',
    type: PartType.connector,
    family: RocketFamily.saturnV,
    mass: 500,
    thrust: 0,
    structuralStrength: 7.0,
    dragCoefficient: 0.15,
    diameter: 10.0,
    height: 5.5,
  );
  
  // ========== DELTA III PARTS ==========
  
  static const deltaIIICone = RocketPart(
    id: 'delta_iii_cone',
    name: 'Delta III Nose Cone',
    imagePath: 'assets/images/delta_iii/cone.png',
    type: PartType.noseCone,
    family: RocketFamily.deltaIII,
    mass: 800,
    thrust: 0,
    structuralStrength: 3.0,
    dragCoefficient: 0.15,
    diameter: 4.0,
    height: 4.5,
  );
  
  static const deltaIIIFueltank = RocketPart(
    id: 'delta_iii_fueltank',
    name: 'Delta III Fuel Tank',
    imagePath: 'assets/images/delta_iii/fueltank.png',
    type: PartType.stage,
    family: RocketFamily.deltaIII,
    mass: 35000,  // Increased from 23000 for better CG position
    thrust: 0,
    structuralStrength: 5.0,
    dragCoefficient: 0.18,  // Slightly reduced
    diameter: 4.0,
    height: 26.0,
  );
  
  static const deltaIIICoreEngine = RocketPart(
    id: 'delta_iii_core_engine',
    name: 'Delta III Core Engine',
    imagePath: 'assets/images/delta_iii/core_engine.png',
    type: PartType.engine,
    family: RocketFamily.deltaIII,
    mass: 1000,
    thrust: 0,
    structuralStrength: 6.0,
    dragCoefficient: 0.25,
    diameter: 2.4,
    height: 3.4,
  );
  
  static const deltaIIIEngineNozzle = RocketPart(
    id: 'delta_iii_engine_nozzle',
    name: 'RS-27 Engine Nozzle',
    imagePath: 'assets/images/delta_iii/engine_nozzle.png',
    type: PartType.nozzle,
    family: RocketFamily.deltaIII,
    mass: 450,
    thrust: 1054000,
    structuralStrength: 7.0,
    dragCoefficient: 0.30,
    diameter: 1.0,
    height: 3.4,
  );
  
  static const deltaIIISideBooster = RocketPart(
    id: 'delta_iii_side_booster',
    name: 'GEM-46 Side Booster',
    imagePath: 'assets/images/delta_iii/side_booster.png',
    type: PartType.booster,
    family: RocketFamily.deltaIII,
    mass: 12000,
    thrust: 1270000,
    structuralStrength: 6.0,
    dragCoefficient: 0.25,  // Reduced from 0.35
    diameter: 1.2,
    height: 14.7,
  );
  
  static const deltaIIIInterstage = RocketPart(
    id: 'delta_iii_interstage',
    name: 'Delta III Interstage',
    imagePath: 'assets/images/delta_iii/interstage.png',
    type: PartType.connector,
    family: RocketFamily.deltaIII,
    mass: 600,
    thrust: 0,
    structuralStrength: 5.0,
    dragCoefficient: 0.18,
    diameter: 4.0,
    height: 3.0,
  );
  
  static const deltaIIIConnector = RocketPart(
    id: 'delta_iii_connector',
    name: 'Delta III Connector',
    imagePath: 'assets/images/delta_iii/connector.png',
    type: PartType.connector,
    family: RocketFamily.deltaIII,
    mass: 300,
    thrust: 0,
    structuralStrength: 5.0,
    dragCoefficient: 0.15,
    diameter: 4.0,
    height: 2.0,
  );
  
  // ========== HELPER METHODS ==========
  
  /// Get all parts from both rockets
  static List<RocketPart> getAllParts() {
    return [
      // Saturn V
      saturnV1stStage,
      saturnV2ndStage,
      saturnV3rdStage,
      saturnVEngineNozzle,
      saturnVCommandModule,
      saturnVLaunchEscape,
      saturnVConnector,
      
      // Delta III
      deltaIIICone,
      deltaIIIFueltank,
      deltaIIICoreEngine,
      deltaIIIEngineNozzle,
      deltaIIISideBooster,
      deltaIIIInterstage,
      deltaIIIConnector,
    ];
  }
  
  /// Get only Saturn V parts
  static List<RocketPart> getSaturnVParts() {
    return [
      saturnV1stStage,
      saturnV2ndStage,
      saturnV3rdStage,
      saturnVEngineNozzle,
      saturnVCommandModule,
      saturnVLaunchEscape,
      saturnVConnector,
    ];
  }
  
  /// Get only Delta III parts
  static List<RocketPart> getDeltaIIIParts() {
    return [
      deltaIIICone,
      deltaIIIFueltank,
      deltaIIICoreEngine,
      deltaIIIEngineNozzle,
      deltaIIISideBooster,
      deltaIIIInterstage,
      deltaIIIConnector,
    ];
  }
  
  /// Find a specific part by ID
  static RocketPart? getPartById(String id) {
    try {
      return getAllParts().firstWhere((part) => part.id == id);
    } catch (e) {
      return null;
    }
  }
}