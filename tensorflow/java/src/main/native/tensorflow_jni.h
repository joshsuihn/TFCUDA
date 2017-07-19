/* Copyright 2016 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_JAVA_TENSORFLOW_JNI_H_
#define TENSORFLOW_JAVA_TENSORFLOW_JNI_H_

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

/*
 *  Class:     org_tensorflow_TensorFlow
 *  Method:    version
 *  Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_tensorflow_TensorFlow_version(JNIEnv*,
                                                                 jclass);

//Josh fix
#define RUN_STATS_METHOD(name) \
  JNICALL Java_org_tensorflow_contrib_android_RunStats_##name

//Java_org_tensorflow_contrib_android_RunStats_allocate  
//Java_org_tensorflow_contrib_android_RunStats_allocate__

JNIEXPORT jlong RUN_STATS_METHOD(allocate)(JNIEnv*, jclass);

JNIEXPORT void RUN_STATS_METHOD(delete)(JNIEnv*, jclass, jlong);


JNIEXPORT void RUN_STATS_METHOD(add)(JNIEnv*, jclass, jlong, jbyteArray );

JNIEXPORT jstring RUN_STATS_METHOD(summary)(JNIEnv*, jclass, jlong);



/*
 * Class:     org_tensorflow_TensorFlow
 * Method:    registeredOpList
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_tensorflow_TensorFlow_registeredOpList(JNIEnv*, jclass);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
#endif  // TENSORFLOW_JAVA_TENSORFLOW_JNI_H_
