#include <stdio.h>

int square_r(int x){

    x = x*x;
    return x;
}

int main()
{
    int x, square;


    // Input
    printf("Insert the value of x: ");
    scanf("%d", &x);

    // Processing 
    square = square_r(x);

    //Output
    printf("The square of %d is %d.\n", x, square);

    return 0;
}


/**
 * 21. Write a program in C language that uses a function called `quadrado` to
 *     calculate the square of an integer. The `quadrado` function should
 *     receive an integer argument `x` and return the value of `x` squared.
 *     The main program should read an integer provided via keyboard, call the
 *     `quadrado` function to calculate the square, and print the result.
 *
 *     Reference code snippet:
 *
 *     #include <stdio.h>
 *
 *     int quadrado(int x) {
 *         ...
 *     }
 *
 *     int main() {
 *         ...
 *         return 0;
 *     }
 */