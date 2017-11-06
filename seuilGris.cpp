#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>



#define SEUIL 70  


using namespace std;
using namespace cv;



int main(int argc, char** argv){


	Mat imageIn = imread( argv[1], CV_LOAD_IMAGE_GRAYSCALE );
	Mat imageOut = Mat::zeros( imageIn.size(), imageIn.type() );
	
	
	if(! imageIn.data )                              // Check for invalid input
    {
        	cout <<  "Could not open or find the image" << std::endl ;
        	return -1;
   	}

   	threshold(imageIn, imageOut, SEUIL, 255, THRESH_BINARY);
       
	imwrite( argv[2], imageOut);
	imshow( "Display window", imageOut );             
	waitKey(0);       	

	
	return 0;
}

