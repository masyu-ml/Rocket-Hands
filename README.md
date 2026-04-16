# Rocket Hands

<p align="center">
  <img src="assets/app_logo/rocket_hands_logo.png" alt="Rocket Hands Logo" width="200"/>
</p>

<p align="center">
  <b>An Augmented Reality STEM Education Application for Rocket Assembly</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Flutter-3.x-blue?logo=flutter" alt="Flutter"/>
  <img src="https://img.shields.io/badge/Unity-2022.3-green?logo=unity" alt="Unity"/>
  <img src="https://img.shields.io/badge/ARCore-Supported-orange" alt="ARCore"/>
  <img src="https://img.shields.io/badge/MediaPipe-Hand%20Tracking-red" alt="MediaPipe"/>
  <img src="https://img.shields.io/badge/Platform-Android-blue?logo=android" alt="Android"/>
</p>

---

## Table of Contents
- [Overview](#overview)
- [Key Features](#key-features)
- [Screenshots](#screenshots)
- [Technology Stack](#technology-stack)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Build Instructions](#build-instructions)
- [Architecture](#architecture)
- [Team](#team)
- [Acknowledgments](#acknowledgments)

---

## Overview

**Rocket Hands** is an educational mobile application that teaches users rocket engineering principles through interactive 2D assembly and immersive 3D Augmented Reality experiences. Users can build famous rockets like the Saturn V and Delta III, learning about each component's specifications and historical significance while validating their builds against real-world physics constraints.

The application combines Flutter's cross-platform UI capabilities with Unity's AR rendering, creating a seamless educational experience that works entirely offline.

---

## Key Features

### 2D Assembly Mode
- **Drag-and-Drop Interface**: Intuitive part placement with visual snap-to-grid
- **Physics Validation System**: Real-time structural integrity checks prevent illogical configurations (e.g., engines on top, fairings at bottom)
- **Educational Content**: Detailed specifications and historical facts for each component
- **Progress Tracking**: Real-time completion percentage and parts counter
- **Multiple Rocket Types**: Saturn V (Apollo missions), Delta III (commercial launches)

### 3D AR Mode
- **Hand Tracking Control**: MediaPipe-powered hand detection for natural gesture-based part manipulation
- **ARCore Integration**: Spatial awareness for placing rockets in real-world environments
- **Gesture Recognition**: Pinch-to-grab, move, and release mechanics
- **Immersive Building**: Full rocket assembly in Augmented Reality with proper scaling

### Technical Features
- **Flutter-Unity Activity Handoff**: Seamless transition between 2D UI and 3D AR without app restart
- **Camera Session Management**: Proper camera handoff between Flutter and Unity to prevent conflicts
- **Offline Functionality**: No internet required after initial installation
- **Cross-Platform Foundation**: Flutter codebase with Android deployment (iOS-ready architecture)

---

## Screenshots

*Screenshots and demo video will be added here*

---

## Technology Stack

| Component | Technology |
|-----------|------------|
| **Frontend Framework** | Flutter 3.x |
| **AR Engine** | Unity 2022.3 LTS |
| **AR Platform** | Google ARCore |
| **Hand Tracking** | Google MediaPipe |
| **Language** | Dart (Flutter), C# (Unity), Kotlin (Android) |
| **Platform** | Android (API 28+) |

---

## Prerequisites

### Development Environment
- Flutter SDK 3.x or higher
- Android Studio with Android SDK
- Unity 2022.3 LTS with Android Build Support
- JDK 17
- Android device with ARCore support (for testing AR features)

### Supported Devices
- Android 9.0 (API 28) or higher
- ARCore-compatible device (for 3D AR Mode)
- Minimum 4GB RAM recommended

---

## Installation

### 1. Clone the Repository
```bash
git clone https://github.com/masyu-ml/Rocket-Hands.git
cd Rocket-Hands
```

### 2. Install Flutter Dependencies
```bash
flutter pub get
```

### 3. Unity Library Setup
The Unity library modules are included in the repository:
- `unity_rocket_lib_withbackbutton/` - Unity AR module with back button support
- `unity_rocket_lib_kotlin/` - Legacy Kotlin integration module

### 4. Android Configuration
Ensure your `local.properties` (not in repo) contains:
```properties
sdk.dir=C:\\Users\\[Username]\\AppData\\Local\\Android\\Sdk
flutter.sdk=C:\\flutter
```

---

## Build Instructions

### Debug Build
```bash
flutter build apk --debug
```

### Release Build
```bash
flutter build apk --release
```

Output location: `build/app/outputs/flutter-apk/app-release.apk`

### Install on Device
```bash
flutter install
```

Or manually install the APK:
```bash
adb install build/app/outputs/flutter-apk/app-release.apk
```

---

## Architecture

```
┌─────────────────┐     ┌─────────────────┐     ┌─────────────────┐
│   Flutter UI    │────▶│  MethodChannel  │────▶│  Unity Engine   │
│  (2D Assembly)  │     │  (launchUnity)  │     │  (3D AR Mode)   │
└─────────────────┘     └─────────────────┘     └─────────────────┘
         │                                               │
         │                                               │
         ▼                                               ▼
┌─────────────────┐                           ┌─────────────────┐
│  Rocket Models  │                           │  ARCore Camera  │
│  Validation     │                           │  MediaPipe      │
│  Drag-and-Drop  │                           │  Hand Tracking  │
└─────────────────┘                           └─────────────────┘
```

### Key Components

**MainActivity.kt**: Handles Flutter-Unity communication via MethodChannel
**Spaceflight2DScreen.dart**: 2D assembly interface with physics validation
**UnityPlayerActivity**: Unity's AR scene with MediaPipe hand tracking
**RocketValidator**: Core physics validation logic

---

## Project Structure

```
rocket_hands/
├── android/                    # Android platform code
│   └── app/
│       ├── build.gradle.kts    # App build configuration
│       ├── proguard-rules.pro  # ProGuard rules for Unity/ARCore
│       └── src/main/
│           ├── AndroidManifest.xml
│           └── kotlin/.../MainActivity.kt
├── lib/                        # Dart source code
│   ├── main.dart              # App entry point
│   ├── screens/               # UI screens
│   │   ├── spaceflight_2d_screen.dart
│   │   └── ...
│   ├── models/                # Data models
│   ├── widgets/               # Reusable UI components
│   └── utils/                 # Utility classes (validation, physics)
├── unity_rocket_lib_withbackbutton/  # Unity AR module
│   └── unityLibrary/          # Exported Unity library
├── pubspec.yaml               # Flutter dependencies
└── README.md                  # This file
```

---

## Team

| Name | Role | Contribution |
|------|------|--------------|
| **Matthew** | Project Lead | Physics validation system, AR integration, architecture design |
| **Baldovino** | Developer | 2D assembly interface, educational content, UI/UX |
| **Caneta** | Developer | 3D AR mode, hand tracking integration, spatial mechanics |
| **Pasagdan** | Developer | Rocket models, validation algorithms, testing |

---

## Acknowledgments

- Flutter Team for the cross-platform framework
- Unity Technologies for AR capabilities
- Google ARCore and MediaPipe teams
- Historical rocket data from NASA and public aerospace sources

---

## License

This project is for educational purposes.

---

## Contact

For questions or collaboration:
- **GitHub Issues**: [github.com/masyu-ml/Rocket-Hands/issues](https://github.com/masyu-ml/Rocket-Hands/issues)
- **Demo Video**: *Link to be added*

---

<p align="center">
  <b>Built with passion for STEM education</b>
</p>
