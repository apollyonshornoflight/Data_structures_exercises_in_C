#include <stdio.h>

int main()
{
    int big_sal = 0, avg_c = 0, avg_s = 0, sum_c = 0, sum_s = 0, total = 1, c, s, percent;
    float upto_100 = 0;
    char condition;


    // Processing 
    while(condition != 'N'){

        printf("How many childs do you have? ");
        scanf("%d", &c);

        sum_c += c;
        avg_c = sum_c / total;

        printf("Type your salary: ");
        scanf("%d", &s);

        if (s > big_sal) {
            big_sal = s;
        }
        if (s <= 100) {
            upto_100++;
        }

        sum_s += s;
        avg_s = sum_s / total;

        total++;

        printf("Do you wish to continue to gather more data (Y-N)? ");
        scanf(" %c",&condition);
    }

    //Output
    printf("\nThe average salary is R$%.2d\n",avg_s);
    printf("The average number of children is %d per home\n",avg_c);
    printf("The highest salary sis R$%.2d\n",big_sal);
    percent = (upto_100/(total - 1))  * 100;
    printf("The percentage of people with the salary above R$100.00 is %d%%\n",percent);


    return 0;
}


/**
 * 49. The city hall of a town conducted a survey among its inhabitants,
 *     collecting data on salary and number of children. The city hall wishes
 *     to know:
 *
 *     (a) Population's average salary.
 *     (b) Average number of children.
 *     (c) Highest salary.
 *     (d) Percentage of people with salary up to R$ 100.00.
 *
 *     Write a program that collects this information until the user answers 'N'
 *     (no) to the question: "Deseja continuar coletando informações: Sim (S) ou
 *     Não (N)?".
 */