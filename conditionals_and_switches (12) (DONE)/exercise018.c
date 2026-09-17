#include <stdio.h>

int main() {

    int weight, planet;
    float result;
    //input
    printf("Type the weight you want to calculate: ");
    scanf("%d", &weight);
    printf("Type the number (1-6) of the planet you desire: ");
    scanf("%d", &planet);

    //processing
    switch (planet) 
    {
    case 1:
    result = weight * 0.37;
    printf("%d kg would have %f on Mercury.\n", weight,result);
    break;

    case 2:
    result = weight * 0.88;
    printf("%d kg would have %f on Venus.\n", weight,result);
    break;

    case 3:
    result = weight * 0.38;
    printf("%d kg would have %f on Mars.\n", weight,result);
    break;

    case 4:
    result = weight * 2.64;
    printf("%d kg would have %f on Jupiter.\n", weight,result);
    break;

    case 5:
    result = weight * 1.15;
    printf("%d kg would have %f on Saturn.\n", weight,result);
    break;

    case 6:
    result = weight * 1.17;
    printf("%d kg would have %f on Uranus.\n", weight,result);
    break;

    }
    return 0;
}


/**
 * 18. Write a program that reads a weight on Earth and a number corresponding
 *     to a planet, and prints the weight value on that planet. The list of
 *     planets is given below along with their relative gravities compared to Earth:
 *
 *     +---+-------------------+---------+
 *     | n | Relative Gravity  | Planet  |
 *     +---+-------------------+---------+
 *     | 1 | 0.37              | Mercury |
 *     | 2 | 0.88              | Venus   |
 *     | 3 | 0.38              | Mars    |
 *     | 4 | 2.64              | Jupiter |
 *     | 5 | 1.15              | Saturn  |
 *     | 6 | 1.17              | Uranus  |
 *     +---+-------------------+---------+
 */