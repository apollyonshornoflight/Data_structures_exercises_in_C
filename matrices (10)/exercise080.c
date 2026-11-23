#include <stdio.h>
#define MAX 100
void change_shape(int m1[MAX][MAX],int n_lin1, int n_col1, int m2[MAX][MAX], int n_lin2, int n_col2) {
    int id = 0,jd = 0;
    for(int i = 0; i < n_lin2; i++){
      for(int j = 0; j < n_col2; j++){
        if (jd >= n_col1) {id++; jd = 0;}
        m2[i][j] = m1[id][jd];
        jd++;
        
      }
    }
    
}

int main(void){
    int m1[MAX][MAX], m2[MAX][MAX], n_lin1, n_col1, n_lin2, n_col2;

    //Input
    printf("Insert the number of lines of matrix 1: ");
    scanf("%d", &n_lin1);
  
    printf("Insert the number of columns of matrix 1: ");
    scanf("%d", &n_col1);
    
    printf("Matrix 1:\n");
    for(int i = 0; i < n_lin1; i++) {
      for(int j = 0; j < n_col1; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &m1[i][j]);
      }
    }
  
    for(int i = 0; i < n_lin1; i++){
      printf("{ ");
      for(int j = 0; j < n_col1; j++){
        printf("%d ", m1[i][j]);
      }
      printf(" }\n");
    }

    printf("Insert the number of lines of matrix 2: ");
    scanf("%d", &n_lin2);
  
    printf("Insert the number of columns of matrix 2: ");
    scanf("%d", &n_col2);

    //Processing
    if (n_lin1*n_col1 == n_lin2*n_col2){
      change_shape(m1,n_lin1,n_col1,m2,n_lin2,n_col2);

      printf("Matrix 2:\n");
      for(int i = 0; i < n_lin2; i++){
        printf("{ ");
        for(int j = 0; j < n_col2; j++){
          printf("%d ", m2[i][j]);
        }
        printf(" }\n");
      }
        
    }
    else printf("Invalid dimensions\n");
  
  return 0;
}


/**
 * 80. Implement a function with signature
 *     `void altera_forma(int M1[MAX][MAX], int n_lin1, int n_col1, int M2[MAX][MAX], int n_lin2, int n_col2)`
 *     whose goal is to copy the values of a matrix `M1` into a matrix `M2`.
 *     However, `M2` will have `n_lin2` rows and `n_col2` columns. Test your
 *     function with a program that reads the dimensions and values of the
 *     matrix to be analyzed, printing `M1` and `M2` at the end.
 */