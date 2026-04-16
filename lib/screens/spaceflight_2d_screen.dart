import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:permission_handler/permission_handler.dart';

import 'dart:math';

import '../models/rocket_part.dart';

import '../models/connection_node.dart';

import '../data/parts_database.dart';

import '../utils/rocket_physics.dart';

import '../utils/rocket_validator.dart';

import '../widgets/rocket_canvas.dart';

import '../widgets/rocket_parts_menu.dart';

import '../widgets/stability_panel.dart';

import '../widgets/help_dialog.dart';

// ── A part placed on the canvas ───────────────────────────────────────────────

class PlacedPart {

  final String instanceId; // Unique ID for each placed instance

  final RocketPart part;

  Offset position;

  // Connections: node_id -> target_part_id:target_node_id

  final Map<String, String> connections = {};



  PlacedPart({required this.part, required this.position}) : instanceId = '${part.id}_${DateTime.now().millisecondsSinceEpoch}_${Random().nextInt(10000)}';

  

  bool isConnectedTo(String partId) {

    return connections.values.any((conn) => conn.startsWith('$partId:'));

  }

  

  String? getConnectedPartAt(String nodeId) {

    final conn = connections[nodeId];

    if (conn == null) return null;

    return conn.split(':')[0];

  }

}



// ── Screen ────────────────────────────────────────────────────────────────────

class Spaceflight2DScreen extends StatefulWidget {

  const Spaceflight2DScreen({super.key});



  @override

  State<Spaceflight2DScreen> createState() => _Spaceflight2DScreenState();

}



