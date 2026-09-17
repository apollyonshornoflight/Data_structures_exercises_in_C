#include <stdio.h>

int main()
{
    int num;
    


    // Input
    printf("Type the number: ");
    scanf("%d", &num);

    // Processing 
    if (num % 2 != 0) {
        printf("The number %d is odd.\n", num);
    } else {
        printf("The number %d is even.\n", num);
    }

    return 0;
}


/**
 * 9. Write a program that reads an integer greater than zero and informs
 *    whether it is even or odd.
 */