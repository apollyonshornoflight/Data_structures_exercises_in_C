#include <stdio.h>

void cumulative_sum(int src[], int tgt[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += src[i];
        tgt[i] = sum;
    }
}

int main(void){
    int n;

    //Input
    printf("Insert the size of the array: ");
    scanf("%d",&n);

    int src[n], tgt[n];
    printf("Type the elements of the array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &src[i]);

    //Processing
    cumulative_sum(src,tgt,n);

    //Output
    printf("Produce of the cumulative sums:\n");
    for (int i = 0; i < n; i++) printf("%d ", tgt[i]);
    printf("\n");

    return 0;
}


/**
 * 66. Elaborate a function with the signature
 *     `void soma_acumulada(int src[], int tgt[], int n)` that performs the
 *     cumulative sum of the n values from `src` and stores them in `tgt`.
 */