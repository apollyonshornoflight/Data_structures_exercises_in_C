#include <stdio.h>

int main()
{
    int distances[5][5] = {
        { 0, 10,  7, 15, 50},
        {10,  0, 15,  8, 45},
        { 7, 15,  0, 20, 55},
        {15,  8, 20,  0, 40},
        {50, 45, 55, 40,  0}
    };

    const char *cities[] = {"Vitória", "Vila Velha", "Cariacica", "Serra", "Guarapari"};
    int calc = 0;
    int pathlen;
    
    //Input
    printf("Type the number of cities in circuit: ");
    scanf("%d", &pathlen);
    int path[pathlen];

    printf("Type the circuit with a sequence of indexs: ");
    for (int i = 0; i < pathlen; i++) {
        scanf("%d", &path[i]); 
    }

    //Processing
    for (int i = 0; i < pathlen - 1; i++) {
        calc += distances[path[i]][path[i+1]]; 
    }

    //Output
    printf("\nCircuit: ");
    for (int i = 0; i < pathlen; i++) {
        printf("%s", cities[path[i]]);
        
        if (i < pathlen - 1) {
            printf(" -> ");
        }
    }
    
    printf("\n");
    printf("Total distance traveled: %d km\n", calc);

    return 0;
}


/**
 * 83. Consider Table 1 which relates distances between 5 cities in Espírito
 *     Santo. The table in question can be modeled using a 5 x 5 matrix.
 *     Consider the following circuit (route passing through all cities):
 *     Vitória (Position 0) -> Serra (Position 3) -> Cariacica (Position 2) ->
 *     Vila Velha (Position 1) -> Guarapari (Position 4) -> Vitória (Position 5).
 *     Write a program that:
 *
 *     - Declares a matrix with the values of said table;
 *     - Reads a circuit as an array of indices;
 *     - Prints the total distance traveled.
 */