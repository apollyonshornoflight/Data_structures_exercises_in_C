#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta;


    // Input
    printf("Type the coefficient a: ");
    scanf("%f", &a);
    printf("Type the coefficient b: ");
    scanf("%f", &b);
    printf("Type the coefficient c: ");
    scanf("%f", &c);

    // Processing
    delta = b*b - 4*a*c;

    if (delta == 0) {
        printf("This function only has one real root.\n");
    }
    else if (delta > 0) {
        printf("This function has two real roots.\n");
    }
    else {
        printf("This function has no real roots.\n");
    }

    return 0;
}


/**
 * 20. Write a program to calculate the real roots of a quadratic equation
 *     (ax^2 + bx + c) given that its coefficients are provided by the user.
 *     Use a float variable named `delta` to store the result of b^2 - 4ac.
 *     Inform the user whether the equation has 2, 1, or no real roots.
 */