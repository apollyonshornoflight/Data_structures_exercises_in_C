#include <stdio.h>

void unique(int v1[], int n, *idxmin){
    int size = 0;
    int v2[n];
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (v1[i] == v2[j] || v1[i] == 0) {flag = 1; break;}
        }
        if (flag == 0){
            v2[size] = v1[i];
            size++;
        }
    }
    for (int j = size; j < n; j++) v2[j] = 0;
}

int main(void){
    int n;

    //Input
    printf("Insert the array size: ");
    scanf("%d",&n);

    int v1[n],v2[n];
    printf("Type the elements of the array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v1[i]);

    //Processing
    unique(v1, v2, n);

    //Output
    printf("Array 1:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v1[i]);
    printf("}\n");

    printf("Array 2:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v2[i]);
    printf("}\n");

}


/**
 * 71. Elaborate a function with the signature
 *     `void shift_zeros(int v[], int n, int *idxmin)` that shifts the 0's of
 *     array `v` to the end. This operation must be executed "in-place", meaning
 *     the result is stored in the array itself. Furthermore, no auxiliary array
 *     should be created.
 */