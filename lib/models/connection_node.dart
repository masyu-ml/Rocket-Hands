import 'package:flutter/material.dart';
import '../models/rocket_part.dart';

/// Types of connection nodes on rocket parts
enum NodeType {
  top,      // Connects to bottom of part above
  bottom,   // Connects to top of part below  
  left,     // Side booster left attachment
  right,    // Side booster right attachment
  center,   // Center attachment (engines to stage)
}

/// Defines a connection point on a rocket part
class ConnectionNode {
  final NodeType type;
  final String id;
  final Offset offset;  // Offset from part's top-left corner (0-1 normalized)
  final double radius;  // Snap detection radius
  final bool isMale;    // Male connectors plug into female connectors
  
  const ConnectionNode({
    required this.type,
    required this.id,
    required this.offset,
    this.radius = 30.0,
    this.isMale = false,
  });
  
  /// Get the absolute position of this node given the part's position and size
  Offset getAbsolutePosition(Offset partPosition, double partSize) {
    return Offset(
      partPosition.dx + offset.dx * partSize,
      partPosition.dy + offset.dy * partSize,
    );
  }
}

/// Manages connection nodes for different part types
class ConnectionNodeManager {
  
  /// Get connection nodes for a specific part type
  static List<ConnectionNode> getNodesForPart(RocketPart part, double partSize) {
    switch (part.type) {
      case PartType.stage:
        return _getStageNodes(part, partSize);
      case PartType.engine:
        return _getEngineNodes(part, partSize);
      case PartType.nozzle:
        return _getNozzleNodes(part, partSize);
      case PartType.booster:
        return _getBoosterNodes(part, partSize);
      case PartType.capsule:
        return _getCapsuleNodes(part, partSize);
      case PartType.escape:
        return _getEscapeNodes(part, partSize);
      case PartType.connector:
        return _getConnectorNodes(part, partSize);
      case PartType.noseCone:
        return _getNoseConeNodes(part, partSize);
    }
  }
  
  /// Stage: Top (for stage above), Bottom (for engine/stage below), Sides (boosters)
  static List<ConnectionNode> _getStageNodes(RocketPart part, double partSize) {
    final bool hasSideBoosters = part.diameter > 6;
    const double edgeInset = 0.001; // Practically at the edge for flush fit
    
    final nodes = [
      // Top center - connects to stage/capsule above
      ConnectionNode(
        type: NodeType.top,
        id: '${part.id}_top',
        offset: const Offset(0.5, edgeInset),
        radius: partSize * 0.12,
        isMale: true,
      ),
      // Bottom center - connects to stage/engine below
      ConnectionNode(
        type: NodeType.bottom,
        id: '${part.id}_bottom',
        offset: const Offset(0.5, 1.0 - edgeInset),
        radius: partSize * 0.12,
        isMale: false,
      ),
    ];
    
    // Wide stages have side booster attachment points
    if (hasSideBoosters) {
      nodes.addAll([
        ConnectionNode(
          type: NodeType.left,
          id: '${part.id}_left',
          offset: const Offset(0.15, 0.3),  // Left side, upper area
          radius: partSize * 0.15,
          isMale: true,
        ),
        ConnectionNode(
          type: NodeType.right,
          id: '${part.id}_right',
          offset: const Offset(0.85, 0.3),  // Right side, upper area
          radius: partSize * 0.15,
          isMale: true,
        ),
      ]);
    }
    
    return nodes;
  }
  
  /// Engine: Top (connects to stage), Bottom (nozzle attachment)
  static List<ConnectionNode> _getEngineNodes(RocketPart part, double partSize) {
    const double edgeInset = 0.001;
    return [
      ConnectionNode(
        type: NodeType.top,
        id: '${part.id}_top',
        offset: const Offset(0.5, edgeInset),
        radius: partSize * 0.12,
        isMale: false,
      ),
      ConnectionNode(
        type: NodeType.bottom,
        id: '${part.id}_bottom',
        offset: const Offset(0.5, 1.0 - edgeInset),
        radius: partSize * 0.12,
        isMale: true,
      ),
    ];
  }
  
  /// Nozzle: Top (connects to engine)
  static List<ConnectionNode> _getNozzleNodes(RocketPart part, double partSize) {
    const double edgeInset = 0.001;
    return [
      ConnectionNode(
        type: NodeType.top,
        id: '${part.id}_top',
        offset: const Offset(0.5, edgeInset),
        radius: partSize * 0.15,
        isMale: false,
      ),
    ];
  }
  
