#include <string>
#include <concepts>

#include <jni.h>

using namespace std::literals;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_orange_libnative_LibNativeKt_nativeAddHello(JNIEnv *env, jclass clazz, jstring original) {
    const auto str = env->GetStringUTFChars(original, nullptr);
    const auto ret = env->NewStringUTF(("Hello, "s + str).c_str());
    static_assert(std::same_as<decltype(ret), const jstring>, "C++20 is not supported.");
    env->ReleaseStringUTFChars(original, str);
    return ret;
}
