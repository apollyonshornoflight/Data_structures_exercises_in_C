#include <stdio.h>


int main()
{
    int n,x,num;
    
    //Input
    printf("Insert the value of n: ");
    scanf("%d", &n);
    printf("Insert the value of x: ");
    scanf("%d", &x);
    printf("Write the sequence of %d numbers: ",n);

    // Processing 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num);
        if (num == x){
            printf("%d is found on position %d.\n",x,i);
            break;
        }
    } printf("%d does not exists at this sequence",x);
    
    
    return 0;
}


/**
 * 43. Write a program that reads a value n and then a number x. Next, read n
 *     values and finally print at which position x appears. If x is not in
 *     the sequence, print the message "Não".
 */