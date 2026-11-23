#include <stdio.h>
#include <stdlib.h>

float** alloc_matrix(int lin, int col){
    if (lin <= 0 || col <= 0) return NULL;
    float **m = malloc(lin * sizeof(float*));
    if (m == NULL) return NULL;
    
    for (int i = 0; i < lin; i++){
        m[i] = malloc(col * sizeof(float));
        if (m[i] == NULL){
            for (int k = 0; k < i; k++) free(m[k]);
            free(m);
            return NULL;
        }
    }
    return m;
}



int main(void){
    int lin,col;
    float **m;

    //Input
    printf("Insert the length of the line: ");
    scanf("%d", &lin);

    printf("Insert the length of the column: ");
    scanf("%d", &col);

    //Procesing
    m = alloc_matrix(lin,col);
    if (m == NULL){printf("Allocation error\n"); return 1;}

    printf("Type the values of the matrix below\n");
    for (int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf("%f", &m[i][j]);
        }
    }

    //Output
    for (int i = 0; i < lin; i++){
        printf("{ ");
        for (int j = 0; j < col; j++){
            printf("%f ", m[i][j]);
        }
        printf("}\n");
    }

    for (int i = 0; i < lin; i++){
        free(m[i]);
    }
    free(m);
}


/**
 * 86. Write a function in the C language called `float** aloca_matriz(int lin, int col)`
 *     that dynamically allocates a matrix with `float` elements with `lin` rows
 *     and `col` columns. The function must return a pointer to the allocated
 *     matrix.
 */