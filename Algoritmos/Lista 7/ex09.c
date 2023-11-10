/*9. Escreva uma função que aloca na heap uma matriz de inteiros de dimensões mxn e retorna o seu
endereço. A matriz deve ser preenchida com uma sequência crescente de inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int m, int n){
    int **matrix = malloc(m * sizeof(int*));
    int count = 0;

    for(int i = 0; i < m; i++){
        matrix[i] = malloc(n * sizeof(int));
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = count;
            count++;
        }
    }

    return matrix;
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
    int **matrix = createMatrix(4, 3);
    printMatrix(4, 3, matrix);
    freeMatrix(4, 3, matrix);
    return 0;
}