  /// Booster: Inner side (connects to stage) - has left/right variants
  static List<ConnectionNode> _getBoosterNodes(RocketPart part, double partSize) {
    // Boosters attach at their inner side to the main stage
    return [
      ConnectionNode(
        type: NodeType.left,  // Inner side when on right of rocket
        id: '${part.id}_inner',
        offset: const Offset(0.0, 0.4),  // Left edge, mid-body
        radius: partSize * 0.2,
        isMale: false,
      ),
      ConnectionNode(
        type: NodeType.right,  // Inner side when on left of rocket  
        id: '${part.id}_inner_alt',
        offset: const Offset(1.0, 0.4),  // Right edge, mid-body
        radius: partSize * 0.2,
        isMale: false,
      ),
    ];
  }
  
  /// Capsule: Bottom (connects to stage), Top (escape system)
  static List<ConnectionNode> _getCapsuleNodes(RocketPart part, double partSize) {
    const double edgeInset = 0.001;
    return [
      ConnectionNode(
        type: NodeType.bottom,
        id: '${part.id}_bottom',
        offset: const Offset(0.5, 1.0 - edgeInset),
        radius: partSize * 0.12,
        isMale: true,
      ),
      ConnectionNode(
        type: NodeType.top,
        id: '${part.id}_top',
        offset: const Offset(0.5, edgeInset),
        radius: partSize * 0.12,
        isMale: false,
      ),
    ];
  }
  
  /// Escape System: Bottom (connects to capsule)
  static List<ConnectionNode> _getEscapeNodes(RocketPart part, double partSize) {
    const double edgeInset = 0.001;
    return [
      ConnectionNode(
        type: NodeType.bottom,
        id: '${part.id}_bottom',
        offset: const Offset(0.5, 1.0 - edgeInset),
        radius: partSize * 0.12,
        isMale: true,
      ),
    ];
  }
  
  /// Connector: Top and Bottom
  static List<ConnectionNode> _getConnectorNodes(RocketPart part, double partSize) {
    const double edgeInset = 0.001;
    return [
      ConnectionNode(
        type: NodeType.top,
        id: '${part.id}_top',
        offset: const Offset(0.5, edgeInset),
        radius: partSize * 0.12,
        isMale: true,
      ),
      ConnectionNode(
        type: NodeType.bottom,
        id: '${part.id}_bottom',
        offset: const Offset(0.5, 1.0 - edgeInset),
        radius: partSize * 0.12,
        isMale: false,
      ),
    ];
  }
  
  /// Nose Cone: Bottom (connects to capsule/stage)
  static List<ConnectionNode> _getNoseConeNodes(RocketPart part, double partSize) {
    const double edgeInset = 0.001;
    return [
      ConnectionNode(
        type: NodeType.bottom,
        id: '${part.id}_bottom',
        offset: const Offset(0.5, 1.0 - edgeInset),
        radius: partSize * 0.15,
        isMale: true,
      ),
    ];
  }
  
  /// Check if two node types are compatible for connection
  static bool areNodesCompatible(NodeType type1, NodeType type2, bool isMale1, bool isMale2) {
    // Male connects to female (opposites attract)
    final bool genderCompatible = isMale1 != isMale2;
    
    if (!genderCompatible) return false;
    
    // Node type compatibility rules
    switch (type1) {
      case NodeType.top:
        return type2 == NodeType.bottom;
      case NodeType.bottom:
        return type2 == NodeType.top;
      case NodeType.left:
        return type2 == NodeType.right || type2 == NodeType.left;
      case NodeType.right:
        return type2 == NodeType.left || type2 == NodeType.right;
      case NodeType.center:
        return type2 == NodeType.center;
    }
  }
  
  /// Calculate snap position to align two nodes
  static Offset calculateSnapPosition(
    ConnectionNode draggingNode,
    Offset draggingPartPos,
    double draggingPartSize,
    ConnectionNode targetNode,
    Offset targetPartPos,
    double targetPartSize,
  ) {
    // Get absolute positions
    final draggingNodeAbs = draggingNode.getAbsolutePosition(draggingPartPos, draggingPartSize);
    final targetNodeAbs = targetNode.getAbsolutePosition(targetPartPos, targetPartSize);
    
    // Calculate the offset needed to align the nodes
    final offset = targetNodeAbs - draggingNodeAbs;
    
    // Return new part position
    return Offset(
      draggingPartPos.dx + offset.dx,
      draggingPartPos.dy + offset.dy,
    );
  }
}

/// Result of a snap detection
class SnapResult {
  final Offset snapPosition;
  final ConnectionNode sourceNode;
  final ConnectionNode targetNode;
  final double distance;
  final String targetPartId;
  
  SnapResult({
    required this.snapPosition,
    required this.sourceNode,
    required this.targetNode,
    required this.distance,
    required this.targetPartId,
  });
}
