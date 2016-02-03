#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv )
{
	// Determines which webcam will be read (if several are plugged)
	int cam_id = 0;

	// init the opencv object that links to the webcam
    cv::VideoCapture capcam;
    capcam.open(cam_id);
    
    if (capcam.isOpened() == false)
    {
    	std::cerr << "Can't open WebCam " << cam_id << std::endl;
    	return -1;
    }

    cv::Mat img;
    
    // while we read an image from the webcam, we display it
    while (capcam.read(img))
    {
    	//capcam.read(img);
    	
    	if (img.empty())
    	{
    		std::cerr << "Empty frame !" << std::endl;
    		return -1;
    	}
    	else
    	{
    		cv::imshow("test", img);  // display
    		cv::waitKey(200);         // refresh every 200 ms
    	}    	
    }

    return 0;
}
