#include <stdio.h>

void shift_zeros(int v1[], int n, int *idxmin){
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] != 0){
            v1[size] = v1[i];
            size++;
        }
    }
    for (int j = size; j < n; j++) v1[j] = 0;
    *idxmin = size;
}

int main(void){
    int n, idxmin = 0;

    //Input
    printf("Insert the array size: ");
    scanf("%d",&n);

    int v1[n];
    printf("Type the elements of the array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v1[i]);

    printf("Array 1 before:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v1[i]);
    printf("}\n");
  
    //Processing
    shift_zeros(v1,n, &idxmin);

    //Output
    printf("Array 1 with the 0's shifted:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v1[i]);
    printf("}\n");

}


/**
 * 71. Elaborate a function with the signature
 *     `void shift_zeros(int v[], int n, int *idxmin)` that shifts the 0's of
 *     array `v` to the end. This operation must be executed "in-place", meaning
 *     the result is stored in the array itself. Furthermore, no auxiliary array
 *     should be created.
 */