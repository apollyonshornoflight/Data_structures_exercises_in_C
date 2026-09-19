#include <stdio.h>

int main()
{
    int num, og_num, *ptr_num;
    


    // Input
    printf("Type a number: ");
    scanf("%d", &num);

    // Processing 
    og_num = num;
    ptr_num = &num;
    *ptr_num = *ptr_num * 2;

    //Output
    printf("The original value of the number (%d) has now become %d.\n",og_num,num);

    return 0;
}


/**
 * 29. Write a program in C language that performs the following:
 *
 * (a) Read an integer from the user.
 * (b) Declare a pointer that points to the integer variable read.
 * (c) Multiply the value of the variable by 2, using the pointer.
 * (d) Print the original value and the value resulting from the multiplication.
 */