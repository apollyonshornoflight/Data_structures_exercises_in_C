#include <stdio.h>
#include <math.h>

int main()
{
    int sequence, position, num_pos;
    double num_double;


    // Input
    printf("Write a sequence of 5 numbers: ");
    scanf("%d", &sequence);
    printf("Inform the position you want to obtain: ");
    scanf("%d", &position);

    // Processing 
    num_double = sequence % (int)(pow(10, (5 - position)));
    num_pos = (int)(num_double) / (int)(pow(10, (4 - position)));

    // Output
    printf("%d is the number solicited from the sequence.\n", num_pos);

    return 0;
}


/**
 * 8. Write a C program that allows the user to extract a specific digit from
 *    a 4-digit sequence. The program should prompt the user for the digit
 *    sequence and the position x of the digit they wish to extract (0 to 4),
 *    and then display the corresponding digit.
 *
 *    Hint: Remember that when dividing an integer by 10, you "remove" the
 *    last digit. And when calculating the remainder of dividing this number
 *    by 10, you get the last digit isolated.
 */