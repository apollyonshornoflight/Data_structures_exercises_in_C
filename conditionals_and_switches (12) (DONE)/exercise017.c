#include <stdio.h>

int main() {

    int last_digit, current_m;
    //input
    printf("Enter the last digit of the vehicle's license plate (0-9): ");
    scanf("%d", &last_digit);
    printf("Enter the current month (1-10): ");
    scanf("%d", &current_m);

    //processing
    switch (last_digit) 
    {
    case 1:
    if (current_m == 1) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in January.\n");
    }
    break;

    case 2:
    if (current_m == 2) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in February.\n");
    }
    break;

    case 3:
    if (current_m == 3) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in March.\n");
    }
    break;

    case 4:
    if (current_m == 4) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in April.\n");
    }
    break;

    case 5:
    if (current_m == 5) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in May.\n");
    }
    break;

    case 6:
    if (current_m == 6) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in June.\n");
    }
    break;

    case 7:
    if (current_m == 7) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in July.\n");
    }
    break;

    case 8:
    if (current_m == 8) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in August.\n");
    }
    break;

    case 9:
    if (current_m == 9) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in September.\n");
    }
    break;

    case 0:
    if (current_m == 10) {
        printf("Warning! The IPVA is due this month.\n");
    } else {
        printf("The IPVA is due in October.\n");
    }
    break;

    }
    return 0;
}


/**
 * 17. Write a program that reads the number corresponding to the current month
 *     and the digits (only the four numbers) of a vehicle's license plate, and
 *     through the plate's ending number (units digit), determines whether the
 *     vehicle's IPVA tax is due in the current month. Check the following table
 *     that relates the license plate ending to the IPVA payment month.
 *
 *     +--------+----------+--------+-----------+
 *     | Ending | Month    | Ending | Month     |
 *     +--------+----------+--------+-----------+
 *     | 1      | January  | 6      | June      |
 *     | 2      | February | 7      | July      |
 *     | 3      | March    | 8      | August    |
 *     | 4      | April    | 9      | September |
 *     | 5      | May      | 0      | October   |
 *     +--------+----------+--------+-----------+
 *
 *     Note: The license plate number must be read as an integer type.
 *
 *     Reference code snippet from original exercise:
 *
 *     #include <stdio.h>
 *
 *     int main() {
 *         int last_digit;
 *
 *         printf("Enter the last digit of the vehicle plate (0-9): ");
 *         scanf("%d", &last_digit);
 *
 *         switch (last_digit) {
 *             case 1:
 *                 printf("IPVA is due in January.\n");
 *                 break;
 *             // Complete the cases for other digits and months here...
 *
 *             default:
 *                 printf("Invalid digit.\n");
 *                 break;
 *         }
 *
 *         return 0;
 *     }
 */

