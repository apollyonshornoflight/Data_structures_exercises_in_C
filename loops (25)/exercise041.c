#include <stdio.h>


int main()
{
    int large = 0, small = 0, q, num, mean, sum = 0, count = 0;
    
    //Input
    printf("Type the amount of times you want to input: ");
    scanf("%d",&q);

    // Processing 
    if (q >= 3){
        for (int i = 0; i < q; i++)
        {
         printf("Type a number: ");
            scanf("%d", &num);
         if (num > large) {
             large = num;
         }
          if (num < small) {
             small = num;
         }
         count++;
         sum += num;
     } count -= 2;
     sum -= large + small;
     mean = sum / count;
    //Output
    printf("%d is the mean value with both largest and smallest values excluded.\n", mean);
    } else {
        printf("%d is not accepted, you need to insert a number bigger than 2\n",num);
    }
    return 0;
}


/**
 * 41. Write a program that prints the average of n numbers (n is a positive
 *     value read from the keyboard) excluding the smallest and largest of them.
 *     Your program must handle cases where n < 3 by displaying an error message.
 */