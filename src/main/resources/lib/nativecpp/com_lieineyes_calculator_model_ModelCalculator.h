/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_lieineyes_calculator_model_ModelCalculator */

#ifndef _Included_com_lieineyes_calculator_model_ModelCalculator
#define _Included_com_lieineyes_calculator_model_ModelCalculator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_lieineyes_calculator_model_ModelCalculator
 * Method:    calculate
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_com_lieineyes_calculator_model_ModelCalculator_calculate
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_lieineyes_calculator_model_ModelCalculator
 * Method:    validInputExpression
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lieineyes_calculator_model_ModelCalculator_validInputExpression
  (JNIEnv *, jobject, jstring);

  jobject newDouble(JNIEnv* env, double value);

#ifdef __cplusplus
}
#endif
#endif
