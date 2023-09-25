//6. Escreva uma função que inicia uma matriz com valores aleatórios, sorteados entre min e max, isto
//é [min..max]. Utilize a função rand() da biblioteca <stdlib.h> para obter os valores

#include <stdlib.h>
#include <stdio.h>

void initRandom(int rows, int columns, int m[rows][columns], int min, int max){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            m[i][j] = (rand() % (max - min + 1)) + min;
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
    int v[4][6];
    initRandom(4, 6, v, 5, 50);
    printMatrix(4, 6, v);
}