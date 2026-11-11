#include <stdio.h>

int main(){

    int size,average,sum = 0;
    //Input
    printf("Type the array size: ");
    scanf("%d",&size);

    //Processing
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Type the value %d: ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    } average = sum / size;
    
    //Output
    printf("\nThe average of these numbers is %d\n", average);

    return 0;
}


/**
 * 58. Implement a program that reads the elements of an array of real values
 *     and displays the sum and average of its values on the screen.
 */