#include <stdio.h>

int main()
{
    int n, result, true_n;

    //Input
    printf("Insert the value of n: ");
    scanf("%d", &n);

    // Processing 
    true_n = n;
    result = n;

    while(n != 1){

        n -= 1;
        result = result * n;

    }

    //Output
    printf("The result of %d! is %d.\n",true_n,result);
    return 0;
}


/**
 * 48. Write a program that calculates n!. Use the `while` statement as the
 *     repetition structure.
 */