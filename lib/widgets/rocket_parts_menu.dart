import 'package:flutter/material.dart';
import '../models/rocket_part.dart';
import '../data/parts_database.dart';

class RocketPartsMenu extends StatefulWidget {
  final Function(String) onPartSelected;
  final VoidCallback onClose;

  const RocketPartsMenu({
    super.key,
    required this.onPartSelected,
    required this.onClose,
  });

  @override
  State<RocketPartsMenu> createState() => _RocketPartsMenuState();
}

class _RocketPartsMenuState extends State<RocketPartsMenu> with SingleTickerProviderStateMixin {
  late TabController _tabController;

  @override
  void initState() {
    super.initState();
    _tabController = TabController(length: 2, vsync: this);
  }

  @override
  void dispose() {
    _tabController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 280,
      decoration: BoxDecoration(
        color: const Color(0xFF1E1E1E),
        border: Border(
          right: BorderSide(
            color: const Color(0xFF404040),
            width: 1,
          ),
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
        children: [
          // MENU HEADER WITH CLOSE BUTTON
          Container(
            padding: const EdgeInsets.all(16),
            decoration: BoxDecoration(
              border: Border(
                bottom: BorderSide(
                  color: const Color(0xFF404040),
                  width: 1,
                ),
              ),
            ),
            child: Row(
              children: [
                const Icon(Icons.view_module, color: Color(0xFFB0B0B0), size: 20),
                const SizedBox(width: 8),
                const Expanded(
                  child: Text(
                    "ROCKET PARTS",
                    style: TextStyle(
                      color: Colors.white,
                      fontSize: 14,
                      fontWeight: FontWeight.w300,
                      letterSpacing: 2,
                    ),
                  ),
                ),
                IconButton(
                  icon: const Icon(Icons.close, color: Color(0xFF707070)),
                  iconSize: 20,
                  onPressed: widget.onClose,
                  tooltip: "Close menu",
                ),
              ],
            ),
          ),

          // ROCKET TYPE TABS (Saturn V vs Delta III)
          Container(
            decoration: BoxDecoration(
              color: const Color(0xFF252525),
              border: Border(
                bottom: BorderSide(
                  color: const Color(0xFF404040),
                  width: 1,
                ),
              ),
            ),
            child: TabBar(
              controller: _tabController,
              indicatorColor: Colors.white,
              labelColor: Colors.white,
              unselectedLabelColor: const Color(0xFF707070),
              tabs: [
                // Saturn V - Advanced
                Tab(
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      const Text(
                        "SATURN V",
                        style: TextStyle(fontSize: 11, fontWeight: FontWeight.w400),
                      ),
                      Row(
                        mainAxisSize: MainAxisSize.min,
                        children: [
                          Icon(Icons.star, size: 8, color: const Color(0xFFFFD700)),
                          Icon(Icons.star, size: 8, color: const Color(0xFFFFD700)),
                          Icon(Icons.star, size: 8, color: const Color(0xFFFFD700)),
                          const SizedBox(width: 4),
                          Text(
                            "Advanced",
                            style: TextStyle(fontSize: 8, color: const Color(0xFF707070)),
                          ),
                        ],
                      ),
                    ],
                  ),
                ),
                // Delta III - Beginner
                Tab(
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      const Text(
                        "DELTA III",
                        style: TextStyle(fontSize: 11, fontWeight: FontWeight.w400),
                      ),
                      Row(
                        mainAxisSize: MainAxisSize.min,
                        children: [
                          Icon(Icons.star, size: 8, color: const Color(0xFFFFD700)),
                          const SizedBox(width: 4),
                          Text(
                            "Beginners",
                            style: TextStyle(fontSize: 8, color: const Color(0xFF707070)),
                          ),
                        ],
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),

          // SWIPE HINT
          Container(
            padding: const EdgeInsets.symmetric(vertical: 8),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Icon(
                  Icons.swipe_left,
                  size: 16,
                  color: const Color(0xFF707070),
                ),
                const SizedBox(width: 8),
                Text(
                  " Swipe to switch rocket type ",
                  style: TextStyle(
                    color: const Color(0xFF707070),
                    fontSize: 11,
                    fontStyle: FontStyle.italic,
                  ),
                ),
              ],
            ),
          ),

          // PARTS LIST (TABS)
          Expanded(
            child: TabBarView(
              controller: _tabController,
              children: [
                // SATURN V PARTS
                _buildPartsList(PartsDatabase.getSaturnVParts()),
                
                // DELTA III PARTS
                _buildPartsList(PartsDatabase.getDeltaIIIParts()),
              ],
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildPartsList(List<RocketPart> parts) {
    // Group parts by type
    Map<PartType, List<RocketPart>> groupedParts = {};
    
    for (var part in parts) {
      if (!groupedParts.containsKey(part.type)) {
        groupedParts[part.type] = [];
      }
      groupedParts[part.type]!.add(part);
    }

    return ListView(
      padding: const EdgeInsets.all(8),
      children: [
        // STAGES
        if (groupedParts[PartType.stage] != null) ...[
          _buildPartCategory("STAGES"),
          ...groupedParts[PartType.stage]!.map((part) => _buildPartItem(part)),
          const SizedBox(height: 16),
        ],

        // ENGINES & NOZZLES
        if (groupedParts[PartType.engine] != null || groupedParts[PartType.nozzle] != null) ...[
          _buildPartCategory("ENGINES"),
          if (groupedParts[PartType.engine] != null)
            ...groupedParts[PartType.engine]!.map((part) => _buildPartItem(part)),
          if (groupedParts[PartType.nozzle] != null)
            ...groupedParts[PartType.nozzle]!.map((part) => _buildPartItem(part)),
          const SizedBox(height: 16),
        ],

        // BOOSTERS
        if (groupedParts[PartType.booster] != null) ...[
          _buildPartCategory("BOOSTERS"),
          ...groupedParts[PartType.booster]!.map((part) => _buildPartItem(part)),
          const SizedBox(height: 16),
        ],

        // NOSE CONES
        if (groupedParts[PartType.noseCone] != null) ...[
          _buildPartCategory("AERODYNAMICS"),
          ...groupedParts[PartType.noseCone]!.map((part) => _buildPartItem(part)),
          const SizedBox(height: 16),
        ],

        // CAPSULE & ESCAPE
        if (groupedParts[PartType.capsule] != null || groupedParts[PartType.escape] != null) ...[
          _buildPartCategory("CREW SYSTEMS"),
          if (groupedParts[PartType.capsule] != null)
            ...groupedParts[PartType.capsule]!.map((part) => _buildPartItem(part)),
          if (groupedParts[PartType.escape] != null)
            ...groupedParts[PartType.escape]!.map((part) => _buildPartItem(part)),
          const SizedBox(height: 16),
        ],

        // CONNECTORS
        if (groupedParts[PartType.connector] != null) ...[
          _buildPartCategory("CONNECTORS"),
          ...groupedParts[PartType.connector]!.map((part) => _buildPartItem(part)),
        ],
      ],
    );
  }

  Widget _buildPartCategory(String title) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 8, horizontal: 8),
      child: Text(
        title,
        style: TextStyle(
          color: const Color(0xFF707070),
          fontSize: 10,
          fontWeight: FontWeight.w400,
          letterSpacing: 2,
        ),
      ),
    );
  }

  Widget _buildPartItem(RocketPart part) {
    return Card(
      color: const Color(0xFF252525),
      margin: const EdgeInsets.symmetric(vertical: 2, horizontal: 8),
      elevation: 0,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(4),
        side: BorderSide(color: const Color(0xFF353535)),
      ),
      child: ListTile(
        contentPadding: const EdgeInsets.symmetric(horizontal: 12, vertical: 4),
        leading: Container(
          width: 36,
          height: 36,
          decoration: BoxDecoration(
            color: const Color(0xFF303030),
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
                  color: const Color(0xFF909090),
                  size: 20,
                );
              },
            ),
          ),
        ),
        title: Text(
          part.name,
          style: const TextStyle(
            color: Colors.white,
            fontSize: 12,
            fontWeight: FontWeight.w300,
          ),
          maxLines: 2,
          overflow: TextOverflow.ellipsis,
        ),
        subtitle: Text(
          '${part.mass.toInt()} kg',
          style: TextStyle(
            color: const Color(0xFF707070),
            fontSize: 10,
          ),
        ),
        trailing: const Icon(
          Icons.add,
          color: Color(0xFF909090),
          size: 18,
        ),
        onTap: () => widget.onPartSelected(part.name),
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