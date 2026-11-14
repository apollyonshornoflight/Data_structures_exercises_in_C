#include <stdio.h>

int are_equal(int v1[], int v2[], int n1, int n2){
    if (n1 != n2) return 0;
    else {
        for (int i = 0; i < n1; i++)
        {
            if (v1[i] != v2[i]) return 0;
        }
        return 1;
        
    }
}


/**
 * 64. Elaborate a function with the signature
 *     `int sao_iguais(int v1[], int v2[], int n1, int n2)` that returns 1 if
 *     vector v1, with n1 elements, is equal to v2, which has size n2.
 *     Otherwise, your program should return 0.
 */