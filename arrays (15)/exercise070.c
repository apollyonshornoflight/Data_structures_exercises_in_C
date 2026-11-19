#include <stdio.h>

void unique(int v1[], int v2[], int n){
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (v1[i] == v2[j]) {flag = 1; break;}
        }
        if (flag == 0){
            v2[size] = v1[i];
            size++;
        }
    }
    for (int j = size; j < n; j++) v2[j] = 0;
}

int main(void){
    int n;

    //Input
    printf("Insert the array size: ");
    scanf("%d",&n);

    int v1[n],v2[n];
    printf("Type the elements of the array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v1[i]);

    //Processing
    unique(v1, v2, n);

    //Output
    printf("Array 1:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v1[i]);
    printf("}\n");

    printf("Array 2:\n");
    printf("{ ");
    for (int i = 0; i < n; i++) printf("%d ", v2[i]);
    printf("}\n");

}


/**
 * 70. Write a function with the signature
 *     `void unique(int v1[], int v2[], int n)` that copies - preserving the order -
 *     the elements of v1 to v2 without repetition. The unfilled positions of v2
 *     must be assigned with 0.
 */