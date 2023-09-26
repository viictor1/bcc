//2. Escreva uma função que troca as diagonais de uma matriz. Considere que a matriz é quadrada,
//com dimensões d.

#include <stdio.h>

void swicthDiagnals(int d, int m[d][d]){
    int swap = 0;

    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(i == j){
                swap = m[i][j];
                m[i][j] = m[i][d - 1 - i];
                m[i][d - 1 - i] = swap;
            }
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
    int mat[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    swicthDiagnals(3, mat);
    printMatrix(3, 3, mat);
}