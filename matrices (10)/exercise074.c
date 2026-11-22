#include <stdio.h>
void is_equal(int m, int mat1[][m], int mat2[][m]) {
    int flag = 0;
    for (int i = 0; i < m; i++){
      if (flag == 1) break;
      for (int j = 0; j < m; j++){
        if (mat1[i][j] != mat2[i][j]) {flag = 1; break;}
      }
    }
    if (flag == 1) printf("These matrices are not equal\n");
    else printf("These matrices are equal!!\n");
}

int main(void){
    int m;

    //Input
    printf("Insert the matrix size: ");
    scanf("%d",&m);

    int mat1[m][m], mat2[m][m];
  
    printf("Matrix 1:\n");
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &mat1[i][j]);
      }
    }
  
    printf("Matrix 2:\n");
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++){
        printf("Insert the value of [%d][%d]: ",i,j);
        scanf("%d", &mat2[i][j]);
      }
    }
  
    //Output
    is_equal(m,mat1,mat2);

  return 0;
}


/**
 * 74. Write a function that receives two m x m matrices (m is an integer read
 *     from the keyboard) and informs whether they are equal.
 */