class _Spaceflight2DScreenState extends State<Spaceflight2DScreen>

    with TickerProviderStateMixin {

  static const platform = MethodChannel('com.rocket_hands/unity');

  bool _isMenuOpen = false;

  final List<PlacedPart> _placedParts = [];

  final GlobalKey _canvasKey = GlobalKey();



  // Stability Analysis

  RocketValidationResult? _validationResult;

  bool _isAnalyzing = false;



  // Launch animation

  late AnimationController _launchController;

  late Animation<double> _launchAnimation;

  bool _isLaunching = false;

  bool _launchSuccess = false;

  bool _wasRiskyLaunch = false;

  double _launchOffset = 0.0;



  // ═══════════════════════════════════════════════════════════════════

  // MANUAL PART SIZES - EDIT EACH PART'S HEIGHT AND WIDTH BELOW

  // ═══════════════════════════════════════════════════════════════════

  

  // Saturn V parts (manually set height and width in pixels)

  double get _saturnV1stStageHeight => 190.0;

  double get _saturnV1stStageWidth => 55.0;

  

  double get _saturnV2ndStageHeight => 100.0;

  double get _saturnV2ndStageWidth => 50.0;

  

  double get _saturnV3rdStageHeight => 150.0;

  double get _saturnV3rdStageWidth => 50.0;

  

  double get _f1EngineHeight => 60.0;

  double get _f1EngineWidth => 40.0;

  

  double get _commandModuleHeight => 80.0;

  double get _commandModuleWidth => 50.0;

  

  double get _launchEscapeHeight => 100.0;

  double get _launchEscapeWidth => 30.0;

  

  double get _saturnVConnectorHeight => 10.0;

  double get _saturnVConnectorWidth => 50.0;

  

  // Delta III parts (manually set height and width in pixels)

  double get _deltaConeHeight => 150.0;

  double get _deltaConeWidth => 80.0;

  

  double get _deltaFuelTankHeight => 200.0;

  double get _deltaFuelTankWidth => 80.0;

  

  double get _deltaCoreEngineHeight => 150.0;

  double get _deltaCoreEngineWidth => 50.0;

  

  double get _rs27EngineHeight => 50.0;

  double get _rs27EngineWidth => 35.0;

  

  double get _deltaBoosterHeight => 120.0;

  double get _deltaBoosterWidth => 40.0;

  

  double get _deltaInterstageHeight => 40.0;

  double get _deltaInterstageWidth => 80.0;

  

  double get _deltaConnectorHeight => 30.0;

  double get _deltaConnectorWidth => 80.0;

  

  // ═══════════════════════════════════════════════════════════════════



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
      ScaffoldMessenger.of(context).showSnackBar(
        const SnackBar(content: Text('Camera permission is required for 3D mode')),
      );
    }
  }

  void _toggleMenu() => setState(() => _isMenuOpen = !_isMenuOpen);

  void _closeMenu() => setState(() => _isMenuOpen = false);



  // Called when user taps a part in the menu

  void _onPartTapped(String partName) {

    // Find the part from database

    final allParts = [...PartsDatabase.getSaturnVParts(), ...PartsDatabase.getDeltaIIIParts()];

    final RocketPart part = allParts.firstWhere(

      (p) => p.name == partName,

      orElse: () => allParts.first,

    );

    

    final RenderBox? box =

        _canvasKey.currentContext?.findRenderObject() as RenderBox?;

    final Size canvasSize = box?.size ?? MediaQuery.of(context).size;



    // Calculate part size based on screen dimensions (responsive)

    final double partSize = _calculatePartSize(canvasSize, part.name);



    // Always place in the exact center of the screen

    final offset = Offset(

      canvasSize.width / 2 - partSize / 2,

      canvasSize.height / 2 - partSize / 2,

    );



    setState(() {

      _placedParts.add(PlacedPart(part: part, position: offset));

      // Clear validation when adding parts

      _validationResult = null;

    });



    // Close menu after selecting so user can see the canvas

    _closeMenu();



    debugPrint("✅ Placed: ${part.name} at $offset");

  }



  // Manual part sizing - returns height based on part name

  double _calculatePartHeight(Size canvasSize, String partName) {

    switch (partName) {

      case 'Saturn V First Stage':

        return _saturnV1stStageHeight;

      case 'Saturn V Second Stage':

        return _saturnV2ndStageHeight;

      case 'Saturn V Third Stage':

        return _saturnV3rdStageHeight;

      case 'F-1 Engine':

        return _f1EngineHeight;

      case 'Command Module':

        return _commandModuleHeight;

      case 'Launch Escape System':

        return _launchEscapeHeight;

      case 'Interstage Connector':

        return _saturnVConnectorHeight;

      case 'Delta III Nose Cone':

        return _deltaConeHeight;

      case 'Delta III Fuel Tank':

        return _deltaFuelTankHeight;

      case 'Delta III Core Engine':

        return _deltaCoreEngineHeight;

      case 'RS-27 Engine Nozzle':

        return _rs27EngineHeight;

      case 'GEM-46 Side Booster':

        return _deltaBoosterHeight;

      case 'Delta III Interstage':

        return _deltaInterstageHeight;

      case 'Delta III Connector':

        return _deltaConnectorHeight;

      default:

        return 100.0;

    }

  }

  

  // Manual part sizing - returns width based on part name

  double _calculatePartWidth(Size canvasSize, String partName, double height) {

    switch (partName) {

      case 'Saturn V First Stage':

        return _saturnV1stStageWidth;

      case 'Saturn V Second Stage':

        return _saturnV2ndStageWidth;

      case 'Saturn V Third Stage':

        return _saturnV3rdStageWidth;

      case 'F-1 Engine':

        return _f1EngineWidth;

      case 'Command Module':

        return _commandModuleWidth;

      case 'Launch Escape System':

        return _launchEscapeWidth;

      case 'Interstage Connector':

        return _saturnVConnectorWidth;

      case 'Delta III Nose Cone':

        return _deltaConeWidth;

      case 'Delta III Fuel Tank':

        return _deltaFuelTankWidth;

      case 'Delta III Core Engine':

        return _deltaCoreEngineWidth;

      case 'RS-27 Engine Nozzle':

        return _rs27EngineWidth;

      case 'GEM-46 Side Booster':

        return _deltaBoosterWidth;

      case 'Delta III Interstage':

        return _deltaInterstageWidth;

      case 'Delta III Connector':

        return _deltaConnectorWidth;

      default:

        return 100.0;

    }

  }

  

  // For backward compatibility - returns the height as the main dimension

  double _calculatePartSize(Size canvasSize, String partName) {

    return _calculatePartHeight(canvasSize, partName);

  }



  // Track all connections between parts

  final Map<String, Set<String>> _connectionGraph = {}; // part_id -> connected_part_ids



  void _addConnection(String partId1, String nodeId1, String partId2, String nodeId2) {

    setState(() {

      // Update part 1

      final part1 = _placedParts.firstWhere((p) => p.instanceId == partId1);

      part1.connections[nodeId1] = '$partId2:$nodeId2';

      _connectionGraph.putIfAbsent(partId1, () => <String>{});

      _connectionGraph[partId1]!.add(partId2);

      

      // Update part 2

      final part2 = _placedParts.firstWhere((p) => p.instanceId == partId2);

      part2.connections[nodeId2] = '$partId1:$nodeId1';

      _connectionGraph.putIfAbsent(partId2, () => <String>{});

      _connectionGraph[partId2]!.add(partId1);

    });

  }

  

  void _removeConnection(String partId, String nodeId) {

    final part = _placedParts.firstWhere((p) => p.instanceId == partId);

    final conn = part.connections.remove(nodeId);

    if (conn != null) {

      final otherPartId = conn.split(':')[0];

      _connectionGraph[partId]?.remove(otherPartId);

      _connectionGraph[otherPartId]?.remove(partId);

      

      // Also remove the reverse connection

      final otherPart = _placedParts.firstWhere((p) => p.instanceId == otherPartId);

      otherPart.connections.removeWhere((k, v) => v.startsWith('$partId:'));

    }

  }

  

  void _unsnapPart(String partId) {

    setState(() {

      final part = _placedParts.firstWhere((p) => p.instanceId == partId);

      // Remove all connections for this part

      for (final nodeId in List.from(part.connections.keys)) {

        _removeConnection(partId, nodeId);

      }

    });

  }



  void _onPartMoved(String partId, Offset newPosition, {required Set<String> movingGroup, required Map<String, Offset> positionUpdates}) {

    // Prevent infinite recursion

    if (movingGroup.contains(partId)) return;

    movingGroup.add(partId);

    

    final part = _placedParts.firstWhere((p) => p.instanceId == partId);

    final delta = newPosition - part.position;

    

    // Store position update

    positionUpdates[partId] = newPosition;

    

    // Collect updates for all connected parts (without calling setState yet)

    final connected = _connectionGraph[partId] ?? {};

    for (final otherId in connected) {

      if (!movingGroup.contains(otherId)) {

        final otherPart = _placedParts.firstWhere((p) => p.instanceId == otherId);

        _onPartMoved(otherId, otherPart.position + delta, movingGroup: movingGroup, positionUpdates: positionUpdates);

      }

    }

    

    // Apply all position updates in a single setState (only on the original call)

    if (movingGroup.length == positionUpdates.length) {

      setState(() {

        for (final entry in positionUpdates.entries) {

          final p = _placedParts.firstWhere((pt) => pt.instanceId == entry.key);

          p.position = entry.value;

        }

      });

    }

  }



  @override

  void initState() {

    super.initState();

    _launchController = AnimationController(

      duration: const Duration(seconds: 3),

      vsync: this,

    );

    _launchAnimation = CurvedAnimation(

      parent: _launchController,

      curve: Curves.easeIn,

    );

    _launchAnimation.addListener(() {

      setState(() {

        _launchOffset = -_launchAnimation.value * MediaQuery.of(context).size.height * 1.5;

      });

    });

    _launchAnimation.addStatusListener((status) {

      if (status == AnimationStatus.completed) {

        setState(() {

          _launchSuccess = true;

          _isLaunching = false;

        });

      }

    });

  }



  @override

  void dispose() {

    _launchController.dispose();

    super.dispose();

  }



  void _launchRocket() {

    if (_placedParts.isEmpty || _isLaunching) return;

    setState(() {

      _isLaunching = true;

      _launchSuccess = false;

      // Don't override _wasRiskyLaunch - it was set by the button callback

      _launchOffset = 0.0;

    });

    _launchController.forward(from: 0.0);

  }



  void _resetLaunch() {

    setState(() {

      _isLaunching = false;

      _launchSuccess = false;

      _wasRiskyLaunch = false;

      _launchOffset = 0.0;

      _placedParts.clear();

    });

    _launchController.reset();

  }



  void _onPartRemoved(String partId) {

    setState(() {

      // Remove all connections first

      _unsnapPart(partId);

      _connectionGraph.remove(partId);

      for (final connections in _connectionGraph.values) {

        connections.remove(partId);

      }

      _placedParts.removeWhere((p) => p.instanceId == partId);

      // Clear validation when parts change

      _validationResult = null;

    });

  }



  void _runStabilityAnalysis() {

    if (_placedParts.isEmpty) return;

    

    setState(() => _isAnalyzing = true);

    

    // Run analysis

    final analysis = analyzeRocketStability(

      _placedParts,

      _connectionGraph,

      _calculatePartHeight,

      _calculatePartWidth,

    );

    

    final validation = RocketValidator.validate(

      analysis,

      _placedParts,

      _connectionGraph,

    );

    

    setState(() {

      _validationResult = validation;

      _isAnalyzing = false;

    });

    

    // Show educational snackbar if unstable

    if (!validation.isValid && analysis.rating == StabilityRating.criticalUnstable) {

      ScaffoldMessenger.of(context).showSnackBar(

        SnackBar(

          content: Row(

            children: [

              const Icon(Icons.warning, color: Colors.orange),

              const SizedBox(width: 8),

              Expanded(

                child: Text(

                  'Rocket is unstable! CG must be ahead of CP. Check the analysis panel for recommendations.',

                  style: const TextStyle(fontSize: 13),

                ),

              ),

            ],

          ),

          backgroundColor: Colors.red.withOpacity(0.9),

          duration: const Duration(seconds: 6),

          behavior: SnackBarBehavior.floating,

        ),

      );

    }

  }



  @override

  Widget build(BuildContext context) {

    return Scaffold(

      backgroundColor: const Color(0xFF121212),

      body: Stack(

        children: [

            // ── 1. CANVAS ──────────────────────────────────────────────────────

            Positioned.fill(

              key: _canvasKey,

              child: Stack(

                children: [

                  // Background: stars + moon surface

                  const RocketCanvas(),



                  // ── PLACED PARTS (pannable) ──────────────────────────────────

                  ..._placedParts.asMap().entries.map((entry) {

                    final placed = entry.value;

                    return _CanvasPartWidget(

                      key: ValueKey(placed.instanceId),

                      placed: placed,

                      launchOffset: _launchOffset,

                      isLaunching: _isLaunching,

                      allParts: _placedParts,

                      onMoved: (newPos) => _onPartMoved(placed.instanceId, newPos, movingGroup: {}, positionUpdates: {}),

                      onRemoved: () => _onPartRemoved(placed.instanceId),

                      onUnsnap: () => _unsnapPart(placed.instanceId),

                      getPartHeight: _calculatePartHeight,

                      getPartWidth: _calculatePartWidth,

                      onConnect: _addConnection,

                    );

                  }),

                ],

              ),

            ),



            // ── 2. TOP BAR ────────────────────────────────────────────────────

            Positioned(

              top: 0,

              left: 0,

              right: 0,

              child: Container(

                height: 60,

                decoration: BoxDecoration(

                  color: const Color(0xFF1E1E1E),

                  border: Border(

                    bottom: BorderSide(

                      color: const Color(0xFF404040),

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

                          "ROCKET BUILDER",

                          style: TextStyle(

                            color: Colors.white,

                            fontSize: 16,

                            fontWeight: FontWeight.w300,

                            letterSpacing: 4,

                          ),

                        ),

                      ),

                    ),

                    // Parts counter

                    Container(

                      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 4),

                      decoration: BoxDecoration(

                        color: const Color(0xFF2D2D2D),

                        borderRadius: BorderRadius.circular(12),

                        border: Border.all(color: const Color(0xFF404040)),

                      ),

                      child: Text(

                        "${_placedParts.length} parts",

                        style: const TextStyle(

                          color: Color(0xFFB0B0B0),

                          fontSize: 12,

                        ),

                      ),

                    ),

                    const SizedBox(width: 8),

                    IconButton(
                      icon: const Icon(Icons.help_outline, color: Color(0xFFB0B0B0), size: 20),
                      onPressed: () => HelpDialog.show(context),
                      tooltip: 'Help',
                    ),

                    const SizedBox(width: 16),
                  ],

                ),

              ),

            ),



          // BOTTOM CENTER BUTTON

          if (_placedParts.isNotEmpty && !_isLaunching && !_launchSuccess)

            Positioned(

              bottom: 20,

              left: 0,

              right: 0,

              child: Center(

                child: ElevatedButton.icon(

                  onPressed: _runStabilityAnalysis,

                  icon: const Icon(Icons.science, size: 20, color: Colors.white),

                  label: const Text(

                    "CHECK",

                    style: TextStyle(color: Colors.white, fontWeight: FontWeight.w400),

                  ),

                  style: ElevatedButton.styleFrom(

                    backgroundColor: const Color(0xFF2D2D2D),

                    foregroundColor: Colors.white,

                    side: const BorderSide(color: Color(0xFF505050)),

                    padding: const EdgeInsets.symmetric(horizontal: 32, vertical: 14),

                    shape: RoundedRectangleBorder(

                      borderRadius: BorderRadius.circular(8),

                    ),

                  ),

                ),

              ),

            ),

            if (_placedParts.isNotEmpty)

              Positioned(

                top: 70,

                right: 16,

                child: FloatingActionButton.small(

                  heroTag: "clearAll",

                  backgroundColor: const Color(0xFF2D2D2D),

                  onPressed: () {

                    setState(() {

                      _placedParts.clear();

                      _validationResult = null;

                      _connectionGraph.clear();

                    });

                  },

                  child: const Icon(Icons.clear_all, color: Color(0xFFB0B0B0), size: 20),

                ),

              ),



          // PARTS MENU TOGGLE BUTTON

          Positioned(

            left: 16,

            top: 100,

            child: FloatingActionButton(

              heroTag: "partsMenu",

              backgroundColor: const Color(0xFF2D2D2D),

              onPressed: _toggleMenu,

              child: Icon(

                _isMenuOpen ? Icons.close : Icons.view_module,

                color: const Color(0xFFB0B0B0),

              ),

            ),

          ),



          // SLIDING PARTS MENU

          AnimatedPositioned(

            duration: const Duration(milliseconds: 300),

            curve: Curves.easeInOut,

            left: _isMenuOpen ? 0 : -280,

            top: 60,

            bottom: 0,

            child: GestureDetector(

              onHorizontalDragEnd: (details) {

                if (details.primaryVelocity! < -500) {

                  _closeMenu();

                }

              },

              child: RocketPartsMenu(

                onPartSelected: _onPartTapped,

                onClose: _closeMenu,

              ),

            ),

          ),



          // SUCCESS OVERLAY

          if (_launchSuccess)

            Positioned.fill(

              child: Container(

                color: Colors.black.withOpacity(0.85),

                child: Center(

                  child: Column(

                    mainAxisAlignment: MainAxisAlignment.center,

                    children: [

                      Icon(

                        _wasRiskyLaunch ? Icons.warning_amber_rounded : Icons.check_circle_outline,

                        color: _wasRiskyLaunch ? Colors.orangeAccent : Colors.greenAccent,

                        size: 100,

                      ),

                      const SizedBox(height: 24),

                      Text(

                        _wasRiskyLaunch ? "FLIGHT UNCERTAIN" : "FLIGHT SUCCESS",

                        style: TextStyle(

                          color: _wasRiskyLaunch ? Colors.orangeAccent : Colors.greenAccent,

                          fontSize: 32,

                          fontWeight: FontWeight.bold,

                          letterSpacing: 4,

                        ),

                      ),

                      const SizedBox(height: 16),

                      Text(

                        _wasRiskyLaunch 

                            ? "Well... it launched. But with those issues? It probably won't survive the flight."

                            : "Your rocket has launched successfully!",

                        style: TextStyle(

                          color: Colors.white.withOpacity(0.7),

                          fontSize: 16,

                        ),

                        textAlign: TextAlign.center,

                      ),

                      if (_wasRiskyLaunch) ...[

                        const SizedBox(height: 8),

                        Text(

                          "Next time, try building a more stable rocket!",

                          style: TextStyle(

                            color: Colors.orangeAccent.withOpacity(0.8),

                            fontSize: 14,

                            fontStyle: FontStyle.italic,

                          ),

                          textAlign: TextAlign.center,

                        ),

                      ],

                      const SizedBox(height: 40),

                      ElevatedButton.icon(

                        onPressed: _resetLaunch,

                        icon: const Icon(Icons.replay, color: Colors.white),

                        label: const Text(

                          "BUILD NEW ROCKET",

                          style: TextStyle(color: Colors.white),

                        ),

                        style: ElevatedButton.styleFrom(

                          backgroundColor: Colors.cyanAccent.withOpacity(0.3),

                          foregroundColor: Colors.white,

                          side: const BorderSide(color: Colors.cyanAccent),

                          padding: const EdgeInsets.symmetric(horizontal: 32, vertical: 16),

                        ),

                      ),

                    ],

                  ),

                ),

              ),

            ),



          // STABILITY ANALYSIS PANEL - Only shows after pressing CHECK button

          if (_validationResult != null && !_isLaunching && !_launchSuccess)

            Positioned(

              right: 8,

              top: 70,

              child: ConstrainedBox(

                constraints: BoxConstraints(

                  maxWidth: MediaQuery.of(context).size.width > 600 ? 320 : MediaQuery.of(context).size.width * 0.8,

                  maxHeight: MediaQuery.of(context).size.height * 0.65,

                ),

                child: Container(

                  decoration: BoxDecoration(

                    color: Colors.black.withOpacity(0.9),

                    borderRadius: BorderRadius.circular(12),

                    border: Border.all(

                      color: _validationResult?.analysis?.isReadyToLaunch == true 

                          ? Colors.green.withOpacity(0.5) 

                          : Colors.cyanAccent.withOpacity(0.3),

                    ),

                  ),

                  child: ClipRRect(

                    borderRadius: BorderRadius.circular(12),

                    child: SingleChildScrollView(

                      child: StabilityPanel(

                        validation: _validationResult,

                        placedParts: _placedParts,

                        onRunAnalysis: _runStabilityAnalysis,

                        onLaunch: (_validationResult?.analysis?.isReadyToLaunch == true && 

                                  (_validationResult?.issues.isEmpty == true))

                          ? () {

                              setState(() => _wasRiskyLaunch = false);

                              _launchRocket();

                            }

                          : null,

                        onRiskyLaunch: _placedParts.isNotEmpty

                          ? () {

                              setState(() => _wasRiskyLaunch = true);

                              _launchRocket();

                            }

                          : null,

                        onClose: () => setState(() => _validationResult = null),

                        isAnalyzing: _isAnalyzing,

                      ),

                    ),

                  ),

                ),

              ),

            ),

          // DARK OVERLAY (only when menu open)

          if (_isMenuOpen)

            Positioned.fill(

              child: GestureDetector(

                onTap: _closeMenu,

                behavior: HitTestBehavior.translucent,

                child: Container(

                  color: Colors.transparent,

                  margin: const EdgeInsets.only(left: 280, top: 60),

                ),

              ),

            ),

        ],

      ),

    );

  }

}



