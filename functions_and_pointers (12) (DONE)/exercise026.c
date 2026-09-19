#include <stdio.h>

int GDC(int x, int y)
{   
    if (x % y == 0) {
        return y;
    } return GDC(y, x % y);
}

int main()
{
    int x,y,z,gdc;


    // Input
    printf("Type the wanted value for X: ");
    scanf("%d", &x);
    printf("Type the wanted value for Y: ");
    scanf("%d", &y);
    printf("Type the wanted value for Z: ");
    scanf("%d", &z);



    // Processing
    gdc = GDC(GDC(x,y),z);

    //Output
    printf("The greatest common divisor for %d, %d and %d is %d.\n", x,y,z,gdc);

    return 0;
}


/**
 * 26. The greatest common divisor of three positive integers, GCD(x, y, z),
 *     can be calculated as GCD(GCD(x, y), z). Write a program that reads three
 *     integers provided via keyboard and prints their GCD using the GCD
 *     function presented in the text.
 */