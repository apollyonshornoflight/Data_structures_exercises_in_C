#include <stdio.h>

void largest_sequence_ones(int v[], int n, int *pos, int *size){
    int count = 0, biggest = 0, flag = 0;
    int current_pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1){
            count++;
            if (flag == 0) {flag = 1; current_pos = i;}
            if (count > biggest) {biggest = count; *pos = current_pos;}
        }
        else flag = 0, count = 0; 
    }
    *size = biggest;
    
}

int main(void){
    int n, size = 0, pos = -1;

    //Input
    printf("Type the size of the array: ");
    scanf("%d", &n);

    int v[n];
    printf("Insert the values of the array (zeros and ones only)\n");
    for (int i = 0; i < n; i++) {
        printf("Type the value of the index %d: ", i);
        scanf("%d", &v[i]);
        if (v[i] != 0 && v[i] != 1) {printf("Value not accepted (only 1's and 0's)\n"); i--;}
    }

    //Processing
    largest_sequence_ones(v,n, &pos, &size);


    //Output
    if (pos == -1) printf("There are no 1's in this array\n");
    else {
        printf("{ ");
        for (int i = 0; i < n; i++) printf("%d ", v[i]);
        printf("}\n");

        printf("The largest sequence of 1's is %d, and starts on position %d\n", size, pos);
    }

    return 0;
}


/**
 * 69. Elaborate a function with the signature
 *     `void largest_sequence_ones(int v[], int n, int *pos, int *size)` that
 *     returns, via the pointers `pos` and `size` respectively, the starting
 *     index of the largest sequence of 1's in array v (formed only by 0's and 1's)
 *     and the number of 1's in that sequence.
 */