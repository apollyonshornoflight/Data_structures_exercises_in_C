#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, mean;

    // Input
    printf("Type the grade of the first test: ");
    scanf("%d", &grade1);
    printf("Type the grade of the second test: ");
    scanf("%d", &grade2);
    printf("Type the grade of the third test: ");
    scanf("%d", &grade3);

    // Processing
    mean = (grade1 + grade2 + grade3) / 3;

    // Output
    printf("%d is the mean grade.\n", mean);

    return 0;
}


/**
 * 3. Write a program that reads three grades and prints their arithmetic mean
 *    on the screen.
 */