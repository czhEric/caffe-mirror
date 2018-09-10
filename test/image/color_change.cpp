#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cv.h>
#include <highgui.h>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc, char* argv[])
{
    if(argc <= 2){
        cout << "usage: main [input_image] [output_image]" << endl;
        return -1;
    }
    
    Mat frame;
    Mat proccess;
    frame=imread(argv[1], 1);//读一张图
    cvtColor(frame, proccess, CV_BGRA2GRAY);//转化成灰度图

    Mat dstImg;
    resize(proccess, dstImg, Size(28,28));
    adaptiveThreshold(dstImg, dstImg, 255, ADAPTIVE_THRESH_GAUSSIAN_C,
        THRESH_BINARY_INV, 7, 7);//自适应二值化
    // imshow("src", proccess);
    // imshow("dst", dstImg);
    imwrite(argv[2], dstImg);
    waitKey(0);
}


