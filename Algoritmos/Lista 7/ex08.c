/*8. Escreva uma função que recebe o endereço e as dimensões de uma matriz alocada na heap. A
função deve imprimir seu conteúdo. Lembre-se: dentro da função, o acesso aos elementos da
matriz v ocorre normalmente por meio do operador de índice. Ex: v[0][2].*/

#include <stdio.h>
#include <stdlib.h>

void print2DVector(int m, int n, int **v){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m = 2;
    int n = 3;
    int k = 0;
    
    int **matrix = malloc(sizeof(int *) * m);
    for(int i = 0; i < m; i++){
        matrix[i] = malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            matrix[i][j] = k;
            k++;
        }
    }

    print2DVector(m, n, matrix);

    for(int i = 0; i < m; i++){
        free(matrix[i]);
    }

    free(matrix);

}