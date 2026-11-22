#include <stdio.h>

int match(int v1[], int v2[], int n1, int n2){
    int count;
    for (int i = 0; i < n1; i++)
    {
        count = 0;
        int flag = 0;
        for(int j = 0; j < n2; j++) {
          if (n1 - i >= n2){
            if (v1[i + count] == v2[j]) {count++;}
            else {flag = 1; break;}
          }
          else {flag = 1; break;}
        }
        if (flag == 0){return i;}
    }
    return -1;
}

int main(void){
    int n1,n2,id;

    //Input
    printf("Insert the array 1 size: ");
    scanf("%d",&n1);

    int v1[n1];
    printf("Insert the array 2 size: ");
    scanf("%d",&n2);
  
    int v2[n2];
    printf("Type the elements of the array 1:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &v1[i]);

    printf("Type the elements of the array 2:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &v2[i]);

    printf("Array 1:\n");
    printf("{ ");
    for (int i = 0; i < n1; i++) printf("%d ", v1[i]);
    printf("}\n");

    printf("Array 2:\n");
    printf("{ ");
    for (int i = 0; i < n2; i++) printf("%d ", v2[i]);
    printf("}\n");
  
    //Processing
    id = match(v1,v2,n1,n2);

    //Output
    if (id == -1){
      printf("Array 2 is not present in array 1.\n");
        return 0;
    }
  else{
    printf("%d is the index where array 2 is present in 1\n", id);
  }
  return 0;
}


/**
 * 72. Elaborate a function with the signature `int match(int v1[], int v2[], int n)`.
 *     Assume that `v1` and `v2` are arrays composed only of 0's and 1's, with
 *     the size of `v2` strictly smaller than that of `v1`. Such a function must
 *     check whether `v2` is a subsequence of `v1` and return the index of array
 *     `v1` where pattern matching was verified, or -1 if there is no match.
 */