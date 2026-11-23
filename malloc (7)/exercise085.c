#include <stdio.h>
#include <stdlib.h>

int* alloc_array(int n){
    int *v = malloc(n * sizeof(int));
    if (v == NULL) return NULL;
    return v;
}

void free_array(int *v, int n){
    free(v);
}

int main(void){
    int n, *v;

    //Input
    printf("Insert the size of the array: ");
    scanf("%d", &n);

    //Procesing
    v = alloc_array(n);
    if (v == NULL){printf("Allocation error\n"); return 1;}

    printf("Type the values of the array below\n");
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    //Output
    printf("{ ");
    for (int i = 0; i < n; i++)printf("%d ", v[i]);
    printf("}\n");
    free_array(v,n);

}


/**
 * 85. Write a function in the C language called `void libera_vetor(int *v, int n)`
 *     that frees the memory allocated for an array `v` of size `n`.
 */