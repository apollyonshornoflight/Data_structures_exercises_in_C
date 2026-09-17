#include <stdio.h>

int main()
{
    int x,y;

    // Input
    printf("Insert the value of X: ");
    scanf("%d", &x);


    // Processing
    if (x <= 1) {
        y = 1;
        printf("The F(%d) is %d\n", x,y);

    } else if ((x > 1) && (x <= 2)) {
        y = x;
        printf("The F(%d) is %d\n", x,y);
    
    } else if ((x > 2) && (x <= 3)) {
        y = x*x;
        printf("The F(%d) is %d\n", x,y);
    
    } else if (x > 3) {
        y = x*x*x;
        printf("The F(%d) is %d\n", x,y);

    }

    return 0;
}


/**
 * 19. Create a program that receives a value `x` and displays the value of
 *     f(x) as defined below:
 *
 *              /  1,       if x <= 1
 *             |   x,       if 1 < x <= 2
 *     f(x) = <   x^2,     if 2 < x <= 3
 *             |   x^3,     if x > 3
 *              \
 */