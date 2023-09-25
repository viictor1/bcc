//8. Escreva uma função que recebe uma matriz e coloca as somas de cada linha na última coluna.

#include <stdio.h>

void putTotals(int rows, int columns, int m[rows][columns]){
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(j == columns - 1){
                m[i][j] = sum;
                sum = 0;
                continue;
            }

            sum += m[i][j];
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
    int mat[4][5] = {
            { 1, 2, 3, 4, 0},
            { 2, 4, 6, 8, 0},
            { 3, 6, 9, 12, 0},// O último elemento de cada linha receberá a soma
            { 4, 8, 12,16, 0} // da linha.
    };
    putTotals(4, 5, mat);
    printMatrix(4, 5, mat);
}