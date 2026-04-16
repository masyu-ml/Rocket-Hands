import 'package:flutter/material.dart';

/// Simple help/tutorial dialog - completely self-contained
/// No GlobalKeys, no overlays, no auto-triggering
class HelpDialog extends StatelessWidget {
  const HelpDialog({super.key});

  static void show(BuildContext context) {
    showDialog(
      context: context,
      barrierDismissible: true,
      builder: (context) => const HelpDialog(),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Dialog(
      backgroundColor: Colors.transparent,
      child: Container(
        width: 400,
        height: 500,
        decoration: BoxDecoration(
          color: const Color(0xFF1E1E1E),
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: const Color(0xFF404040)),
        ),
        child: DefaultTabController(
          length: 5,
          child: Column(
            children: [
              // Header
              Container(
                padding: const EdgeInsets.all(16),
                decoration: BoxDecoration(
                  color: const Color(0xFF252525),
                  borderRadius: const BorderRadius.vertical(top: Radius.circular(12)),
                  border: Border(
                    bottom: BorderSide(color: const Color(0xFF404040)),
                  ),
                ),
                child: Row(
                  children: [
                    const Icon(Icons.help_outline, color: Color(0xFFB0B0B0), size: 20),
                    const SizedBox(width: 8),
                    const Expanded(
                      child: Text(
                        'GUIDE',
                        style: TextStyle(
                          color: Colors.white,
                          fontSize: 14,
                          fontWeight: FontWeight.w300,
                          letterSpacing: 2,
                        ),
                      ),
                    ),
                    IconButton(
                      icon: const Icon(Icons.close, color: Color(0xFF707070), size: 20),
                      onPressed: () => Navigator.pop(context),
                    ),
                  ],
                ),
              ),

              // Tab bar
              Container(
                color: const Color(0xFF252525),
                child: TabBar(
                  isScrollable: true,
                  indicatorColor: Colors.white,
                  labelColor: Colors.white,
                  unselectedLabelColor: const Color(0xFF707070),
                  tabs: const [
                    Tab(icon: Icon(Icons.rocket, size: 20), text: 'Basics'),
                    Tab(icon: Icon(Icons.view_module, size: 20), text: 'Parts'),
                    Tab(icon: Icon(Icons.link, size: 20), text: 'Connect'),
                    Tab(icon: Icon(Icons.science, size: 20), text: 'Check'),
                    Tab(icon: Icon(Icons.lightbulb, size: 20), text: 'Tips'),
                  ],
                ),
              ),

              // Tab content
              Expanded(
                child: TabBarView(
                  children: [
                    _buildBasicsTab(),
                    _buildPartsTab(),
                    _buildConnectTab(),
                    _buildCheckTab(),
                    _buildTipsTab(),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildBasicsTab() {
    return _buildTabContent([
      _TipItem(
        icon: Icons.touch_app,
        title: 'Building Your Rocket',
        description: 'Tap the ⊞ button (left side) to open the parts menu. Select Saturn V or Delta III parts.',
      ),
      _TipItem(
        icon: Icons.drag_indicator,
        title: 'Moving Parts',
        description: 'Drag parts to position them. Parts snap together when close enough.',
      ),
      _TipItem(
        icon: Icons.delete,
        title: 'Removing Parts',
        description: 'Tap a part to select it, then tap the ✕ button to delete it.',
      ),
    ]);
  }

  Widget _buildPartsTab() {
    return _buildTabContent([
      _TipItem(
        icon: Icons.rocket_launch,
        title: 'Saturn V',
        description: '• 3 stages (First, Second, Third)\n• F-1 Engine at bottom\n• 3 Interstage Connectors\n• Command Module at top',
      ),
      _TipItem(
        icon: Icons.flight,
        title: 'Delta III',
        description: '• Fuel Tank + Core Engine\n• Nose Cone at top\n• 2 Side Boosters (or none)\n• Connector between parts',
      ),
      _TipItem(
        icon: Icons.block,
        title: 'Important',
        description: 'NEVER mix Saturn V and Delta III parts! The rocket will fail.',
      ),
    ]);
  }

  Widget _buildConnectTab() {
    return _buildTabContent([
      _TipItem(
        icon: Icons.link,
        title: 'Connectors Required',
        description: 'Saturn V needs 3 connectors between stages. Without them, you get an orange warning.',
      ),
      _TipItem(
        icon: Icons.balance,
        title: 'Symmetry Matters',
        description: 'Delta III needs 2 boosters (one each side) or none. One booster = unbalanced!',
      ),
      _TipItem(
        icon: Icons.warning_amber,
        title: 'Long Press to Unsnap',
        description: 'Hold down on a connected part to break the connection and move it freely.',
      ),
    ]);
  }

  Widget _buildCheckTab() {
    return _buildTabContent([
      _TipItem(
        icon: Icons.science,
        title: 'CHECK Button',
        description: 'Tap CHECK to analyze your rocket. The stability panel will show issues.',
      ),
      _TipItem(
        icon: Icons.check_circle,
        title: 'Green Button',
        description: 'Perfect! Rocket is stable and ready for safe launch.',
      ),
      _TipItem(
        icon: Icons.warning,
        title: 'Orange Button',
        description: 'Risky launch! Rocket has issues but can still fly. Result uncertain.',
      ),
      _TipItem(
        icon: Icons.error,
        title: 'No Button',
        description: 'Critical issues! Fix problems first (add engines, connectors, etc).',
      ),
    ]);
  }

  Widget _buildTipsTab() {
    return _buildTabContent([
      _TipItem(
        icon: Icons.lightbulb,
        title: 'Build Order',
        description: 'Start from the bottom (engine) and stack upward to the capsule.',
      ),
      _TipItem(
        icon: Icons.balance,
        title: 'Stability',
        description: 'Green CHECK = CG ahead of CP. Heavy front, draggy back = stable.',
      ),
      _TipItem(
        icon: Icons.refresh,
        title: 'Reset',
        description: 'Tap the ⟲ button (top right) to clear all parts and start over.',
      ),
      _TipItem(
        icon: Icons.view_in_ar,
        title: '3D Mode',
        description: 'Tap 3D MODE button to see your rocket in augmented reality.',
      ),
    ]);
  }

  Widget _buildTabContent(List<_TipItem> tips) {
    return SingleChildScrollView(
      padding: const EdgeInsets.all(16),
      child: Column(
        children: tips.map((tip) => _buildTipCard(tip)).toList(),
      ),
    );
  }

  Widget _buildTipCard(_TipItem tip) {
    return Container(
      margin: const EdgeInsets.only(bottom: 12),
      padding: const EdgeInsets.all(12),
      decoration: BoxDecoration(
        color: const Color(0xFF252525),
        borderRadius: BorderRadius.circular(8),
        border: Border.all(color: const Color(0xFF353535)),
      ),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Container(
            padding: const EdgeInsets.all(8),
            decoration: BoxDecoration(
              color: const Color(0xFF303030),
              shape: BoxShape.circle,
            ),
            child: Icon(tip.icon, color: const Color(0xFF909090), size: 18),
          ),
          const SizedBox(width: 12),
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  tip.title,
                  style: const TextStyle(
                    color: Colors.white,
                    fontWeight: FontWeight.w400,
                    fontSize: 13,
                  ),
                ),
                const SizedBox(height: 4),
                Text(
                  tip.description,
                  style: TextStyle(
                    color: const Color(0xFF909090),
                    fontSize: 11,
                    height: 1.4,
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}

class _TipItem {
  final IconData icon;
  final String title;
  final String description;

  _TipItem({required this.icon, required this.title, required this.description});
}
