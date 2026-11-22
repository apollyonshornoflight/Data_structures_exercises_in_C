#include <stdio.h>

int main(void){
    int m;

    //Input
    printf("Insert the matrixsize: ");
    scanf("%d",&m);

    int mat[m][m];
  
    //Processing
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++){
        if (i == j) mat[i][j] = 1;
        else mat[i][j] = 0;
      }
    }

    //Output
    for(int i = 0; i < m; i++){
      printf("{ ");
      for(int j = 0; j < m; j++){
        printf("%d ", mat[i][j]);
      }
      printf(" }\n");
    }

  return 0;
}


/**
 * 73. Write a program that reads an m x m matrix (m is an integer read from
 *     the keyboard), fills the main diagonal with 1's and the remaining
 *     elements with 0's (identity matrix). The matrix must be printed on the
 *     screen at the end of execution.
 */