 #include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

  
#define SEUIL 90


using namespace std;
using namespace cv;



int main(int argc, char** argv){

	//On ouvre l'image en niveau de gris
	Mat imageFake = imread( argv[1], CV_LOAD_IMAGE_GRAYSCALE );
	Mat imageTrue = imread( argv[2], CV_LOAD_IMAGE_GRAYSCALE );
		
	int tp = 0,fp = 0, fn = 0;
	float p, r;
	//Verification que l'image existe
	if(! imageFake.data || ! imageTrue.data )                             
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
   	}

   	// On calcule le nombre de vrais pixels de fissure
   	for( int y = 0; y < imageTrue.rows; y++ ) {
        for( int x = 0; x < imageTrue.cols; x++ ) {
        	if (imageTrue.at<uchar>(y,x) == 255)
            	tp++;
        }
    }

	// On calcule le nombre de faux pixels de fissure
    for( int y = 0; y < imageFake.rows; y++ ) {
        for( int x = 0; x < imageFake.cols; x++ ) {
        	if (imageFake.at<uchar>(y,x) == 255)
            	fp++;
        }
    }

    p = 100.*tp/(tp+fp);
    fn = fp - tp;
    r = 100.*tp/(tp+fn);
 
 	printf("Precision : %f%\n", p);
 	printf("Recall : %f%\n", r);        

	waitKey(0);       	
	
	return 0;
}

