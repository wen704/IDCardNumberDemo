//
// Created by Gaofu on 2019-09-25.
//

#ifndef IDCARDNUMBERDEMO_COMMON_H
#define IDCARDNUMBERDEMO_COMMON_H

#include <jni.h>
#include <android/log.h>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif //IDCARDNUMBERDEMO_COMMON_H
