#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv )
{

	int cam_id = 0;

    cv::VideoCapture capcam;
    capcam.open(cam_id);
    
    if (capcam.isOpened() == false)
    {
    	std::cerr << "Can't open WebCam " << cam_id << std::endl;
    	return -1;
    }

    cv::Mat img;
    
    while (true)
    {
    	capcam.read(img);
    	
    	if (img.empty())
    	{
    		std::cerr << "Empty frame !" << std::endl;
    		return -1;
    	}
    	else
    	{
    		cv::imshow("test", img);
    		cv::waitKey(200);
    	}    	
    }

    return 0;
}
