#include <stdio.h>


int main()
{
    int n,j, i = 0;
    


    // Input
    printf("Type the number of times you want: ");
    scanf("%d", &n);;


    // Processing 
    while (i < n){
        printf("Type an integer number: ");
        scanf("%d", &j);
        if (j < 0){
            printf("%d is a negative number\n",j);
        } else{
            printf("%d is a positive number\n",j);
        } i++;
    }

    

    return 0;
}


/**
 * 35. Write a program that reads a value n indicating the quantity of values
 *     to read next. One number should be read at a time and your program
 *     should classify it as positive or negative.
 */