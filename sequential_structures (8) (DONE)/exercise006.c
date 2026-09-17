#include <stdio.h>

int main()
{
    float size, speed, time_sec, time_min;


    // Input
    printf("Type the file size in MB: ");
    scanf("%f", &size);
    printf("Type the download speed in Mbps: ");
    scanf("%f", &speed);

    // Processing
    time_sec = size / (speed / 8);
    time_min = time_sec / 60;

    // Output
    printf("%.2f would take %.2f minutes to be installed with %.2f Mbps.\n", size, time_min, speed);

    return 0;
}


/**
 * 6. Write a program that asks for a file size for download (in MB) and the
 *    speed of an Internet link (in Mbps). Calculate and report the approximate
 *    download time for the file using this link IN MINUTES.
 */