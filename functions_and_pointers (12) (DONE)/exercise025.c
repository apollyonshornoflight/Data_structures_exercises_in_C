#include <stdio.h>

int GDC(int x, int y)
{   
    if (x % y == 0) {
        return y;
    } return GDC(y, x % y);
}

int main()
{
    int x,y,gdc;


    // Input
    printf("Type the wanted value for X: ");
    scanf("%d", &x);
    printf("Type the wanted value for Y: ");
    scanf("%d", &y);



    // Processing
    gdc = GDC(x,y);

    //Output
    printf("The greatest common divisor for %d and %d is %d.\n", x,y,gdc);

    return 0;
}


/**
 * 25. Implement a C program that calculates the greatest common divisor (GCD)
 *     of two positive integers read from the keyboard using the following
 *     recursive formula:
 *
 *                 /  y,                    if x mod y = 0
 *     GCD(x, y) = <
 *                 \  GCD(y, x mod y),      otherwise
 *
 *     The GCD must be calculated by a recursive function.
 */