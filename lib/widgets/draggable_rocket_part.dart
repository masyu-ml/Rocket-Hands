import 'package:flutter/material.dart';
import '../models/rocket_part.dart';

class DraggableRocketPart extends StatelessWidget {
  final RocketPart part;
  final Function(RocketPart)? onTap;

  const DraggableRocketPart({
    super.key,
    required this.part,
    this.onTap,
  });

  @override
  Widget build(BuildContext context) {
    return LongPressDraggable<RocketPart>(
      data: part,
      delay: const Duration(milliseconds: 100), // Small delay to prevent accidental drags
      onDragStarted: () {
        debugPrint("🚀 DRAG STARTED: ${part.name}");
      },
      onDragCompleted: () {
        debugPrint("✅ DRAG COMPLETED: ${part.name}");
      },
      onDraggableCanceled: (velocity, offset) {
        debugPrint("❌ DRAG CANCELED: ${part.name} at $offset");
      },
      feedback: Container(
        width: 60,
        height: 60,
        decoration: BoxDecoration(
          color: Colors.black.withOpacity(0.8),
          border: Border.all(color: Colors.cyanAccent, width: 2),
          borderRadius: BorderRadius.circular(8),
        ),
        child: ClipRRect(
          borderRadius: BorderRadius.circular(6),
          child: Image.asset(
            part.imagePath,
            fit: BoxFit.contain,
            errorBuilder: (context, error, stackTrace) {
              return Icon(
                _getIconForPartType(part.type),
                color: Colors.cyanAccent,
                size: 30,
              );
            },
          ),
        ),
      ),
      childWhenDragging: Container(
        width: 60,
        height: 60,
        decoration: BoxDecoration(
          color: Colors.white.withOpacity(0.3),
          border: Border.all(
            color: Colors.cyanAccent.withOpacity(0.5),
            width: 1,
          ),
          borderRadius: BorderRadius.circular(8),
        ),
      ),
      child: Card(
        color: Colors.white.withOpacity(0.1),
        margin: const EdgeInsets.symmetric(vertical: 4),
        child: ListTile(
          dense: true,
          leading: Container(
            width: 40,
            height: 40,
            decoration: BoxDecoration(
              color: Colors.white.withOpacity(0.2),
              borderRadius: BorderRadius.circular(4),
            ),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(4),
              child: Image.asset(
                part.imagePath,
                fit: BoxFit.contain,
                errorBuilder: (context, error, stackTrace) {
                  return Icon(
                    _getIconForPartType(part.type),
                    color: Colors.cyanAccent,
                    size: 24,
                  );
                },
              ),
            ),
          ),
          title: Text(
            part.name,
            style: const TextStyle(
              color: Colors.white,
              fontSize: 13,
            ),
            maxLines: 2,
            overflow: TextOverflow.ellipsis,
          ),
          subtitle: Text(
            '${part.mass.toInt()} kg',
            style: TextStyle(
              color: Colors.white.withOpacity(0.5),
              fontSize: 11,
            ),
          ),
          trailing: const Icon(
            Icons.drag_indicator,
            color: Colors.cyanAccent,
            size: 20,
          ),
          onTap: onTap != null ? () => onTap!(part) : null,
        ),
      ),
    );
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
      case PartType.noseCone:
        return Icons.change_history;
      case PartType.capsule:
        return Icons.home;
      case PartType.escape:
        return Icons.rocket_launch;
      case PartType.connector:
        return Icons.link;
    }
  }
}
