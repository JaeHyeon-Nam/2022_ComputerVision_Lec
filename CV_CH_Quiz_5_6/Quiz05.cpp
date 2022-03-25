#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src = Mat(600, 800, CV_8UC3, Scalar(255, 255, 255)); // �Ͼ�� ��� 800x600 ������
	circle(src, Point(100, 100), 50, Scalar(255, 0, 0), 10); // 100x100 ��ġ�� ������ 50,
															  // �Ķ��� ��, �β� 10 ����.
	imshow("src", src); //window �����ֱ�.
	waitKey(0);         // ����ڰ� Ű�� ���� �� ���� ���. (0�� ������ ���)
	return 0;
}