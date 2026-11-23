#include <stdio.h>
#define MAX 100
void linearize(int m[MAX][MAX],int n_lin, int n_col, int a[MAX * MAX]) {
    int id = 0;
    for(int i = 0; i < n_lin; i++){
      for(int j = 0; j < n_col; j++){
        a[id] = m[i][j];
        id++;
      }
    }
    
}

int main(void){
    int m[MAX][MAX], a[MAX*MAX], n_lin, n_col;

    //Input
    printf("Insert the number of lines: ");
    scanf("%d", &n_lin);
  
    printf("Insert the number of columns: ");
    scanf("%d", &n_col);
    
    printf("Matrix 1:\n");
    for(int i = 0; i < n_lin; i++) {
      for(int j = 0; j < n_col; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &m[i][j]);
      }
    }
  
    for(int i = 0; i < n_lin; i++){
      printf("{ ");
      for(int j = 0; j < n_col; j++){
        printf("%d ", m[i][j]);
      }
      printf(" }\n");
    }

  
    //Processing
    linearize(m, n_lin, n_col,a);

    //Output
    printf("Linearized matrix:\n");
    printf("{ ");
    for(int i = 0; i < (n_lin*n_col); i++) printf("%d ", a[i]);
    printf(" }");
    
  
  return 0;
}


/**
 * 79. Implement a function with signature
 *     `void lineariza(int M[MAX][MAX], int n_lin, int n_col, int v[MAX*MAX])`
 *     whose goal is to copy the values of a matrix `M` into an array `v`.
 *     Test your function with a program that reads the dimensions and values of
 *     the matrix to be analyzed, printing the array `v`.
 */