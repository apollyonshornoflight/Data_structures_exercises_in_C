#include <stdio.h>

int main()
{
    int x, y;


    // Input
    printf("Insert the value of x: ");
    scanf("%d", &x);
    printf("Insert the value of y: ");
    scanf("%d", &y);
    printf("For now... the value of X is %d and the value of Y is %d, but...\n", x, y);
    // Processing (ZE FAMOUS XOR SWAP OMG!!!!)
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    // Output
    printf("Now the current value of X is %d and the value of Y is %d!!!!.\n", x, y);

    return 0;
}


/**
 * 7. Write a program that reads two integer values, storing them in variables
 *    x and y. At the end of execution, the values of these variables must be
 *    swapped. Restriction: you must not use a temporary variable, meaning
 *    only two variables can be used.
 */