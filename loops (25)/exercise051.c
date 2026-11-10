#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,f, lf = INFINITY, lx, ly, x = -5.5,y = -5.5;


    //Input
    printf("Insert the value of a: ");
    scanf("%f", &a);

    printf("Insert the value of b: ");
    scanf("%f", &b);


    // Processing 
    while (x != 5)
    {
        x += 0.5;
        while (y != 5)
        {
            y += 0.5;
            f = ((x*x) / (a*a)) + ((y*y) / (b*b));
            printf("x = %.2f  y = %.2f  f(x, y) = %.2f\n", x,y,f);
            if (f < lf) {
                lx = x;
                ly = y;
                lf = f;
            }
        }
        y = -5.5;
    }

    //Output
    printf("(%.1f, %.1f) is the pair that returns the smaller number at f(x,y)\n", lx, ly);

    return 0;
}


/**
 * 52. Consider the set X = {-5.0, -4.5, -4.0, ..., 4.5, 5.0} subset of R.
 *     Write an algorithm that reads two values a and b and prints a table with
 *     the values of (x, y) in X^2 and f(x, y) (Equation 4). Show the pair (x, y)
 *     that minimizes f(x, y). Print using '*' the parabola f(0, y) (rotated by
 *     90 degrees), y in X.
 *
 *     f(x, y) = (x^2 / a^2) + (y^2 / b^2)
 */