 #include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

  
#define SEUIL 70


using namespace std;
using namespace cv;



int main(int argc, char** argv){

	//On ouvre l'image en niveau de gris
	Mat imageFake = imread( argv[1], CV_LOAD_IMAGE_GRAYSCALE );
	Mat imageTrue = imread( argv[2], CV_LOAD_IMAGE_GRAYSCALE );
		
	//Verification que l'image existe
	if(! imageFake.data || ! imageTrue.data)                             
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
   	}

	//Declaration variables    
	Mat imageOutX, imageOutY, imageOut = imageFake;
	int tp = 0,fp = 0, fn = 0, maxP = 0;
	float p, r;

	for (int i=0; i < 256; i++){
		//Application d'un flou gaussien pour limiter le bruit
		GaussianBlur( imageFake, imageFake, Size(5,5), 0, 0, BORDER_DEFAULT );

		//Application d'un seuil de gris pour lisser
		threshold(imageFake, imageFake, i, 255, THRESH_BINARY);

		//Filtre de Sobel sur X
	    Sobel(imageFake, imageOutX, CV_32F, 1 , 0 , 3, 1, 0, BORDER_DEFAULT); 

	    //Filtre de Sobel sur Y
	    Sobel(imageFake, imageOutY, CV_32F, 0 , 1 , 3, 1, 0, BORDER_DEFAULT);  

	    //Addition des 2 matrices pour calculer la magnitude du gradient
	    addWeighted( imageOutX, 0.5, imageOutY, 0.5, 0, imageOut ); 

	    //Creation du fichier
		imageFake = imageOut;

		tp = 1;
		fp = 1;
		fn = 1;

	   	for( int y = 0; y < imageTrue.rows; y++ ) {
	        for( int x = 0; x < imageTrue.cols; x++ ) {
	        	if (imageFake.at<uchar>(y,x) == 255 && imageTrue.at<uchar>(y,x) == 255)
	            	tp++;
	        	if (imageFake.at<uchar>(y,x) == 255 && imageTrue.at<uchar>(y,x) == 0)
	            	fp++;
	        	if (imageTrue.at<uchar>(y,x) == 255 && imageFake.at<uchar>(y,x) == 0)
	            	fn++;
	        }
	    }
	    
	    p = 100.*tp/(tp+fp);
    	r = 100.*tp/(tp+fn);

    	if (p > maxP){
    		maxP = p;
    		imwrite(argv[3], imageOut); 
		 	printf("Precision : %f%\n", p);
    	}		
	}  

	waitKey(0);       	
	
	return 0;
}

