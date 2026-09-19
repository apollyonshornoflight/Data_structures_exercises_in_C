#include <stdio.h>

int binomial_coefficient(int n, int k)
{   
    if ((k == 0)||(n == k)) {
        return 1;
    } return binomial_coefficient((n-1),(k-1)) + binomial_coefficient((n-1),k);
}

int main()
{
    int n,k, b_coef;


    // Input
    printf("Type the wanted value for N: ");
    scanf("%d", &n);
    printf("Type the wanted value for K: ");
    scanf("%d", &k);


    // Processing
    b_coef = binomial_coefficient(n,k);

    //Output
    printf("The binomial coefficient of %d chooses %d is %d.\n", n,k,b_coef);

    return 0;
}


/**
 * 27. Implement a function in C language called `coeficiente_binomial` that
 * calculates the binomial coefficient (n choose k) using a recursive approach.
 * The binomial coefficient is given by:
 *
 * (n choose k) = ((n - 1) choose (k - 1)) + ((n - 1) choose k)
 *
 * with (n choose 0) = (n choose n) = 1.
 * The program should receive two integers, n and k, provided by the user,
 * and print the corresponding binomial coefficient.
 */