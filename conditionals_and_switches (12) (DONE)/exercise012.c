#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, mean_g;

    // Input
    printf("Type the first student grade: ");
    scanf("%d", &grade1);
    printf("Type the second student grade: ");
    scanf("%d", &grade2);
    printf("Type the third student grade: ");
    scanf("%d", &grade3);

    // Processing
    mean_g = (grade1 + grade2 + grade3)/3;

    if (mean_g >= 7) {
         printf("Approved, %d was the mean of their grades.\n", mean_g);
    } else if ((mean_g < 7) && (mean_g >= 5)){
        printf("Recovery, %d was the mean of their grades.\n", mean_g);
    } else {
        printf("Failed %d was the mean of their grades.\n", mean_g);
    }

    return 0;
}


/**
 * 12. Calculate the arithmetic mean of three student grades and display, in
 *     addition to the mean value, a message according to the conditions below:
 *
 *     +---------------------+--------------+
 *     | Condition           | Message      |
 *     +---------------------+--------------+
 *     | Mean >= 7.0         | Approved     |
 *     | 5.0 <= Mean < 7.0   | Recovery     |
 *     | Mean < 5.0          | Failed       |
 *     +---------------------+--------------+
 */