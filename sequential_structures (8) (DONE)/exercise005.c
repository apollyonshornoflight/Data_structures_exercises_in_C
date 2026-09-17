#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, root1, root2;


    // Input
    printf("Type coefficient a: ");
    scanf("%f", &a);
    printf("Type coefficient b: ");
    scanf("%f", &b);
    printf("Type coefficient c: ");
    scanf("%f", &c);

    // Processing
    delta = b*b - 4*a*c;
    root1 = (-b + sqrt(delta))/ (2 * a);
    root2 = (-b - sqrt(delta))/ (2 * a);

    // Output
    printf("%.2f is the first root of this function and %.2f is the second one.\n", root1, root2);

    return 0;
}


/**
 * 5. Write a program to calculate the real roots of a quadratic equation
 *    (ax^2 + bx + c) given that its coefficients are provided by the user.
 *    Use a float variable named `delta` to store the result of b^2 - 4ac.
 */