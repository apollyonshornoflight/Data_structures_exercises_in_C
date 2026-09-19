#include <stdio.h>

int main()
{
    int num, *ptr_num;
    


    // Input
    printf("Type a number: ");
    scanf("%d", &num);

    // Processing 
    ptr_num = &num;

    //Output
    printf("The size of the pointer is %zu bytes, and the size of the variable pointed by the pointer is %zu bytes.\n",sizeof(ptr_num),sizeof(*ptr_num));

    return 0;
}


/**
 * 30. Write a program in C language that performs the following:
 *
 * (a) Declare an integer variable.
 * (b) Declare a pointer that points to the integer variable.
 * (c) Use the sizeof operator to print the size of the pointer.
 * (d) Use the sizeof operator to print the size of the variable pointed to
 *     by the pointer.
 */