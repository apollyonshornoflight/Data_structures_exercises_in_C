#include <stdio.h>


int main()
{
    int zeros, ones, num;
    
    //Input
    printf("Insert a number: ");
    scanf("%d",&num);

    // Processing 
    while (num >= 0) {
        if (num == 0){
            zeros++;
        } if (num == 1){
            ones++;
        } 
        printf("Insert a number (type a negativa to end): ");
        scanf("%d",&num);
    } printf("You typed zero %d times and type one %d times.\n",zeros,ones);
    return 0;
}


/**
 * 42. Create a program that reads a sequence composed of 0 and 1 digits. Upon
 *     completing the input, display the count of zeros followed by the count
 *     of ones present in the sequence. The input sequence will terminate when
 *     a negative number is entered.
 */