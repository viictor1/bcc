//3. Escreva uma função que encontra e imprime o maior e o menor valores contidos em uma matriz.

#include <stdio.h>

void printMinMax(int rows, int columns, int m[rows][columns]){
    int min = m[0][0];
    int max = m[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(m[i][j] > max){
                max = m[i][j];
            }
            else if(m[i][j] < min){
                min = m[i][j];
            }
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}

int main(){
    int mat[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    printMinMax(3, 3, mat);
    return 0;
}