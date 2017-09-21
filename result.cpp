 #include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>

  
#define SEUIL 70


using namespace std;
using namespace cv;



int main(int argc, char** argv){

    //On ouvre l'image en niveau de gris
    Mat imageIn = imread( argv[1], CV_LOAD_IMAGE_GRAYSCALE );
    Mat imageTrue = imread( argv[2], CV_LOAD_IMAGE_GRAYSCALE );
        
    //Verification que l'image existe
    if(! imageIn.data || ! imageTrue.data )                             
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }

    // Passe Bas
    // laplacien
    // Contours orientés
    // Filtrage median

    waitKey(0);         
    
    return 0;
}

