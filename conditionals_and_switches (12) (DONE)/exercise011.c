#include <stdio.h>

int main()
{
    double sales, salary;

    // Input
    printf("Type how much you sold: ");
    scanf("%lf", &sales);

    // Processing
    if (sales >= 1000) {
         salary = 200 + (sales * 0.09) + 800;
    } else{
        salary = 200 + (sales * 0.09);
    }

    //Output
    printf("Your salary is: R$ %.2lf \n", salary);

    return 0;
}


/**
 * 11. A large chemical company pays its salespeople on commission. Salespeople
 *     receive R$ 200.00 per week plus 9% of their gross sales for that week.
 *     For example, a salesperson who sells R$ 500.00 worth of products in a
 *     week receives R$ 200.00 plus 9% of R$ 500.00, totaling R$ 245.00.
 *     If sales exceed R$ 1000.00, the salesperson also receives a bonus of
 *     R$ 800.00. Write a program that receives a salesperson's gross sales from
 *     the past week and outputs the total amount to be paid to the employee.
 */