//11. Escreva uma função que monta a transposta da matriz m1 em m2. Observe que deve haver uma
//compatibilidade entre as dimensões das matrizes.

#include <stdio.h>

void transpose(int rows, int columns, int m1[rows][columns], int rows2, int columns2, int m2[rows2][columns2]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            m2[j][i] = m1[i][j];
        }
    }
}

void printMatrix(int rows, int columns, int m[rows][columns]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m1[2][3] = {
            {1, 2, 3},
            {4, 5, 6},
    };
    int m2[3][2] = {0};

    transpose(2, 3, m1, 3, 2, m2);
    printMatrix(3, 2, m2);
}