#include <stdio.h>

int main()
{
    int size, an, q, power;


    //Input
    printf("Type the size: ");
    scanf("%d", &size);

    printf("Type the first term: ");
    scanf("%d", &an);

    printf("Type the commun ratio: ");
    scanf("%d", &q);

    // Processing 
    for (int i = 1; i < size; i++)
    {
        an *= q;
    }
    

    //Output
    printf("The %d-th number of this geometric progression is %d\n", size, an);

    return 0;
}


/**
 * 50. Write a program that reads the size (n), first term (a1), and common
 *     ratio (q) of a Geometric Progression (GP). Your program should calculate
 *     and print the n-th term of this GP using the formula an = a1 * q^(n-1).
 */