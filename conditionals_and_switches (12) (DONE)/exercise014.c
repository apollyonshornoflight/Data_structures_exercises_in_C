#include <stdio.h>

int main()
{
    int w,h,x,y;

    // Input
    printf("Insert the length of the image: ");
    scanf("%d", &w);
    printf("Insert the height of the image: ");
    scanf("%d", &h);
    printf("Inform the x of the pixel: ");
    scanf("%d", &x);
    printf("Insert the y of the pixel: ");
    scanf("%d", &y);
    // Processing
    if ((w >= x) && (h >= y) && (x >= 0) && (y >= 0)) {
         printf("This pixel really exists in this image!\n");
    } else {
        printf("This pixel is non existent, at least on this image.\n");
    } 

    return 0;
}


/**
 * 14. A digital image has a width `w` and a height `h`. A pixel in this image
 *     is associated with a position (x, y) on the image plane. Write a program
 *     that receives w, h, x, and y, and informs whether it corresponds to a
 *     pixel of the specified image.
 */