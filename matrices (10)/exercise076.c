#include <stdio.h>
#define MAX 100
int search(float mat[MAX][MAX], int n_lin, int n_col, float v, int *lin, int *col) {
    for (int i = 0; i < n_lin; i++){
      for (int j = 0; j < n_col; j++){
        if (mat[i][j] == v) {*lin = i; *col = j; return 0;}
      }
    }
    return -1;
}

int main(void){
    int n_lin, n_col, result, lin, col;

    //Input
    printf("Insert the matrix line lenght: ");
    scanf("%d",&n_lin);

    printf("Insert the matrix collum lenght: ");
    scanf("%d", &n_col);

    float value,mat1[MAX][MAX];
  
    printf("Matrix 1:\n");
    for(int i = 0; i < n_lin; i++) {
      for(int j = 0; j < n_col; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%f", &mat1[i][j]);
      }
    }
  
    for(int i = 0; i < n_lin; i++){
      printf("{ ");
      for(int j = 0; j < n_col; j++){
        printf("%f ", mat1[i][j]);
      }
      printf(" }\n");
    }

    printf("Type the value you want to search: ");
    scanf("%f", &value);
  
    //Processing
    result = search(mat1,n_lin,n_col, value, &lin, &col);

    //Output
    if(result == -1){
      printf("The value %f is nowhere in this matrix", value);
    }
    else printf("The value %f is on [%d][%d]", value, lin,col);
    
  
  return 0;
}


/**
 * 76. Elaborate a function with the signature
 *     `int busca(float M[MAX][MAX], int n_lin, int n_col, float v, int *lin, int *col)`
 *     that returns in the variables `lin` and `col`, respectively, the row and
 *     column where the value `v` is found in the matrix (if any). If not found,
 *     the function must return -1 at the end; otherwise, return any value other
 *     than -1. In case of repeated values, your function must return the first
 *     one found considering row and column traversal in raster order.
 */