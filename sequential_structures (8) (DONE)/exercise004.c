#include <stdio.h>

int main()
{
    float salary, max_credits;

    // Input
    printf("Type your salary: ");
    scanf("%f", &salary);

    // Processing
    max_credits = salary * 0.3;

    // Output
    printf("R$%.2f is the maximum you can obtain in credits. \n", max_credits);

    return 0;
}


/**
 * 4. The City Hall of Serra has opened a credit line for statutory employees.
 *    The maximum monthly installment amount cannot exceed 30% of the gross
 *    salary (salary plus benefits without tax deductions). Write a program
 *    that reads a person's gross salary and prints the maximum possible
 *    installment amount for this employee.
 */