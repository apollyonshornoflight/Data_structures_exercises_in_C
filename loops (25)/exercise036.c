#include <stdio.h>


int main()
{
    int n,j, i = 0, neg = 0, pos = 0;
    


    // Input
    printf("Type the number of times you want: ");
    scanf("%d", &n);;


    // Processing 
    while (i < n){
        printf("Type an integer number: ");
        scanf("%d", &j);
        if (j < 0){
            neg++;
        } else{
            pos++;
        } i++;
    } printf("%d is the quantity of positives numbers counted, and %d are from the negative ones",pos,neg);

    

    return 0;
}


/**
 * 36. Write a program that reads n values, one at a time, and counts how many
 *     of these values are negative, printing this information on the screen.
 */