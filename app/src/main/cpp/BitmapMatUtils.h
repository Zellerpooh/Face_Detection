//
// Created by Administrator on 2018/9/5.
//

#ifndef ASPROJECTS_BITMAPMATUTILS_H
#define ASPROJECTS_BITMAPMATUTILS_H


#include <opencv2/opencv.hpp>
#include <android/bitmap.h>

using namespace cv;

void bitmap_to_mat(JNIEnv *env, jobject &srcBitmap, Mat &srcMat);

void mat_to_bitmap(JNIEnv *env, Mat &srcMat, jobject &dstBitmap);


#endif //ASPROJECTS_BITMAPMATUTILS_H
