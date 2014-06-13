//this code is implemented to identify the same image part in the big image.

#include<opencv2\opencv.hpp>
#include<iostream>

int mainsift()
{

	cv::Mat src,bsrc,des,bdes,result;
	char *s = (char*)malloc(sizeof(char)*30);
	cout<<"enter source image path "<<endl;
	gets(s);
	src = cv::imread(s,0);

	cout<<"enter target image path"<<endl;
	gets(s);
	des = cv::imread(s,0);

	vector<cv::KeyPoint> keypoints;
	

	cv::SiftFeatureDetector detector;
	detector.detect(src,keypoints);
	
	cv::drawKeypoints(des,keypoints,des,cv::Scalar(0));

	cv::imshow("keypoints",des);
	

	cv::waitKey();
	return 0;
}