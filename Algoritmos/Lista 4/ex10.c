//10. Escreva uma função que realiza a adição de duas matrizes m1 e m2, colocando o resultado em
//m3. Considere que todas as matrizes possuem as mesmas dimensões (rows x cols).

#include <stdio.h>

void sum(int rows, int columns, int m1[rows][columns], int m2[rows][columns], int m3[rows][columns]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
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
    int mat[3][2] = {
            {1, 3},
            {1, 0},
            {1, 2}
    };

    int mat2[3][2] = {
            {0, 0},
            {7, 5},
            {2, 1}
    };

    int mat3[3][2];

    sum(3, 2, mat, mat2, mat3);
    printMatrix(3, 2, mat3);
    return 0;
}