#include <stdio.h>
void normalized(int m, float mat[][m], float mat2[][m]) {
    float biggest = mat[0][0];
    for (int i = 0; i < m; i++){
      for (int j = 0; j < m; j++){
        if (mat[i][j] > biggest) {biggest = mat[i][j];}
      }
    }
    for (int i = 0; i < m; i++){
      for (int j = 0; j < m; j++){
        mat2[i][j] = mat[i][j] / biggest;
      }
    }
}

int main(void){
    int m;

    //Input
    printf("Insert the matrix size: ");
    scanf("%d",&m);

    float mat1[m][m], mat2[m][m];
  
    printf("Matrix 1:\n");
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%f", &mat1[i][j]);
      }
    }
  
    for(int i = 0; i < m; i++){
      printf("{ ");
      for(int j = 0; j < m; j++){
        printf("%f ", mat1[i][j]);
      }
      printf(" }\n");
    }
  
    //Processing
    normalized(m,mat1,mat2);

    //Output
    printf("Now the matrix is normilized ans its values are:\n");
    for(int i = 0; i < m; i++){
      printf("{ ");
      for(int j = 0; j < m; j++){
        printf("%f ", mat2[i][j]);
      }
      printf(" }\n");
    }
  
  return 0;
}


/**
 * 75. Write a function that receives a float matrix and returns (via parameter)
 *     the normalized matrix resulting from dividing the original matrix by its
 *     largest value.
 */