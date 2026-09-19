#include <stdio.h>

void change_values(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{
    int a, b;
    


    // Input
    printf("Type the value for A: ");
    scanf("%d", &a);
    printf("Type the value for B: ");
    scanf("%d", &b);
    printf("For now... the value of A is %d and the value of B is %d, but...\n",a,b);


    // Processing 


    change_values(&a,&b);

    //Output
    printf("Now the current value of A is %d and the value of B is %d!!!!.\n", a, b);

    return 0;
}


/**
 * 32. Implement a function with the signature
 *     `void trocar_valores(int *a, int *b)` that swaps the values of two
 *     integer variables pointed to by the pointers `a` and `b`. Next, implement
 *     the main program to read two integers provided via keyboard, call the
 *     `trocar_valores` function to swap the values, and print the new values
 *     of the variables.
 */