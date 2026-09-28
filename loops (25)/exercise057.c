#include <stdio.h>
#include <math.h>

//Function
int is_it_prime(int num){
    int num_square_root;
    num_square_root = floor(sqrt(num));

    if (num == 1) {
        return 0;
    }
    for (int i = 2; i <= num_square_root; i++)
    {
        if ((num % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n,sum;

    //Input
    printf("Type a non negative value for n: ");
    scanf("%d", &n);

    //Processing
    if (is_it_prime(n) == 0) {
        printf("The number %d is not prime\n",n);

        return 0;
    }
    
    //Output
    printf("The number %d is a prime!\n",n);

    return 0;
}


/**
 * 57. A prime number is a positive integer greater than 1 that has no divisors
 *     other than 1 and itself. Given a positive integer, check whether it is a
 *     prime number. Implement a function with signature `int eh_primo(int numero)`
 *     that receives a positive integer as a parameter and returns 1 if the number
 *     is prime, or 0 otherwise.
 */