#include <stdio.h>


int main()
{
    int fahrenheit;


    // Processing 
    for (int i = 0; i <= 100; i += 5)
    {
        fahrenheit = (i * 9 / 5) + 32;
        printf("%d Celsius in Fahrenheit is %d\n",i,fahrenheit);
    }
    

    return 0;
}


/**
 * 38. Write a program that displays on the screen a conversion table from
 *     degrees Celsius to Fahrenheit in the range of -100°C to 100°C with
 *     equally spaced values (step of 5).
 */