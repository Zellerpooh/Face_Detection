#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
#include <android/log.h>
#include "BitmapMatUtils.h"
#include "cardocr.h"

using namespace std;
using namespace cv;

static bool DEBUG = false;

static const char *const LOG_TAG = "native-lib";

#define LOG_D(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C"
JNIEXPORT jstring JNICALL
Java_zeller_com_facedetection_BankCardOcr_cardOcr(JNIEnv *env, jclass type, jobject bitmap) {

    // TODO

    Mat mat;
    bitmap_to_mat(env, bitmap, mat);

    __android_log_print(ANDROID_LOG_ERROR, "TAG_face", "%d, %d, %d", mat.cols, mat.rows,
                        mat.type());

    Rect card_rect;
    co1::find_card_area(mat, card_rect);

    Mat card_mat(mat, card_rect);
    imwrite("/storage/emulated/0/ocr/card_mat.jpg", card_mat);

    Rect card_number_rect;
    co1::find_card_number_area(card_mat, card_number_rect);

    LOG_D("area,x:%d,y:%d,width%d,height%d", card_number_rect.x, card_number_rect.y, card_number_rect.width, card_number_rect.height);

    Mat card_number_mat(card_mat, card_number_rect);

    imwrite("/storage/emulated/0/ocr/card_number_mat.jpg", card_number_mat);

    LOG_D("处理完毕");

    return env->NewStringUTF("622848");
}