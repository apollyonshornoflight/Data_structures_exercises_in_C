#include <stdio.h>


int main()
{
    int sum = 0, mean, n, count = 0;
    
    //Input
    printf("Type a number: ");
    scanf("%d",&n);

    // Processing 
    while (n != 0){
        if (n % 2 == 0){
            count++;
            sum += n;
        }
        printf("Type a number (type 0 to stop): ");
        scanf("%d",&n);
    } mean = sum / count;
    printf("%d is the mean value of all odd numbers you typed.\n", mean);

    return 0;
}

/**
 * 39. Write a program that calculates the average of numbers entered by the
 *     user if they are even. Terminate reading when the user enters 0.
 */