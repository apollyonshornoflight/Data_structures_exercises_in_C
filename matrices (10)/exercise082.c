#include <stdio.h>

int main(void){
    int n_lin,n_col,minimax;

    //Input
    printf("Insert the number of lines: ");
    scanf("%d", &n_lin);
  
    printf("Insert the value of columns: ");
    scanf("%d", &n_col);

    int m[n_lin][n_col];
    
    printf("Matrix:\n");
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
    for(int i = 0; i < n_lin; i++){
      for(int j = 0;)
    }
    //Output
    printf("Matrix P:\n");
    for(int i = 0; i < m; i++){
      printf("{ ");
      for(int j = 0; j < o; j++){
        printf("%d ", P[i][j]);
      }
      printf(" }\n");
    }
  
  return 0;
}


/**
 * 82. In systems theory, the minimax element of a matrix is defined as the
 *     smallest element of the row where the largest element of the matrix is
 *     located. Given this, write a program that reads an integer matrix
 *     n_lin x n_col and displays it on the screen, and displays on the screen
 *     the minimax element and its position (row and column) in the matrix.
 */