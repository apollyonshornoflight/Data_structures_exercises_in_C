#include <stdio.h>
#include <stdlib.h>

int* alloc_array(int n){
    int *v = malloc(n * sizeof(int));
    if (v == NULL) return NULL;
    return v;
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
    free(v);

}


/**
 * 84. Write a function with signature `int* aloca_vetor(int n)` in the C
 *     language that dynamically allocates an array of integers with `n`
 *     elements and returns a pointer to this array. Make sure you allocate
 *     memory for the array properly and handle possible allocation errors.
 */