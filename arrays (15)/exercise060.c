#include <stdio.h>
#define MAX 100

int main(){

    double average,array[MAX],aboveAV[MAX],sum = 0, value = 0;
    int count = 0, countAV = 0, j = 0;
    //Input


    //Processing
    printf("Enter real values (insert a negative value in order to stop):\n");

    for (int i = 0; value >= 0 && count < 100; i++) 
    {
        scanf("%lf", &value);
        if (value >= 0) {
            array[i] = value;
            count++;
        }
    } 

    for (int i = 0; i < count; i++)
    {
        sum += array[i];
    }
    average = sum/count;
    
    for (int i = 0; i < count; i++) //count how many numbers are above average and populate aboveaverage
    {
        if (array[i] > average) {
            countAV++;
            aboveAV[j] = array[i];
            j++;
        }
    }

    
    
    //Output
    printf("\nThe average of these numbers is %.2lf\n", average);
    printf("Values above average:\n");

    for (int i = 0; i < countAV; i++)
    {
        printf("%.2lf ", aboveAV[i]);
    }
    printf("\n");

    return 0;
}

/**
 * 60. Read a set of real values storing them in an array. Reading should stop
 *     when a negative value is provided as input. Then, calculate the average of
 *     the array and display it on the screen. On the next line, print all elements
 *     greater than the average.
 */
