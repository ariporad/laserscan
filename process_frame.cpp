#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void process_frame(Mat frame)
{
	for (int i = frame.cols / 2; i < frame.cols; i++)
	{
		Mat col = frame.col(i);
		Mat hsv, masked;

		cvtColor(col, hsv, COLOR_BGR2HSV);
		inRange(hsv, Scalar(36, 25, 25), Scalar(70, 255, 255), masked);

		int total_idx = 0;
		int num_idx = 0;

	}
}