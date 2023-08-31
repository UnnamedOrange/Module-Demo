package com.orange.libnative

class LibNative {
    companion object {
        init {
            System.loadLibrary("libnative")
        }

        fun helloWorld(): String {
            return nativeAddHello("native!");
        }
    }
}

private external fun nativeAddHello(original: String): String
