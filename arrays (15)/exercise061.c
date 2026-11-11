#include <stdio.h>
void encontre_indices(char vetor[], int tamanho, char c) {
    printf("The corresponding indexes to %c are:\n", c);

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == c){
            printf("%d ", i);
        }
    }
    printf("\n");
    
}
int main() {
char c;
int n;
printf("type the character to be searched (c): ");
scanf(" %c", &c);
printf("Insert the size of the array (n): ");
scanf("%d", &n);
char vetor[n];
printf("Insert the characters of the array:\n");
for (int i = 0; i < n; i++) {
scanf(" %c", &vetor[i]);
}
encontre_indices(vetor, n, c);
return 0;
}


/**
 * 61. Make a program that reads a character c, and then n positions of a
 *     character array. Your program should print all the indices where
 *     c is found in the array.
 *
 *     Function signature:
 *     void encontre_indices(char vetor[], int tamanho, char c);
 *
 *     Code snippet to complete:
 *     #include <stdio.h>
 *
 *     void encontre_indices(char vetor[], int tamanho, char c) {
 *         // Your code here
 *     }
 *
 *     int main() {
 *         char c;
 *         int n;
 *
 *         printf("Enter the character to be searched (c): ");
 *         scanf(" %c", &c);
 *
 *         printf("Enter the size of the array (n): ");
 *         scanf("%d", &n);
 *
 *         char vetor[n];
 *
 *         printf("Enter the characters of the array (separated by space or enter):\n");
 *         for (int i = 0; i < n; i++) {
 *             scanf(" %c", &vetor[i]);
 *         }
 *
 *         encontre_indices(vetor, n, c);
 *
 *         return 0;
 *     }
 */