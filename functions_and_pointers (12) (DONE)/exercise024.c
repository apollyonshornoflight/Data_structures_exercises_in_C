#include <stdio.h>
#include <ctype.h>

int convert_grade(char grade)
{   
    switch(tolower(grade)) {
        case 'a':
        return 10;

        case 'b':
        return 8;

        case 'c':
        return 6;

        case 'd':
        return 4;

        case 'e':
        return 2;

        case 'f':
        return 0;
    }
}

int main()
{
    char str_grade;
    int num_grade;

    // Input
    printf("Type your alphabetical grade (A-F): ");
    scanf("%c", &str_grade);



    // Processing
    num_grade = convert_grade(str_grade);

    //Output
    printf("Your grade of %c would be %d numerically.\n", str_grade, num_grade);

    return 0;
}


/**
 * 24. A university wishes to convert its students' grades from an alphabetical
 *     scale to a numerical scale according to the following mapping:
 *
 *     +-------+-----------------+
 *     | Grade | Numerical Value |
 *     +-------+-----------------+
 *     | A     | 10              |
 *     | B     | 8               |
 *     | C     | 6               |
 *     | D     | 4               |
 *     | F     | 0               |
 *     +-------+-----------------+
 *
 *     Implement a function in C language with the signature
 *     `int converter_nota(char nota)` that receives an alphabetical grade as
 *     an argument and returns the equivalent grade on the numerical scale.
 *     If the alphabetical grade is invalid, the function should return -1.
 *     Write a complete program that reads an alphabetical grade provided via
 *     keyboard, calls the `converter_nota` function to perform the conversion,
 *     and prints the equivalent grade on the numerical scale or an error
 *     message if the grade is invalid.
 */