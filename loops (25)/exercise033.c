#include <stdio.h>


int main()
{
    int a, b;
    


    // Input
    printf("Type the value for A: ");
    scanf("%d", &a);
    printf("Type the value for B: ");
    scanf("%d", &b);


    // Processing 
    for (int i = 0; i <= b; i++)
    {
        if ((i >= a) && (i <= b)){
            printf("\n%d is between %d and %d..",i,a,b);
        }
        if ((i >= a) && (i <= b) && (i % 2 != 0)){
            printf(" it is also an odd number ");
        }
        if ((i >= a) && (i <= b) && (i % 2 != 0) && (i % 3 == 0)){
            printf("and not only that, %d is a multiple of 3!\n", i);
        }
    }
    

    return 0;
}


/**
 * 33. Develop a program that reads two values a and b (a <= b) and shows
 *     the following results: (i) all values in [a, b]; (ii) all odd values
 *     in [a, b]; (iii) all odd values in [a, b] that are multiples of 3.
 */