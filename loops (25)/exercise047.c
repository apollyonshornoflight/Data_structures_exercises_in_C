#include <stdio.h>

int main()
{
    int n,x,addition, power;

    //Input
    printf("Insert the value of x: ");
    scanf("%d", &x);
    printf("Insert the value of n: ");
    scanf("%d", &n);

    

    // Processing 
    power = 1;

    for (int i = 0; i < n; i++)
    {   
        addition = 0;

        for (int i = 0; i < x; i++)
        {
            addition += power;
        }

        power = addition;
        
    }

    //Output
    printf("The value of %d times %d is %d.\n",x,n,power);
    return 0;
}


/**
 * 47. Write a program that reads a real number x and an integer n and prints
 *     x^n. Use only the `for` loop and the addition arithmetic operation (see
 *     previous question).
 */