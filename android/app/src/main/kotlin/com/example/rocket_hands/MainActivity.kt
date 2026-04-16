package com.example.rocket_hands

import android.content.Intent
import android.os.Handler
import android.os.Looper
import com.unity3d.player.UnityPlayerActivity
import io.flutter.embedding.android.FlutterActivity
import io.flutter.embedding.engine.FlutterEngine
import io.flutter.plugin.common.MethodChannel

class MainActivity : FlutterActivity() {
    private val CHANNEL = "com.rocket_hands/unity"

    override fun configureFlutterEngine(flutterEngine: FlutterEngine) {
        super.configureFlutterEngine(flutterEngine)

        MethodChannel(
            flutterEngine.dartExecutor.binaryMessenger,
            CHANNEL
        ).setMethodCallHandler { call, result ->
            when (call.method) {
                "launchUnity" -> {
                    val intent = Intent(this, UnityPlayerActivity::class.java)
                    intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK or
                                   Intent.FLAG_ACTIVITY_CLEAR_TOP or
                                   Intent.FLAG_ACTIVITY_SINGLE_TOP
                    intent.putExtra("unity", "load")
                    Handler(Looper.getMainLooper()).postDelayed({
                        startActivity(intent)
                    }, 1000)
                    result.success(null)
                }
                else -> {
                    result.notImplemented()
                }
            }
        }
    }
}
