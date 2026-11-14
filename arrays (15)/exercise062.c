#include <stdio.h>

int main(){

    char c;
    int n;

    //Input
    printf("Type any char: \n");
    scanf(" %c", &c);

    printf("Type the size of the array: \n");
    scanf("%d", &n);
    if (n <= 0) {printf("Invalid number, please insert a number greater than 0 next time.\n"); return 1;}

    char array[n];
    
    printf("Insert each character:\n");
    for (int i = 0; i < n; i++) {printf("Position %d character: ", i); scanf(" %c", &array[i]); printf("\n");}

    for (int i = 0; i < n; i++) if (array[i] == c) printf("%d ", i);

    
    //Output
    printf("are the positions where %c is present on the array.\n", c);
    return 0;
}

/**
 * 62. Make a program that reads a character c, and then n positions of a
 *     character array. Your program should print all the indices where
 *     c is found in the array.
 */
