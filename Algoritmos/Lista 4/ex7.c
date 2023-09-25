//7. Escreva uma função que retorna o total da linha de maior soma em uma matriz. A função deve
//somar todos os elementos em cada linha da matriz, para então encontrar a linha de maior soma.

#include <stdio.h>

int maxLine(int rows, int columns, int m[rows][columns]){
    int line = 0;
    int maxLine = line;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            line += m[i][j];
        }
        if(line > maxLine) maxLine = line;
        line = 0;
    }

    return maxLine;
}

int main(){
    int mat[5][5] = {
            { 1, 2, 3, 4, 5}, // soma: 15
            { 2, 4, 6, 8,10}, // soma: 30 ← esta linha possui a maior soma
            { 1, 2, 3, 4, 7}, // soma: 17
            { 2, 0, 6, 1,10}, // soma: 19
            { 7, 3, 4, 0, 0} // soma: 14
    };
    int res = maxLine(5, 5, mat);
    printf("Maior soma: %d\n", res);
    return 0;
}
