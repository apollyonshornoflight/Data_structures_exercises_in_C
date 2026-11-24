#include <stdio.h>
#include <stdlib.h>

int* linearize(int **mat, int n){
    int count = 0;
    int size = (n*(n+1))/2;
    int *a = malloc((size) * sizeof(int));
    if (a == NULL) return NULL;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) a[count++] = mat[i][j];
        }

    return a;
}


int main(void){
    int n,*a;

    //Input
    printf("Insert the value of n: ");
    scanf("%d", &n);
  
    int **mat = malloc(n * sizeof(int*));
    if (mat == NULL) {printf("Allocation error\n"); return 1;}

    for(int i = 0; i < n; i++){
        mat[i] = malloc(n * sizeof(int));
        if (mat[i] == NULL){
            for (int j = 0; j < i; j++){
                free(mat[j]);
            }
            free(mat);
            printf("Allocation error\n");
            return 1;
        }
    }

    printf("Type the values of the matrix below\n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    //Procesing
    a = linearize(mat,n);
    if (a == NULL){
        printf("Allocation error\n");
        for (int i = 0; i < n; i++){
            free(mat[i]);
            }
        free(mat);
        return 1;
        }



    //Output
    printf("Triangular matrix:\n");
    for (int i = 0; i < n; i++){
        printf("{ ");
        for (int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("}\n");
    }

    printf("Linearized array:\n");
    printf("{ ");
    for (int i = 0; i < (n*(n+1))/2; i++)printf("%d ", a[i]);
    printf("}\n");


    free(a);
    for (int i = 0; i < n; i++){
        free(mat[i]);
    }
    free(mat);
    
}


/**
 * 90. Create a function with signature `int* lineariza(int **mat, int n)` that
 *     takes as input a lower triangular matrix `mat` of dimensions `n x n` and
 *     returns an array with the elements of the matrix that lie on the main
 *     diagonal and below it. The function must return a dynamically allocated
 *     array of integers. For example, given the matrix
 */