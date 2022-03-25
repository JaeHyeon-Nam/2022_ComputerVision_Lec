#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void onMouse(int event, int x, int y, int flags, void* param) { // ���콺 �̺�Ʈ �Լ� ����
	if (event == EVENT_LBUTTONDOWN) {     // ���� ���콺 �̺�Ʈ
		Mat& img = *(Mat*)(param);    // ����� ���� ������ ����
		circle(img, Point(x, y), 100, Scalar(0, 255, 0), 10); // x,y��ġ�� ������ 100�� 
																													// �ʷϻ� ��, �β� 10 ����
		imshow("src", img);
	}
	else if (event == EVENT_RBUTTONDOWN) { // ���� ���콺 �̺�Ʈ
		Mat& img = *(Mat*)(param);    // ����� ���� ������ ����
		rectangle(img, Point(x - 50, y - 50), Point(x + 50, y + 50), Scalar(0, 0, 0), 10);
		// x,y ��ġ�� x-50,y-50 ��ġ,
		// x+50,y+50 ��ġ�� �Ͼ�� �簢��
		// �β� 10 ����
		imshow("src", img);
	}
}

int main()
{
	Mat src = Mat(600, 800, CV_8UC3, Scalar(255, 255, 255)); // �Ͼ�� ���� ������ ����.
	imshow("src", src);

	setMouseCallback("src", onMouse, &src);   // ���콺 �̺�Ʈ ��ȯ �Լ�.
	waitKey(0);
	return 0;
}