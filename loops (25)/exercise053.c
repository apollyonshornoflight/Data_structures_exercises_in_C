#include <stdio.h>
#include <math.h>

int main()
{
    int nmax, nless = 0;
    double lc, lp, dif,r;


    //Input
    printf("Insert the maximum N: ");
    scanf("%d", &nmax);

    printf("Insert the value of R: ");
    scanf("%lf", &r);


    // Processing 
    lc = 2 * M_PI * r;

    for (int n = 3; n <= nmax; n++)
    {
        lp = 2 * r * n * sin(M_PI / n);
        dif = lc - lp;

        printf("The residue of lc - lp for n = %d is %.6f\n", n, dif);
        if (dif < lc * 0.02 && nless == 0) {
            nless = n;
        }
    }
    printf("%d is the number of sizes that the difference of Lc - Lp is less than 2%%", nless);

    

    return 0;
}


/**
 * 53. The perimeter of a regular polygon P of n sides inscribed in a circle C
 *     of radius Rc and perimeter Lc = 2*pi*R can be calculated by:
 *
 *     Lp = 2 * Rc * n * sin(pi / n)
 *
 *     As the number of sides of the polygon (n) increases, its perimeter
 *     approaches the perimeter of the circumscribed circle. Make an algorithm
 *     that reads R, and displays a table relating the residue Lc - Lp for
 *     n = 3, 4, 5, ..., Nmax, where Nmax is a value also read by the algorithm.
 *     Your algorithm must also report for which value of n the residue becomes
 *     less than 2% of Lc.
 */