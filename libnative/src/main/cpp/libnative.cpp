module;

#include <string>

#include <jni.h>

export module libnative;

using namespace std::literals;

export extern "C"
JNIEXPORT jstring JNICALL
Java_com_orange_libnative_LibNativeKt_nativeAddHello(JNIEnv *env, jclass clazz, jstring original) {
    const auto str = env->GetStringUTFChars(original, nullptr);
    const auto ret = env->NewStringUTF(("Hello, "s + str).c_str());
    env->ReleaseStringUTFChars(original, str);
    return ret;
}
