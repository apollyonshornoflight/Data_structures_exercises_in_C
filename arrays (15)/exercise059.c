#include <stdio.h>

int main(){

    int n,sum = 0;
    //Input
    printf("Type the array size: ");
    scanf("%d",&n);

    //Processing
    int v[n],s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Type the value %d: ",i);
        scanf("%d",&v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        s[i] = sum;
    } 
    //Output
    printf("\nThe first array is: ");

    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("And the second one is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", s[i]);
    }
    printf("\n");
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
