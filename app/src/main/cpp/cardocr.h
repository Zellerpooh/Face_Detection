//
// Created by Administrator on 2018/9/5.
//

#include <opencv2/opencv.hpp>

#ifndef ASPROJECTS_CARDOCR_H
#define ASPROJECTS_CARDOCR_H

using namespace cv;

namespace co1 {

    int find_card_area(const Mat &mat, Rect &srcRect);

    int find_card_number_area(const Mat &mat,Rect &area);

}
namespace co2 {

}

#endif //ASPROJECTS_CARDOCR_H
