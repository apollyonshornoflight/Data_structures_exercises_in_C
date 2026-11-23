#include <stdio.h>

int main(void){
    int m,n,o;

    //Input
    printf("Insert the value of m: ");
    scanf("%d", &m);
  
    printf("Insert the value of n: ");
    scanf("%d", &n);

    printf("Insert the value of o: ");
    scanf("%d", &o);

    int A[m][n], B[n][o], P[m][o];
    
    printf("Matrix A:\n");
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < n; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &A[i][j]);
      }
    }
  
    for(int i = 0; i < m; i++){
      printf("{ ");
      for(int j = 0; j < n; j++){
        printf("%d ", A[i][j]);
      }
      printf(" }\n");
    }

    printf("Matrix B:\n");
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < o; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &B[i][j]);
      }
    }
  
    for(int i = 0; i < n; i++){
      printf("{ ");
      for(int j = 0; j < o; j++){
        printf("%d ", B[i][j]);
      }
      printf(" }\n");
    }
  
    //Processing
    for(int i = 0; i < m; i++){
      for(int j = 0; j < o; j++){P[i][j] = 0;}
    }
  
  
    for(int i = 0; i < m; i++){
      for(int j = 0; j < o; j++){
        for(int k = 0; k < n; k++){
          P[i][j] += A[i][k] * B[k][j];
        }
      }
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
 * 81. Given two matrices A_{m x n} and B_{n x o}, write a program that displays
 *     the matrix P = A * B.
 */