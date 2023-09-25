//9. Escreva uma função que verifica a igualdade entre duas matrizes. Ele deve retornar 1 (true) se as
//matrizes forem iguais ou 0 (false), caso sejam diferentes. Matrizes iguais possuem os mesmos
//elementos e as mesmas dimensões.

#include <stdio.h>

int matrixEquals(int rows1, int columns1, int m1[rows1][columns1], int rows2, int columns2, int m2[rows2][columns2]){
    if(rows1 != rows2 || columns1 != columns2) return 0;

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < columns1; j++){
            if(m1[i][j] != m2[i][j]) return 0;
        }
    }

    return 1;
}

int main(){
    int mat[3][3] = { // 3 linhas x 3 colunas
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    int mat2[3][3] = { // 3 linhas x 3 colunas
            {1, 2, 3},
            {4, 5, 6}
    };

    int result = matrixEquals(3, 3, mat, 2, 3, mat2);
    printf("Resultado: %d\n", result);
    return 0;
}