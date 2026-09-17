#include <stdio.h>

int main()
{
    int id,qtd;
    float total;

    // Input
    printf("Insert the product ID: ");
    scanf("%d", &id);
    printf("Inform the quantity: ");
    scanf("%d", &qtd);

    // Processing
    if (id == 1001) {
        total = 5.32 * qtd;
        printf("R$ %.2f in total\n", total);

    } else if (id == 1324) {
        total = 6.45 * qtd;
        printf("R$ %.2f in total\n", total);
    
    } else if (id == 6548) {
        total = 2.37 * qtd;
        printf("R$ %.2f in total\n", total);
    
    } else if (id == 987) {
        total =  5.32 * qtd;
        printf("R$ %.2f in total\n", total);

    } else if (id == 7623) {
        total =  6.45 * qtd;
        printf("R$ %.2f in total\n", total);

    } else{
        printf("invalid ID\n");}

    return 0;
}


/**
 * 16. A salesperson needs a program to calculate the total price owed by a
 *     customer. The algorithm should receive the product code and the quantity
 *     purchased, and calculate the total price using the following table:
 *
 *     +--------+-------------------+
 *     | Code   | Unit Price (R$)   |
 *     +--------+-------------------+
 *     | 1001   | 5.32              |
 *     | 1324   | 6.45              |
 *     | 6548   | 2.37              |
 *     | 987    | 5.32              |
 *     | 7623   | 6.45              |
 *     +--------+-------------------+
 *
 *     Note: Display the message "Invalid code" if the entered value does not
 *     match the table.
 */