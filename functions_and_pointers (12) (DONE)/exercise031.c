#include <stdio.h>

int sum_with_pointers(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

int main()
{
    int a, b, *a_ptr,*b_ptr, sum;
    


    // Input
    printf("Type the value for a: ");
    scanf("%d", &a);
    printf("Type the value for b: ");
    scanf("%d", &b);


    // Processing 
    a_ptr = &a;
    b_ptr = &b;

    sum = sum_with_pointers(a_ptr,b_ptr);

    //Output
    printf("%d is the sum of %d + %d.\n",sum,a,b);

    return 0;
}


/**
 * 31. Implement a function with the signature
 *     `int soma_com_ponteiros(int *a, int *b)`. The function `soma_com_ponteiros`
 *     should receive two pointers to integers `a` and `b` as arguments, calculate
 *     the sum of the values pointed to by the pointers, and return the result
 *     of the sum. For testing purposes, implement the main program to read two
 *     integers provided via keyboard, call the `soma_com_ponteiros` function to
 *     calculate the sum, and print the result.
 */