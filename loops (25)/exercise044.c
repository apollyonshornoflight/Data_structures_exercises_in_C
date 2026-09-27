#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num,x,n,count = 0;
    
    //Input
    printf("Insert the value of x (1-100): ");
    scanf("%d", &x);
    printf("Insert the value of n: ");
    scanf("%d", &n);
    

    // Processing 
    for (int i = 0; i < n; i++)
    {
        num = rand() % 100 + 1;
        if (num == x) {
            count++;
        }
    } 

    //Output
    printf("The number %d was drawn %d times in total\n", x,count);
    
    return 0;
}


/**
 * 44. Write a program that reads an integer value x from 1 to 100 and then
 *     reads a positive integer n. Your algorithm should perform n random draws
 *     of integers in the range 1 to 100 and indicate how many times x was drawn.
 */