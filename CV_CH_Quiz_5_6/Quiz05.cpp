#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src = Mat(600, 800, CV_8UC3, Scalar(255, 255, 255)); // 하얀색 배경 800x600 윈도우
	circle(src, Point(100, 100), 50, Scalar(255, 0, 0), 10); // 100x100 위치에 반지름 50,
															  // 파란색 원, 두께 10 생성.
	imshow("src", src); //window 보여주기.
	waitKey(0);         // 사용자가 키를 누를 때 까지 대기. (0은 무한히 대기)
	return 0;
}