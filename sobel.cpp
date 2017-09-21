 #include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

  
#define SEUIL 70


using namespace std;
using namespace cv;



int main(int argc, char** argv){

	//On ouvre l'image en niveau de gris
	Mat imageIn = imread( argv[1], CV_LOAD_IMAGE_GRAYSCALE );
		
	//Verification que l'image existe
	if(! imageIn.data )                             
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
   	}

	//Affichage de l'image original
	namedWindow( "Original image", CV_WINDOW_AUTOSIZE );
	imshow( "Original image", imageIn ); 

	//Declaration variables    
	Mat imageOutX, imageOutY, imageOut;

	//Application d'un flou gaussien pour limiter le bruit
	GaussianBlur( imageIn, imageIn, Size(5,5), 0, 0, BORDER_DEFAULT );

	//Application d'un seuil de gris pour lisser
	threshold(imageIn, imageIn, SEUIL, 255, THRESH_BINARY);

	//Filtre de Sobel sur X
    Sobel(imageIn, imageOutX, CV_32F, 1 , 0 , 3, 1, 0, BORDER_DEFAULT); 

    //Filtre de Sobel sur Y
    Sobel(imageIn, imageOutY, CV_32F, 0 , 1 , 3, 1, 0, BORDER_DEFAULT);  

    //Addition des 2 matrices pour calculer la magnitude du gradient
    addWeighted( imageOutX, 0.5, imageOutY, 0.5, 0, imageOut ); 

    //Creation du fichier et affichage de l'image
	imwrite( argv[2], imageOut);
	namedWindow("Gradient Sobel", CV_WINDOW_AUTOSIZE);
	imshow( "Gradient Sobel", imageOut );        

	waitKey(0);       	
	
	return 0;
}

