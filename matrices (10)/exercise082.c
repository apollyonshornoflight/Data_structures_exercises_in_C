#include <stdio.h>

int main(void){
    int n_lin,n_col, maxI = 0, minJ = 0;

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
    int max = m[0][0];

    for(int i = 0; i < n_lin; i++){
      printf("{ ");
      for(int j = 0; j < n_col; j++){
        printf("%d ", m[i][j]);
      }
      printf(" }\n");
    }

    //Processing
    for(int i = 0; i < n_lin; i++){
      for(int j = 0; j < n_col; j++){
        if (m[i][j] > max) {max = m[i][j]; maxI = i;}
      }
    }

    int minimax = m[maxI][0];

    for(int j = 0; j < n_col; j++){
      if (m[maxI][j] < minimax) {minimax = m[maxI][j]; minJ = j;};
    }

    //Output
    printf("The minimax of this matrix is %d, and is located in [%d][%d]\n", minimax,maxI,minJ);
  
  return 0;
}


/**
 * 82. In systems theory, the minimax element of a matrix is defined as the
 *     smallest element of the row where the largest element of the matrix is
 *     located. Given this, write a program that reads an integer matrix
 *     n_lin x n_col and displays it on the screen, and displays on the screen
 *     the minimax element and its position (row and column) in the matrix.
 */