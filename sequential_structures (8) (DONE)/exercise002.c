#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    // Input
    printf("Type the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Processing
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("%.2f Celsius is %.2f in Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}


/**
 * 2. Same as the previous exercise, but converting from Celsius to Fahrenheit.
 */