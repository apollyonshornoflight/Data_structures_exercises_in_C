#include <stdio.h>

void f_union(int src1[], int src2[], int tgt[], int n){
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (src1[i] == tgt[j]) {flag = 1; break;}
        }
        if (flag == 0){
            tgt[size] = src1[i];
            size++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (src2[i] == tgt[j]) {flag = 1; break;}
        }
        if (flag == 0){
            tgt[size] = src2[i];
            size++;
        }
    }
    for (int j = size; j < 2*n; j++) tgt[j] = -1;
}

int main(void){
    int n;

    //Input
    printf("Insert the size of both arrays: ");
    scanf("%d",&n);

    int v1[n],v2[n],tgt[2*n];
    printf("Type the elements of the first array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v1[i]);
    printf("Type the elements of the second array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v2[i]);

    //Processing
    f_union(v1, v2, tgt, n);

    //Output
    printf("Array 1:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v1[i]);
    printf("}\n");

    printf("Array 2:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v2[i]);
    printf("}\n");

    printf("Arrays union:\n");
    printf("{ ");
    for (int i = 0; i < n*2; i++)
    {
        if (tgt[i] == -1) break;
        printf("%d ", tgt[i]);
    }
    printf("}\n");
    return 0;
}


/**
 * 68. Elaborate a function with the signature
 *     `void uniao(int src1[], int src2[], int tgt[], int n)` that performs the
 *     union of the arrays of n elements `src1` and `src2` and stores it in `tgt`.
 */