#include <stdio.h>

float bonus_calc(int worked_years, float salary)
{
    if ((worked_years > 5) && (salary > 5000)) {
        return salary * 0.10;
    } return salary * 0.05;
}

int main()
{
    float salary, bonus;
    int worked_years;

    // Input
    printf("Insert your current salary: ");
    scanf("%f", &salary);
    printf("How many years did you work in these company?\n");
    scanf("%d", &worked_years);


    // Processing
    bonus = bonus_calc(worked_years, salary);

    //Output
    printf("Your salary of R$%2.f will receive a bonus of R$%2.f, congrats!\n", salary, bonus);

    return 0;
}


/**
 * 23. A company wishes to calculate the salary bonus for its employees based
 *     on the number of years worked and their current salary. The rule for
 *     calculating the bonus is as follows:
 *
 *     - If the employee has worked for more than 5 years at the company and
 *       their current salary is greater than R$ 5000.00, the bonus will be
 *       10% of the salary.
 *
 *     - Otherwise, the bonus will be 5% of the salary.
 *
 *     Implement a function in C language with the signature
 *     `float calcular_bonus(int anos_trabalho, float salario)` to perform this
 *     calculation. Write a program that captures the number of years worked
 *     and the current salary provided via keyboard, calls the `calcular_bonus`
 *     function to calculate the bonus, and prints the calculated bonus value.
 */