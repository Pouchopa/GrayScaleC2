#include <cv.h>
#include <highgui.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>

using namespace cv;

int main( int argc, char** argv )
{
	 char* imageName = argv[1];
	 char* imageName2 = argv[2];

	 Mat image;
	 image = imread( imageName, 1 );
	 Mat image2;
	 image2 = imread( imageName2, 1 );

	 if( argc != 3 || !image.data || !image2.data)
	 {
	   printf( " No image data \n " );
	   return -1;
	 }

	 Mat gray_image;
	 Mat gray_image2;
	 cvtColor( image, gray_image, CV_BGR2GRAY );
	 cvtColor( image2, gray_image2, CV_BGR2GRAY );

	 imwrite( "Gray_Image.jpg", gray_image );
	 imwrite( "Gray_Image2.jpg", gray_image2 );

	 return 0;
}