/*10. Escreva uma função que receba uma matriz na stack como entrada e retorne o endereço de sua
transposta, alocada na heap.*/

#include <stdio.h>
#include <stdlib.h>

int **transpose(int m, int n, int matrix[m][n]){
    int **retorno = malloc(n * sizeof(int*));

    for(int i = 0; i < n; i++){
        retorno[i] = malloc(m * sizeof(int));
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            retorno[j][i] = matrix[i][j];
        }
    }

    return retorno;
}

void printMatrix(int m, int n, int **matrix){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void freeMatrix(int m, int n, int **matrix){
    for(int i = 0; i < m; i++){
        free(matrix[i]);
    }
    free(matrix);
}

int main(){
    int matrix[2][4] = {0, 1, 2, 3,
                      4, 5, 6, 7};
    int ** transposed = transpose(2, 4, matrix);
    printMatrix(4, 2, transposed);
    freeMatrix(4, 2, transposed);
    return 0;
}