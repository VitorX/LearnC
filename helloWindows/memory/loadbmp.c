#include <windows.h>
#include <stdio.h>


int main()
{
	 // Load the image
    HBITMAP hBitmap = (HBITMAP)LoadImage(
        NULL,               // Handle to the module containing the image      
	"C:\\Users\\v-feixue1\\Documents\\dev\\Edge\\WebView2Samples\\SampleApps\\WebView2APISample\\AppBackground.bmp",
        IMAGE_BITMAP,       // Type of image to load
        0,                  // Desired width (0 to use the actual width)
        0,                  // Desired height (0 to use the actual height)
        LR_LOADFROMFILE     // Load the image from a file
    );

    if(!hBitmap)
	    printf("Error code:%d",GetLastError());
    else
	    printf("load image ok!");
}
