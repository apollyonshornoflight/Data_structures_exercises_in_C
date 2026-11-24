#include <stdio.h>
#include <stdlib.h>

int* f_union(int *x1, int *x2, int n1, int n2, int* n3){
    int flag;
    int *x3 = malloc((n1 + n2) * sizeof(int));
    if (x3 == NULL) return NULL;

    *n3 = 0;
    for(int i = 0; i < n1; i++){
        flag = 0;
        for(int j = 0; j < *n3; j++){
            if (x3[j] == x1[i]) {flag = 1; break;}
        }
        if (flag == 0) {x3[*n3] = x1[i]; (*n3)++;}
    }

    for(int i = 0; i < n2; i++){
        flag = 0;
        for(int j = 0; j < *n3; j++){
            if (x3[j] == x2[i]) {flag = 1; break;}
        }
        if (flag == 0) {x3[*n3] = x2[i]; (*n3)++;}
    }

    for (int i = 0; i < *n3; i++){
        for(int j = 0; j < *n3 - i - 1; j++){
            if (x3[j] > x3[j + 1]){
                int temp = x3[j];
                x3[j] = x3[j + 1];
                x3[j + 1] = temp;
            }
        }
    }

    return x3;
}


int main(void){
    int n1,n2,n3,*x3;

    //Input
    printf("Insert the size of the array 1: ");
    scanf("%d", &n1);
    int x1[n1];

    printf("Insert the size of the array 2: ");
    scanf("%d", &n2);
    int x2[n2];


    printf("Type the values of the array 1:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &x1[i]);

    printf("Type the values of the array 2:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &x2[i]);

    //Procesing
    x3 = f_union(x1,x2,n1,n2,&n3);
    if (x3 == NULL){printf("Allocation error\n"); return 1;}



    //Output
    printf("Array 1:\n");
    printf("{ ");
    for (int i = 0; i < n1; i++)printf("%d ", x1[i]);
    printf("}\n");

    printf("Array 2:\n");
    printf("{ ");
    for (int i = 0; i < n2; i++)printf("%d ", x2[i]);
    printf("}\n");

    printf("Array 3 (Union sorted):\n");
    printf("{ ");
    for (int i = 0; i < n3; i++)printf("%d ", x3[i]);
    printf("}\n");
    free(x3);
}


/**
 * 88. Implement a function that takes as parameters two integer arrays `x1`
 *     and `x2` and their respective element counts `n1` and `n2`. The function
 *     must return a pointer to a third array, `x3`, dynamically allocated,
 *     containing the union of `x1` and `x2`, and use the pointer `n3` to
 *     return the size of `x3`. Adopt the function signature
 *     `int* uniao(int *x1, int *x2, int n1, int n2, int* n3)`.
 */