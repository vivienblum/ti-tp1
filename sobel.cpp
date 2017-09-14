 #include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

  


using namespace std;
using namespace cv;



int main(int argc, char** argv){


	Mat imageIn = imread( argv[1], CV_LOAD_IMAGE_GRAYSCALE );
	namedWindow( "Original image", CV_WINDOW_AUTOSIZE );
	imshow( "Original image", imageIn );     
	Mat imageOutX = Mat::zeros( imageIn.size(), imageIn.type() );
	Mat imageOutY = Mat::zeros( imageIn.size(), imageIn.type() );
	
	
	if(! imageIn.data )                              // Check for invalid input
    {
        	cout <<  "Could not open or find the image" << std::endl ;
        	return -1;
   	}

    Sobel(imageIn, imageOutX, imageIn.depth(), 1 , 0);   
    Sobel(imageIn, imageOutY, imageIn.depth(), 0 , 1);   

	imwrite( argv[2], imageOutX);
	namedWindow("Sobel X", CV_WINDOW_AUTOSIZE);
	imshow( "Sobel X", imageOutY ); 
	namedWindow("Sobel Y", CV_WINDOW_AUTOSIZE);
	imshow( "Sobel Y", imageOutX );              
	waitKey(0);       	

	
	return 0;
}

