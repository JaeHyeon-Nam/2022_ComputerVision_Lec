#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void onMouse(int event, int x, int y, int flags, void* param) { // 마우스 이벤트 함수 생성
	if (event == EVENT_LBUTTONDOWN) {     // 좌측 마우스 이벤트
		Mat& img = *(Mat*)(param);    // 만들어 놓은 윈도우 참조
		circle(img, Point(x, y), 100, Scalar(0, 255, 0), 10); // x,y위치에 반지름 100인 
																													// 초록색 원, 두께 10 생성
		imshow("src", img);
	}
	else if (event == EVENT_RBUTTONDOWN) { // 우측 마우스 이벤트
		Mat& img = *(Mat*)(param);    // 만들어 놓은 윈도우 참조
		rectangle(img, Point(x - 50, y - 50), Point(x + 50, y + 50), Scalar(0, 0, 0), 10);
		// x,y 위치에 x-50,y-50 위치,
		// x+50,y+50 위치의 하얀색 사각형
		// 두께 10 생성
		imshow("src", img);
	}
}

int main()
{
	Mat src = Mat(600, 800, CV_8UC3, Scalar(255, 255, 255)); // 하얀색 바탕 윈도우 생성.
	imshow("src", src);

	setMouseCallback("src", onMouse, &src);   // 마우스 이벤트 반환 함수.
	waitKey(0);
	return 0;
}