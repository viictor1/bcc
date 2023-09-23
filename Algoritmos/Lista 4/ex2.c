//2. Escreva uma função que imprime o conteúdo de uma matriz ao contrário, isto é, do último elemento
//para o primeiro. Considerando a matriz do exemplo anterior, a função imprimiria do 9 ao 1

#include <stdio.h>

void printReversed(int rows, int columns, int m[rows][columns]){
    for(int i = rows - 1; i >= 0; i--) {
        for (int j = columns - 1; j >= 0; j--) {
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
    printReversed(3, 3, mat);
    return 0;
}