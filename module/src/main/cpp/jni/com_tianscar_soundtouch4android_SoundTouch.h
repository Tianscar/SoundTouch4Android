/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tianscar_soundtouch4android_SoundTouch */

#ifndef _Included_com_tianscar_soundtouch4android_SoundTouch
#define _Included_com_tianscar_soundtouch4android_SoundTouch
#ifdef __cplusplus
extern "C" {
#endif
#undef com_tianscar_soundtouch4android_SoundTouch_SOUNDTOUCH_VERSION_ID
#define com_tianscar_soundtouch4android_SoundTouch_SOUNDTOUCH_VERSION_ID 20200L
#undef com_tianscar_soundtouch4android_SoundTouch_SOUNDTOUCH_MAX_CHANNELS
#define com_tianscar_soundtouch4android_SoundTouch_SOUNDTOUCH_MAX_CHANNELS 16L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_USE_AA_FILTER
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_USE_AA_FILTER 0L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_AA_FILTER_LENGTH
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_AA_FILTER_LENGTH 1L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_USE_QUICKSEEK
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_USE_QUICKSEEK 2L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_SEQUENCE_MS
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_SEQUENCE_MS 3L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_SEEKWINDOW_MS
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_SEEKWINDOW_MS 4L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_OVERLAP_MS
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_OVERLAP_MS 5L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_NOMINAL_INPUT_SEQUENCE
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_NOMINAL_INPUT_SEQUENCE 6L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_NOMINAL_OUTPUT_SEQUENCE
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_NOMINAL_OUTPUT_SEQUENCE 7L
#undef com_tianscar_soundtouch4android_SoundTouch_SETTING_INITIAL_LATENCY
#define com_tianscar_soundtouch4android_SoundTouch_SETTING_INITIAL_LATENCY 8L
/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    newInstance
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_newInstance
  (JNIEnv *, jclass);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    deleteInstance
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_deleteInstance
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    getChannels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_getChannels
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setChannels
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setChannels
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setSampleRate
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setSampleRate
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    getUnprocessedSampleCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_getUnprocessedSampleCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    getSampleCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_getSampleCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    adjustAmountOfSamples
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_adjustAmountOfSamples
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    flush
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_flush
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_clear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    isEmpty
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_isEmpty
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    getInputOutputSampleRatio
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_getInputOutputSampleRatio
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    putSamples
 * Signature: (J[SI)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_putSamples
  (JNIEnv *, jobject, jlong, jshortArray, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    receiveSamples1
 * Signature: (J[SI)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_receiveSamples1
  (JNIEnv *, jobject, jlong, jshortArray, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    receiveSamples2
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_receiveSamples2
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setRate
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setRate
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setTempo
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setTempo
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setRateChange
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setRateChange
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setTempoChange
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setTempoChange
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setPitch
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setPitch
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setPitchOctaves
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setPitchOctaves
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setPitchSemiTones1
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setPitchSemiTones1
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setPitchSemiTones2
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setPitchSemiTones2
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    setSettingValue
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_setSettingValue
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_tianscar_soundtouch4android_SoundTouch
 * Method:    getSettingValue
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_tianscar_soundtouch4android_SoundTouch_getSettingValue
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
