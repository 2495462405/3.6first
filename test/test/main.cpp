//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    cv::Mat src_color = cv::imread("/Users/xuyishen/Desktop/sa jiganyouhaximeiyouga/2020.3.6/RGB/RGB.png");
    std::vector<cv::Mat> channels;
    cv::split(src_color, channels);
    cv::Mat B = channels.at(0);
    cv::Mat G = channels.at(1);
    cv::Mat R = channels.at(2);
        cv::namedWindow("red");
    cv::namedWindow("blue");
    cv::namedWindow("green");
    cv::namedWindow("original Mat");
        cv::imshow("red", R);
        cv::imshow("blue", B);
    cv::imshow("green", G);
    cv::imshow("original Mat", src_color);
        waitKey(0);
        return 0;
    }
