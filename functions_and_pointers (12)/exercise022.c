#include <stdio.h>
 
int maior2(int a, int b) {
    if (a >= b){
        return a;
    }
    return b;
}
 
int maior3(int a, int b, int c) {
    int maior = 0;

    if (a >= b){
        maior = a;
    } else { maior = b;}
    if (maior >= c){
        return maior;
    } return c;
}
 
int main() {
    int a, b, c, maior;
    // input
    printf("Type the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    // processing
    maior = maior3(a, b, c);
    // output
    printf("%d is the largest value.\n", maior);
 
    return 0;
}


/**
 * 22. Implement the `maior3` function that receives three integers and returns
 *     the largest value among them. The function must strictly rely on the
 *     `maior2` function; that is, it cannot use `if` or `while` statements.
 *
 *     Reference code snippet:
 *
 *     #include <stdio.h>
 *
 *     int maior2(int a, int b) {
 *         if (a >= b)
 *             return a;
 *         return b;
 *     }
 *
 *     int maior3(int a, int b, int c) {
 *         ...
 *     }
 *
 *     int main() {
 *         int a, b, c, maior;
 *         // input
 *         scanf("%d %d %d", &a, &b, &c);
 *         // processing
 *         maior = maior3(a, b, c);
 *         // output
 *         printf("%d", maior);
 *
 *         return 0;
 *     }
 *
 *     Example input:  10 11 4
 *     Expected output: 11
 */