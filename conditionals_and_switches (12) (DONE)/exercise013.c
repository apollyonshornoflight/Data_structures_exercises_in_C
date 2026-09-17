#include <stdio.h>

int main()
{
    int side1,side2,side3;

    // Input
    printf("Type the length of the side 1: ");
    scanf("%d", &side1);
    printf("Type the length of the side 2: ");
    scanf("%d", &side2);
    printf("Type the length of the side 3: ");
    scanf("%d", &side3);
    // Processing
    if ((side1 >= side2 + side3) || (side2 >= side1 + side3) || (side3 >= side1 + side2)) {
        printf("This is not a triangle.\n");
    } else if ((side1 == side2) && (side2 == side3)) {
        printf("This is an equilateral triangle.\n");
    } else if ((side1 == side2) || (side2 == side3) || (side1 == side3)) {
        printf("This is an isosceles triangle\n");
    } else {
     printf("This is a scalene triangle\n");
    }

    return 0;
}


/**
 * 13. Write a program that checks whether three values a, b, and c can form
 *     the lengths of the sides of a triangle. If true, your program must inform
 *     whether the triangle is equilateral, isosceles, or scalene. Otherwise,
 *     your program must display the message "Does not form a triangle".
 *
 *     Note 1: An equilateral triangle has all three side lengths equal.
 *     Note 2: An isosceles triangle has at least two sides of equal length.
 *     Note 3: A scalene triangle has all side lengths different.
 *     Note 4: Assume that the values read are positive integers.
 *     Note 5: In any triangle, every side length must be smaller than the sum
 *             of the other two sides.
 */