#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    // Input
    printf("Type the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Processing
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output
    printf("%.2f Fahrenheits is %.2f in Celsius.\n", fahrenheit, celsius);

    return 0;
}


/**
 * 1. Write a program that reads a temperature in degrees Fahrenheit (F),
 *    converts it to degrees Celsius, and displays the converted temperature
 *    on the screen. The conversion formula is:
 *
 *    C = 5 * (F - 32) / 9
 */