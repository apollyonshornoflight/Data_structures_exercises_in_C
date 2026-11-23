#include <stdio.h>

int calculate_determ(int m[3][3]) {
    int Dp, Ds;
    Dp = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m[2][0]) + (m[0][2] * m[1][0] * m[2][1]);
    Ds = (m[0][2] * m[1][1] * m[2][0]) + (m[0][0] * m[1][2] * m[2][1]) + (m[0][1] * m[1][0] * m[2][2]);
    return Dp - Ds;
}

int main(void){
    int m[3][3], D;

    //Input
    printf("Matrix 1:\n");
    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &m[i][j]);
      }
    }
  
    for(int i = 0; i < 3; i++){
      printf("{ ");
      for(int j = 0; j < 3; j++){
        printf("%d ", m[i][j]);
      }
      printf(" }\n");
    }

  
    //Processing
    D = calculate_determ(m);

    //Output
    printf("%d is the determinant of this matrix of 3x3\n", D);
    
  
  return 0;
}


/**
 * 77. Write a function in C that receives a 3 x 3 matrix, calculates its
 *     determinant, and finally displays the resulting value on the screen.
 */