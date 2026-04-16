import 'package:flutter/material.dart';
import 'rocket_part.dart';

class PositionedRocketPart {
  final RocketPart part;
  final Offset position;
  final Size size;
  final String? attachedToId; // ID of part this is attached to
  final AttachmentPoint? attachmentPoint;

  PositionedRocketPart({
    required this.part,
    required this.position,
    this.size = const Size(60, 60),
    this.attachedToId,
    this.attachmentPoint,
  });

  PositionedRocketPart copyWith({
    RocketPart? part,
    Offset? position,
    Size? size,
    String? attachedToId,
    AttachmentPoint? attachmentPoint,
  }) {
    return PositionedRocketPart(
      part: part ?? this.part,
      position: position ?? this.position,
      size: size ?? this.size,
      attachedToId: attachedToId ?? this.attachedToId,
      attachmentPoint: attachmentPoint ?? this.attachmentPoint,
    );
  }
}

enum AttachmentPoint {
  top,
  bottom,
  left,
  right,
  center,
}

class AttachmentRule {
  final PartType fromType;
  final AttachmentPoint fromPoint;
  final PartType toType;
  final AttachmentPoint toPoint;
  final double snapDistance;

  AttachmentRule({
    required this.fromType,
    required this.fromPoint,
    required this.toType,
    required this.toPoint,
    this.snapDistance = 50.0,
  });

  static List<AttachmentRule> getDefaultRules() {
    return [
      // Stage to Stage
      AttachmentRule(
        fromType: PartType.stage,
        fromPoint: AttachmentPoint.top,
        toType: PartType.stage,
        toPoint: AttachmentPoint.bottom,
      ),
      // Engine to Stage (bottom)
      AttachmentRule(
        fromType: PartType.engine,
        fromPoint: AttachmentPoint.top,
        toType: PartType.stage,
        toPoint: AttachmentPoint.bottom,
      ),
      // Nozzle to Engine (bottom)
      AttachmentRule(
        fromType: PartType.nozzle,
        fromPoint: AttachmentPoint.top,
        toType: PartType.engine,
        toPoint: AttachmentPoint.bottom,
      ),
      // Capsule to Stage (top)
      AttachmentRule(
        fromType: PartType.capsule,
        fromPoint: AttachmentPoint.bottom,
        toType: PartType.stage,
        toPoint: AttachmentPoint.top,
      ),
      // Escape System to Capsule (top)
      AttachmentRule(
        fromType: PartType.escape,
        fromPoint: AttachmentPoint.bottom,
        toType: PartType.capsule,
        toPoint: AttachmentPoint.top,
      ),
      // Nose Cone to Stage (top)
      AttachmentRule(
        fromType: PartType.noseCone,
        fromPoint: AttachmentPoint.bottom,
        toType: PartType.stage,
        toPoint: AttachmentPoint.top,
      ),
      // Booster to Stage (sides)
      AttachmentRule(
        fromType: PartType.booster,
        fromPoint: AttachmentPoint.right,
        toType: PartType.stage,
        toPoint: AttachmentPoint.left,
        snapDistance: 80.0,
      ),
      // Connectors between stages
      AttachmentRule(
        fromType: PartType.connector,
        fromPoint: AttachmentPoint.bottom,
        toType: PartType.stage,
        toPoint: AttachmentPoint.top,
      ),
    ];
  }
}
