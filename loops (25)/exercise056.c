#include <stdio.h>
#include <math.h>

//Function
int sum_of_digits(int n){
    int sum;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n,sum;

    //Input
    printf("Type a non negative value for n: ");
    scanf("%d", &n);

    //Processing
    sum = sum_of_digits(n);
    
    //Output
    printf("The sum of the digits of the number %d is %d\n", n,sum);



    

    return 0;
}



/**
 * 56. Implement a function with signature `int soma_dos_digitos(int n)` that
 *     calculates and returns the sum of the digits of a non-negative integer `n`.
 */