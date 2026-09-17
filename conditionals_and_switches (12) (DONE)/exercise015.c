#include <stdio.h>

int main()
{
    float current_consume,pastmonth_consume, real_consume, waterbill;

    // Input
    printf("Inform the water consume of the past month: ");
    scanf("%f", &pastmonth_consume);
    printf("Inform the water consume of the current month: ");
    scanf("%f", &current_consume);
    real_consume = current_consume - pastmonth_consume;
    // Processing
    if (real_consume <= 10) {
         waterbill = ((0.69 * real_consume) + 5) * 1.025;

    } else if ((real_consume > 10) && (real_consume <= 15)) {
        waterbill = ((1.17 * real_consume) + 5) * 1.025;
    
    } else if ((real_consume > 15) && (real_consume <= 25)) {
        waterbill = ((1.48 * real_consume) + 5) * 1.025;
    
    } else if (real_consume > 25) {
        waterbill = ((1.60 * real_consume) + 5) * 1.025;
    }
    printf("R$ %2.f Will be how much you will need to pay on these water bills\n", waterbill);
    return 0;
}


/**
 * 15. Write a program that calculates and prints the total water bill amount,
 *     based on the previous month's and current month's meter readings. It is
 *     known that the water bill consists of the water rate added to the sewage
 *     rate (2.5% of the water bill) and the hydrometer maintenance fee
 *     (R$ 5.00). The water consumption rates follow the table below:
 *
 *     +--------------------------+------------------+
 *     | Consumption (m³)         | Rate (R$/m³)     |
 *     +--------------------------+------------------+
 *     | 0 to 10 (inclusive)      | 0.69             |
 *     | 11 to 15 (inclusive)     | 1.17             |
 *     | 16 to 25 (inclusive)     | 1.48             |
 *     | Above 25                 | 1.60             |
 *     +--------------------------+------------------+
 */