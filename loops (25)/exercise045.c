#include <stdio.h>

int main()
{
    int R;
    float area, pi = 3.1415926536;
    char condition;
    

    

    // Processing 
    while (1) {
        printf("Type the value of R: ");
        scanf("%d", &R);

        area = pi * R*R;

        printf("The area of this circle is %.2f\n",area);

        printf("Do you wish to continue (Y-N)? ");
        scanf(" %c", &condition);

        if (condition == 'N') {
            break;
        }

    }


    
    return 0;
}


/**
 * 45. Write a program where a variable containing the value of pi (with 10
 *     decimal places) is declared, and read the radius R of a circle. The
 *     algorithm should calculate and display the area of the circle. This is
 *     repeated several times until the user answers 'N' (no) to the question:
 *     "Deseja calcular mais áreas: Sim (S) ou Não (N)?".
 */