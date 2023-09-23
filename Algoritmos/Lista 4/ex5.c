//5. Escreva uma função que inicia uma matriz com valores inteiros, iniciando em start e progredindo
//com step.

#include <stdio.h>

void initValues(int rows, int columns, int m[rows][columns], int start, int step){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            m[i][j] = start;
            start += step;
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
    int m[4][6];
    initValues(4, 6, m, 10, 2);
    printMatrix(4, 6, m);
}