#include <stdio.h>

int min(int v[], int n, int *idmin){

    int smol = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < smol) {smol = v[i]; *idmin = i;}
    }
    return smol;
}

int main(void){
    int n, smallest, idmin;

    //Input
    printf("Insert the size of the array: ");
    scanf("%d",&n);

    int v[n];
    printf("Type the elements of the array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    //Processing
    smallest = min(v, n, &idmin);

    //Output
    printf("Smallest value on the array: %d\n", smallest);
    printf("Value index: %d\n", idmin);

    return 0;
}


/**
 * 67. Elaborate a function with the signature
 *     `int min(int v[], int n, int *idxmin)` that returns the smallest value of v.
 *     Additionally, your program must return, through the pointer `idxmin`, the
 *     index corresponding to the smallest element.
 */