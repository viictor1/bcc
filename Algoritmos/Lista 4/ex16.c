/*16. Escreva uma função que verifica se uma matriz é simétrica e devolve 1 (true) ou 0 (false). Em uma
matriz simétrica os valores são espelhados em relação à diagonal principal. Considere que a matriz
é quadrada, com dimensões d*/

#include <stdio.h>

int checkSymetric(int d, int m[d][d]){
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            if(i != j){
                if(m[i][j] != m[j][i]) return 0;
            }
        }
    }
    return 1;
}

int main(){
   int mat[3][3] = {
            {1, 2, 3},
            {2, 4, 5},
            {3, 5, 8}
    };

    int res = checkSymetric(3, mat);
    printf("%d\n", res);    
}