// ── Placed part: tap to select, pan to move, tap ✕ to delete ─────────────────

class _CanvasPartWidget extends StatefulWidget {

  final PlacedPart placed;

  final double launchOffset;

  final bool isLaunching;

  final List<PlacedPart> allParts;

  final Function(Offset) onMoved;

  final VoidCallback onRemoved;

  final VoidCallback onUnsnap;

  final double Function(Size, String) getPartHeight;

  final double Function(Size, String, double) getPartWidth;

  final void Function(String, String, String, String) onConnect;



  const _CanvasPartWidget({

    super.key,

    required this.placed,

    required this.launchOffset,

    required this.isLaunching,

    required this.allParts,

    required this.onMoved,

    required this.onRemoved,

    required this.onUnsnap,

    required this.getPartHeight,

    required this.getPartWidth,

    required this.onConnect,

  });



  @override

  State<_CanvasPartWidget> createState() => _CanvasPartWidgetState();

}



class _CanvasPartWidgetState extends State<_CanvasPartWidget>

    with SingleTickerProviderStateMixin {

  bool _selected = false;

  bool _isDragging = false;

  late AnimationController _popController;

  late Animation<double> _popAnimation;

  SnapResult? _activeSnap;

  // Track that we just unsnapped - need to move away before re-snapping

  bool _justUnsnapped = false;

  Offset? _unsnapPosition;

  // Track when part was created to prevent immediate snapping

  late DateTime _createdAt;

  bool get _canSnap => DateTime.now().difference(_createdAt).inMilliseconds > 50; // Reduced from 150ms

  // Frame counter for throttling snap detection

  int _frameCount = 0;



  @override

  void initState() {

    super.initState();

    _createdAt = DateTime.now();

    _popController = AnimationController(

      duration: const Duration(milliseconds: 150),

      vsync: this,

    );

    _popAnimation = CurvedAnimation(

      parent: _popController,

      curve: Curves.elasticOut,

    );

    _popController.forward();

  }



  @override

  void dispose() {

    _popController.dispose();

    super.dispose();

  }



  void _handleUnsnap() {

    _justUnsnapped = true;

    _unsnapPosition = widget.placed.position;

    widget.onUnsnap();

  }



  // Optimized snap detection - extracted for throttling

  void _checkForSnap(Offset newPosition, double partHeight, double partWidth, double myCenterX) {

    final size = MediaQuery.of(context).size;

    final myTop = newPosition.dy;

    final myBottom = newPosition.dy + partHeight;

    

    SnapResult? bestSnap;

    double bestScore = double.infinity;

    

    for (final other in widget.allParts) {

      if (other.instanceId == widget.placed.instanceId) continue;

      

      final otherHeight = widget.getPartHeight(size, other.part.name);

      final otherWidth = widget.getPartWidth(size, other.part.name, otherHeight);

      final otherTop = other.position.dy;

      final otherBottom = other.position.dy + otherHeight;

      final otherCenterX = other.position.dx + otherWidth / 2;

      

      // Vertical snap detection (stacking top-to-bottom)

      const snapThreshold = 30.0;

      

      // Case 1: My bottom -> Other's top (stack below)

      final dyBottomToTop = (myBottom - otherTop).abs();

      final dxAlignBottomToTop = (myCenterX - otherCenterX).abs();

      

      if (dyBottomToTop < snapThreshold && dxAlignBottomToTop < partWidth * 0.6) {

        final score = dyBottomToTop + dxAlignBottomToTop * 0.5;

        if (score < bestScore) {

          bestScore = score;

          final snapPos = Offset(

            otherCenterX - partWidth / 2,

            otherTop - partHeight,

          );

          bestSnap = SnapResult(

            snapPosition: snapPos,

            sourceNode: ConnectionNode(

              type: NodeType.bottom,

              id: '${widget.placed.instanceId}_bottom',

              offset: const Offset(0.5, 1.0),

              radius: snapThreshold,

              isMale: true,

            ),

            targetNode: ConnectionNode(

              type: NodeType.top,

              id: '${other.instanceId}_top',

              offset: const Offset(0.5, 0.0),

              radius: snapThreshold,

              isMale: false,

            ),

            distance: score,

            targetPartId: other.instanceId,

          );

        }

      }

      

      // Case 2: My top -> Other's bottom (stack above)

      final dyTopToBottom = (myTop - otherBottom).abs();

      final dxAlignTopToBottom = (myCenterX - otherCenterX).abs();

      

      if (dyTopToBottom < snapThreshold && dxAlignTopToBottom < partWidth * 0.6) {

        final score = dyTopToBottom + dxAlignTopToBottom * 0.5;

        if (score < bestScore) {

          bestScore = score;

          final snapPos = Offset(

            otherCenterX - partWidth / 2,

            otherBottom,

          );

          bestSnap = SnapResult(

            snapPosition: snapPos,

            sourceNode: ConnectionNode(

              type: NodeType.top,

              id: '${widget.placed.instanceId}_top',

              offset: const Offset(0.5, 0.0),

              radius: snapThreshold,

              isMale: false,

            ),

            targetNode: ConnectionNode(

              type: NodeType.bottom,

              id: '${other.instanceId}_bottom',

              offset: const Offset(0.5, 1.0),

              radius: snapThreshold,

              isMale: true,

            ),

            distance: score,

            targetPartId: other.instanceId,

          );

        }

      }

      

      // Horizontal snap detection (Side Boosters ONLY)

      if (widget.placed.part.type == PartType.booster) {

        final myRight = newPosition.dx + partWidth;

        final myLeft = newPosition.dx;

        final otherRight = other.position.dx + otherWidth;

        final otherLeft = other.position.dx;

        final myCenterY = newPosition.dy + partHeight / 2;

        final otherCenterY = other.position.dy + otherHeight / 2;

        

        const sideSnapThreshold = 25.0;

        

        // My right touches other's left

        final dxRightToLeft = (myRight - otherLeft).abs();

        final dyAlignRightToLeft = (myCenterY - otherCenterY).abs();

        

        if (dxRightToLeft < sideSnapThreshold && dyAlignRightToLeft < partHeight * 0.4) {

          final score = dxRightToLeft + dyAlignRightToLeft * 0.5;

          if (score < bestScore) {

            bestScore = score;

            final snapPos = Offset(

              otherLeft - partWidth,

              otherCenterY - partHeight / 2,

            );

            bestSnap = SnapResult(

              snapPosition: snapPos,

              sourceNode: ConnectionNode(

                type: NodeType.right,

                id: '${widget.placed.instanceId}_right',

                offset: const Offset(1.0, 0.5),

                radius: sideSnapThreshold,

                isMale: true,

              ),

              targetNode: ConnectionNode(

                type: NodeType.left,

                id: '${other.instanceId}_left',

                offset: const Offset(0.0, 0.5),

                radius: sideSnapThreshold,

                isMale: false,

              ),

              distance: score,

              targetPartId: other.instanceId,

            );

          }

        }

        

        // My left touches other's right

        final dxLeftToRight = (myLeft - otherRight).abs();

        final dyAlignLeftToRight = (myCenterY - otherCenterY).abs();

        

        if (dxLeftToRight < sideSnapThreshold && dyAlignLeftToRight < partHeight * 0.4) {

          final score = dxLeftToRight + dyAlignLeftToRight * 0.5;

          if (score < bestScore) {

            bestScore = score;

            final snapPos = Offset(

              otherRight,

              otherCenterY - partHeight / 2,

            );

            bestSnap = SnapResult(

              snapPosition: snapPos,

              sourceNode: ConnectionNode(

                type: NodeType.left,

                id: '${widget.placed.instanceId}_left',

                offset: const Offset(0.0, 0.5),

                radius: sideSnapThreshold,

                isMale: true,

              ),

              targetNode: ConnectionNode(

                type: NodeType.right,

                id: '${other.instanceId}_right',

                offset: const Offset(1.0, 0.5),

                radius: sideSnapThreshold,

                isMale: false,

              ),

              distance: score,

              targetPartId: other.instanceId,

            );

          }

        }

      }

    }

    

    setState(() => _activeSnap = bestSnap);

    

    if (bestSnap != null) {

      widget.onMoved(bestSnap.snapPosition);

    } else {

      widget.onMoved(newPosition);

    }

  }



  @override

  Widget build(BuildContext context) {

    final size = MediaQuery.of(context).size;

    final double partHeight = widget.getPartHeight(size, widget.placed.part.name);

    final double partWidth = widget.getPartWidth(size, widget.placed.part.name, partHeight);

    final nodes = ConnectionNodeManager.getNodesForPart(widget.placed.part, partHeight);

    

    return Positioned(

      left: widget.placed.position.dx,

      top: widget.placed.position.dy + widget.launchOffset,

      child: ScaleTransition(

        scale: _popAnimation,

        child: GestureDetector(

          behavior: HitTestBehavior.opaque, // Changed from translucent - parts must capture touches

          onTap: () => setState(() => _selected = !_selected),

          onLongPress: widget.placed.connections.isNotEmpty ? () {

            _handleUnsnap();

            setState(() {});

          } : null,

          onPanStart: (_) {

            setState(() => _isDragging = true);

            // Don't reset _unsnapPosition here - keep the original unsnap location

          },

          onPanEnd: (_) {

            setState(() => _isDragging = false);

            // Save the connection if we have an active snap

            if (_activeSnap != null) {

              widget.onConnect(

                widget.placed.instanceId,

                _activeSnap!.sourceNode.id,

                _activeSnap!.targetPartId,

                _activeSnap!.targetNode.id,

              );

              _activeSnap = null;

              _justUnsnapped = false; // Reset after successful snap

              _unsnapPosition = null;

            }

          },

          onPanUpdate: widget.isLaunching ? null : (details) {

            // Higher sensitivity for more responsive dragging

            final sensitivity = 1.0; // Increased from 0.7

            final delta = Offset(

              details.delta.dx * sensitivity,

              details.delta.dy * sensitivity,

            );

            

            Offset newPosition = widget.placed.position + delta;

            final myCenterX = newPosition.dx + partWidth / 2;

            

            // Check if we moved far enough from unsnap position to allow re-snapping

            if (_justUnsnapped && _unsnapPosition != null) {

              final distanceMoved = (newPosition - _unsnapPosition!).distance;

              if (distanceMoved > 30.0) { // Reduced from 60px

                _justUnsnapped = false;

                _unsnapPosition = null;

              }

            }

            

            // Throttle snap detection - only check every other frame for performance

            _frameCount++;

            if (_frameCount % 2 == 0 && !_justUnsnapped && _canSnap) {

              _checkForSnap(newPosition, partHeight, partWidth, myCenterX);

            } else {

              // Just update position without snap check

              widget.onMoved(newPosition);

            }

          },

          child: Stack(

            clipBehavior: Clip.none,

            children: [

              // Part image

              Container(

                width: partWidth,

                height: partHeight,

                decoration: const BoxDecoration(),

                child: ClipRRect(

                  borderRadius: BorderRadius.circular(8),

                  child: Image.asset(

                    widget.placed.part.imagePath,

                    fit: BoxFit.fill, // Fill exactly to eliminate gaps

                    errorBuilder: (_, __, ___) => const Icon(

                      Icons.rocket_launch,

                      color: Colors.cyanAccent,

                      size: 30,

                    ),

                  ),

                ),

              ),



              // Fire and smoke effects for engines and boosters during launch

              if (widget.isLaunching && 

                  (widget.placed.part.type == PartType.nozzle || 

                   widget.placed.part.type == PartType.booster))

                Positioned(

                  bottom: -20,

                  left: partWidth * 0.2,

                  right: partWidth * 0.2,

                  child: Column(

                    mainAxisSize: MainAxisSize.min,

                    children: [

                      // Fire effect

                      Container(

                        height: 30,

                        decoration: BoxDecoration(

                          gradient: LinearGradient(

                            begin: Alignment.topCenter,

                            end: Alignment.bottomCenter,

                            colors: [

                              Colors.yellow.withOpacity(0.8),

                              Colors.orange.withOpacity(0.9),

                              Colors.red.withOpacity(0.7),

                              Colors.transparent,

                            ],

                          ),

                          borderRadius: BorderRadius.only(

                            bottomLeft: Radius.circular(partWidth * 0.3),

                            bottomRight: Radius.circular(partWidth * 0.3),

                          ),

                        ),

                      ),

                      // Smoke effect

                      Container(

                        height: 20,

                        decoration: BoxDecoration(

                          gradient: LinearGradient(

                            begin: Alignment.topCenter,

                            end: Alignment.bottomCenter,

                            colors: [

                              Colors.grey.withOpacity(0.5),

                              Colors.grey.withOpacity(0.2),

                              Colors.transparent,

                            ],

                          ),

                        ),

                      ),

                    ],

                  ),

                ),

                // Connection nodes - invisible (used for logic only)

                if (false)

                ...nodes.map((node) {

                  final isConnected = widget.placed.connections.containsKey(node.id);

                  final isActiveSnap = _activeSnap?.sourceNode.id == node.id ||

                                       _activeSnap?.targetNode.id == node.id;

                  final isTarget = _activeSnap?.targetNode.id == node.id;

                  

                  return Positioned(

                    left: node.offset.dx * partWidth - node.radius / 2,

                    top: node.offset.dy * partHeight - node.radius / 2,

                    child: Container(

                      width: node.radius,

                      height: node.radius,

                      decoration: BoxDecoration(

                        shape: BoxShape.circle,

                        color: isConnected

                          ? Colors.green.withOpacity(0.8)

                          : isTarget 

                            ? Colors.greenAccent.withOpacity(0.6)

                            : isActiveSnap

                              ? Colors.orangeAccent.withOpacity(0.6)

                              : Colors.cyanAccent.withOpacity(0.3),

                        border: Border.all(

                          color: isConnected

                            ? Colors.green

                            : isTarget

                              ? Colors.greenAccent

                              : isActiveSnap

                                ? Colors.orangeAccent

                                : Colors.cyanAccent,

                          width: isConnected || isActiveSnap ? 2 : 1,

                        ),

                        boxShadow: isConnected || isActiveSnap ? [

                          BoxShadow(

                            color: (isConnected ? Colors.green : isTarget ? Colors.greenAccent : Colors.orangeAccent).withOpacity(0.5),

                            blurRadius: 8,

                            spreadRadius: 2,

                          ),

                        ] : null,

                      ),

                      child: Center(

                        child: Icon(

                          isConnected ? Icons.check_circle : node.isMale ? Icons.add_circle : Icons.circle,

                          size: node.radius * 0.4,

                          color: isConnected ? Colors.white : node.isMale ? Colors.white : Colors.cyanAccent,

                        ),

                      ),

                    ),

                  );

                }),



              // Label

              if (_selected)

                Positioned(

                  top: partHeight + 4,

                  left: -10,

                  child: Container(

                    constraints: BoxConstraints(maxWidth: partWidth + 20),

                    padding: const EdgeInsets.symmetric(

                        horizontal: 6, vertical: 3),

                    decoration: BoxDecoration(

                      color: Colors.black.withOpacity(0.9),

                      border: Border.all(

                          color: Colors.cyanAccent.withOpacity(0.5)),

                      borderRadius: BorderRadius.circular(4),

                    ),

                    child: Column(

                      children: [

                        Text(

                          widget.placed.part.name,

                          style: const TextStyle(

                            color: Colors.white,

                            fontSize: 10,

                            letterSpacing: 0.3,

                          ),

                          textAlign: TextAlign.center,

                          maxLines: 2,

                          overflow: TextOverflow.ellipsis,

                        ),

                        if (widget.placed.connections.isNotEmpty)

                          const Text(

                            '(Long press to unsnap)',

                            style: TextStyle(

                              color: Colors.greenAccent,

                              fontSize: 8,

                            ),

                          ),

                      ],

                    ),

                  ),

                ),



              // Delete button

              if (_selected)

                Positioned(

                  top: -8,

                  right: -8,

                  child: GestureDetector(

                    onTap: widget.onRemoved,

                    child: Container(

                      width: 24,

                      height: 24,

                      decoration: BoxDecoration(

                        color: Colors.red.shade700,

                        shape: BoxShape.circle,

                        border: Border.all(color: Colors.white, width: 1.5),

                      ),

                      child: const Icon(Icons.close,

                          color: Colors.white, size: 14),

                    ),

                  ),

                ),

            ],

          ),

        ),

      ),

    );

  }

}

