#include <stdio.h>

int calcula_resto(int a, int b) {
    while (a >= b || a != 0) {
        a -= b;
    }
    return a;

    }
int main()
    {
    int a, b, resto;
 
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
 
    resto = calcula_resto(a, b);
 
    printf("The remainder of dividing %d by %d is: %d\n", a, b, resto);
 
    return 0;
    }


/**
 * 54. Complete the function `calcula_resto` which receives two positive integers
 *     a and b, and returns the remainder of the (integer) division of a by b.
 *     You cannot use the % operator. Hint: use successive subtractions.
 *
 *     Reference code snippet:
 *
 *     #include <stdio.h>
 *
 *     // Calculates the remainder of division of a by b
 *     int calcula_resto(int a, int b)
 *     {
 *         ...
 *     }
 *
 *     int main()
 *     {
 *         int a, b, resto;
 *
 *         printf("Enter two positive integers: ");
 *         scanf("%d %d", &a, &b);
 *
 *         resto = calcula_resto(a, b);
 *
 *         printf("The remainder of dividing %d by %d is: %d\n", a, b, resto);
 *
 *         return 0;
 *     }
 */