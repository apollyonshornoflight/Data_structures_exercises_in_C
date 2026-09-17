#include <stdio.h>

int main()
{
    float salary, max_credits,installment;

    // Input
    printf("Type your salary: ");
    scanf("%f", &salary);
    printf("Type the value of the wanted installment: ");
    scanf("%f", &installment);
    // Processing
    if (installment >= salary * 0.3) {
         printf("The solicited installment cannot be granted.\n");
    } else{
        printf("The solicited installment is valid and can be granted.\n");
    }


    return 0;
}


/**
 * 10. The City Hall of Serra has opened a credit line for statutory employees.
 *     The maximum monthly installment amount cannot exceed 30% of the gross
 *     salary. Write a program that reads the gross salary and the requested
 *     installment amount, and informs whether or not the loan can be granted.
 */