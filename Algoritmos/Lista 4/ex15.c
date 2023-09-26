//15. Escreva uma função que verifica se uma matriz é identidade e devolve 1 (true) ou 0 (false).

#include <stdio.h>

int checkIdentity(int rows, int columns, int m[rows][columns]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(i == j && m[i][j] != 1) return 0;
            if(i != j && m[i][j] != 0) return 0;
        }
    }
    return 1;
}

int main(){
    int m[3][3] = {
            1, 0, 0,
            0, 1, 0,
            0, 0, 1
    };
    int res = checkIdentity(3, 3, m);
    printf("%d\n", res);
}