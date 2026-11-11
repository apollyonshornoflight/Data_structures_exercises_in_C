#include <stdio.h>
int fatorial_div(int n){
    if (n == 1){
        return n;
    }
    else {
        return n * fatorial_div(n-1);
    }
}
int main()
{
    int n,fat,m = 0;


    //Input
    printf("Type a positive integer bigger than 1: ");
    scanf("%d", &n);

    // Processing 
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0){
            if (i > m){
                m = i;
            }
        }
        if ((n / i) > m && (n / i) < n){
            m = n/i;
        }
    }
    fat = fatorial_div(m);

    

    //Output
    printf("The largest positive divisor of %d is %d.\n", n, m);
    printf("The factorial of %d is %d.\n", m, fat);
    return 0;
}


/**
 * 55. Implement a function with the signature `int fatorial_div(int n)` that
 *     returns the factorial value of m, where m is the largest positive divisor
 *     of n, m < n.
 */