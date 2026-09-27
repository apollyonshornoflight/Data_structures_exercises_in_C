#include <stdio.h>

int main()
{
    int n,x,multiplication;

    //Input
    printf("Insert the value of x: ");
    scanf("%d", &x);
    printf("Insert the value of n: ");
    scanf("%d", &n);

    

    // Processing 
    for (int i = 0; i < n; i++)
    {
        multiplication += x;
    }

    //Output
    printf("The value of %d times %d is %d.\n",x,n,multiplication);
    return 0;
}


/**
 * 46. Write a program that reads a real number x and an integer n and prints
 *     x * n. Use only the `for` loop and the addition arithmetic operation.
 */