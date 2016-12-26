#include <jni.h>
#include <string>


JNIEXPORT jstring JNICALL
Java_com_emotion_gpsgeohashdemo_MainActivity_getstr(JNIEnv *env, jobject instance) {

    // TODO


    return env->NewStringUTF("returnValue");
}

JNIEXPORT jstring JNICALL
Java_com_emotion_gpsgeohashdemo_MainActivity_getGeoHash(JNIEnv *env, jobject instance,
                                                        jdouble latitude, jdouble longitude) {

    // TODO

    return env->NewStringUTF("hehe");
}


extern "C"
jstring
Java_com_emotion_gpsgeohashdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
