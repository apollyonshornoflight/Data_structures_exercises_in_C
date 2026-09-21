#include <stdio.h>


int main()
{
    int n;
    


    // Input
    printf("Type the quantity of numbers you want: ");
    scanf("%d", &n);;


    // Processing 
    for (int i = 1; i <= n; i++)
    {
        printf("%d is the triple of %d\n", i*3,i);
    }
    

    return 0;
}


/**
 * 34. Draft a program that reads an input number (n) indicating the quantity
 *     of numbers to be read. Next, read n numbers (according to the value
 *     previously provided) and print the triple of each one.
 */