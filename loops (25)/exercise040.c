#include <stdio.h>


int main()
{
    int large = 0, small = 0, q, num;
    
    //Input
    printf("Type the amount of times you want to input: ");
    scanf("%d",&q);

    // Processing 
    for (int i = 0; i < q; i++)
    {
        printf("Type a number: ");
        scanf("%d", &num);
        if (num > large) {
            large = num;
        }
        if (num < small) {
            small = num;
        }
    }
    //Output
    printf("%d is the smallest number you typed, while %d is the largest.\n", small,large);

    return 0;
}

/**
 * 40. Write a program that reads n values and finds the largest and smallest
 *     among them. Display the result.
 */