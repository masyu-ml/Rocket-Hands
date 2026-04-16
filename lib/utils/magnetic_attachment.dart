import 'package:flutter/material.dart';
import '../models/positioned_rocket_part.dart';
import '../models/rocket_part.dart';

class MagneticAttachment {
  static final List<AttachmentRule> _rules = AttachmentRule.getDefaultRules();

  static AttachmentSuggestion? findNearestAttachment(
    RocketPart draggingPart,
    Offset draggingPosition,
    List<PositionedRocketPart> placedParts,
  ) {
    AttachmentSuggestion? nearest;
    double nearestDistance = double.infinity;

    for (var placedPart in placedParts) {
      for (var rule in _rules) {
        if (_canAttach(draggingPart, placedPart.part, rule)) {
          final attachmentPoint = _getAttachmentPoint(placedPart, rule.toPoint);
          final distance = (draggingPosition - attachmentPoint).distance;

          if (distance < rule.snapDistance && distance < nearestDistance) {
            nearest = AttachmentSuggestion(
              targetPart: placedPart,
              attachmentPoint: attachmentPoint,
              rule: rule,
              distance: distance,
            );
            nearestDistance = distance;
          }
        }
      }
    }

    return nearest;
  }

  static bool _canAttach(RocketPart fromPart, RocketPart toPart, AttachmentRule rule) {
    return (fromPart.type == rule.fromType && toPart.type == rule.toType) ||
           (fromPart.type == rule.toType && toPart.type == rule.fromType);
  }

  static Offset _getAttachmentPoint(PositionedRocketPart part, AttachmentPoint point) {
    final center = part.position + Offset(part.size.width / 2, part.size.height / 2);
    
    switch (point) {
      case AttachmentPoint.top:
        return Offset(center.dx, part.position.dy);
      case AttachmentPoint.bottom:
        return Offset(center.dx, part.position.dy + part.size.height);
      case AttachmentPoint.left:
        return Offset(part.position.dx, center.dy);
      case AttachmentPoint.right:
        return Offset(part.position.dx + part.size.width, center.dy);
      case AttachmentPoint.center:
        return center;
    }
  }

  static Offset calculateSnapPosition(
    RocketPart draggingPart,
    AttachmentSuggestion suggestion,
    Size partSize,
  ) {
    final targetPoint = suggestion.attachmentPoint;
    final rule = suggestion.rule;
    
    // Determine which point on the dragging part should snap to the target
    Offset draggingPartPoint;
    if (draggingPart.type == rule.fromType) {
      draggingPartPoint = _getAttachmentPointForNewPart(partSize, rule.fromPoint);
    } else {
      draggingPartPoint = _getAttachmentPointForNewPart(partSize, rule.toPoint);
    }

    // Calculate the position so that the dragging part's attachment point aligns with the target
    return targetPoint - draggingPartPoint;
  }

  static Offset _getAttachmentPointForNewPart(Size partSize, AttachmentPoint point) {
    final center = Offset(partSize.width / 2, partSize.height / 2);
    
    switch (point) {
      case AttachmentPoint.top:
        return Offset(center.dx, 0);
      case AttachmentPoint.bottom:
        return Offset(center.dx, partSize.height);
      case AttachmentPoint.left:
        return Offset(0, center.dy);
      case AttachmentPoint.right:
        return Offset(partSize.width, center.dy);
      case AttachmentPoint.center:
        return center;
    }
  }

  static bool isWithinSnapDistance(Offset pos1, Offset pos2, double maxDistance) {
    return (pos1 - pos2).distance <= maxDistance;
  }
}

class AttachmentSuggestion {
  final PositionedRocketPart targetPart;
  final Offset attachmentPoint;
  final AttachmentRule rule;
  final double distance;

  AttachmentSuggestion({
    required this.targetPart,
    required this.attachmentPoint,
    required this.rule,
    required this.distance,
  });
}
