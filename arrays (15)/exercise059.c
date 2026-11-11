#include <stdio.h>

int main(){

    int n,average,sum;
    //Input
    printf("Type the array size: ");
    scanf("%d",&size);

    //Processing
    int v[size];

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
 * 59. Create a program that prompts the user for the size `n` of an integer array
 *     (v) and reads its elements. After population, the program will calculate
 *     a second array (s), where each element is calculated as the cumulative sum
 *     of the corresponding elements from the original array, using the formula:
 *
 *     s[i] = sum(v[k]) for k = 0 to i, for i = 0, 1, ..., n - 1
 *
 *     The program will then display both arrays, allowing the user to visualize
 *     how the values accumulate along the original array.
 */
