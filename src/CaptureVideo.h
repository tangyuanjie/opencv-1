#ifndef CAPTUREVIDEO_H__
#define CAPTUREVIDEO_H__
#include <opencv2\opencv.hpp>
#include <string>

class CaptureVideo{
	public:

		void captureV();
		cv::Mat Purevideo;

	private:
		cv::VideoCapture videoCapture;
};


#endif