#include <stdio.h>


int main()
{
    int sum = 0, mean,n, count = 0;
    
    //Input
    printf("Type a positive number: ");
    scanf("%d",&n);


    // Processing 
    while (n > 0){
        count++;
        sum += n;
        printf("Type a number (type a negative one to stop): ");
        scanf("%d",&n);
    } mean = sum / count;
    printf("%d is the mean value of all those numbers\n", mean);

    return 0;
}


/**
 * 37. Write a program that calculates the arithmetic mean of several positive
 *     integers entered by the user. The reading process stops when a negative
 *     value is entered.
 */