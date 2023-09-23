//4. Escreva uma função que retorna a média aritmética simples de todos os elementos da matriz.

#include <stdio.h>

float average(int rows, int columns, int m[rows][columns]){
    int sum = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            sum += m[i][j];
        }
    }

    return sum / (rows * columns);
}

int main(){
    int mat[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    float avg = average(3, 3, mat);
    printf("Average: %f\n", avg);
    return 0;

}
