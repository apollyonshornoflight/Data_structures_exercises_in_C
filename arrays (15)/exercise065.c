#include <stdio.h>
#include <ctype.h>

int are_equal(char str[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]) &&
            tolower(str[i]) != 'a' &&
            tolower(str[i]) != 'e' &&
            tolower(str[i]) != 'i' &&
            tolower(str[i]) != 'o' &&
            tolower(str[i]) != 'u') count++;
    }
    return count;
}

int main(void){
    int n, count;

    //Input
    printf("Insert the size of the string: ");
    scanf("%d",&n);

    char str[n];
    printf("Type the characters:\n");
    for (int i = 0; i < n; i++) scanf(" %c", &str[i]);

    //Processing
    count = are_equal(str, n);

    //Output
    printf("The quantity of consonants in this string is: %d\n", count);

    return 0;
}


/**
 * 65. Implement a function with the signature
 *     `int count_consonants(char str[], int n)` that returns the number of
 *     consonants in a character array `str` composed only of vowels,
 *     consonants, and digits.
 */