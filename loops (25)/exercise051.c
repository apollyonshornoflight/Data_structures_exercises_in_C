#include <stdio.h>

int main()
{
    int countp = 0,sum, i, n = 1;



    // Processing 
    while (countp != 5) {
        n++;
        sum = 0;
        i = 1;

        while (i * i <= n) {
            if (n % i == 0){
                sum += i;

                if (i != 1 && i != n / i) {
                    sum += n / i;
                }
            }
            i++;
        }
        if (sum == n){
            printf("%d ", n);
            countp++;
        }
    }

    return 0;
}


/**
 * 51. A perfect number is one that is equal to the sum of its divisors
 *     (e.g., 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14). Write a program that
 *     generates and writes the first five perfect numbers.
 */