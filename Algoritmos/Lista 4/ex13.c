//13. Escreva uma função que cria o Triângulo de Pascal em uma matriz e depois o imprime. A função
//deve receber o número de linhas desejado para o triângulo.

#include <stdio.h>

void printMatrix(int rows, int columns, int m[rows][columns]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void pascalTriangle(int n){
    int m[n][n+1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n+1; j++){
            m[i][j] = 0;
        }
    }
    m[0][1] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[i+1][j+1] = m[i][j] + m[i][j+1];
        }
    }

    printMatrix(n, n+1, m);
}

int main(){
    pascalTriangle(5);
}