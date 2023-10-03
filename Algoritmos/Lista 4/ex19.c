/*19. Escreva uma função que retorna a quantidade de palavras em um array de n linhas de texto
(strings de até len-1 letras). Considere que poderá haver mais de um espaço entre cada palavra,
bem como, espaços no início ou final de cada string.*/

#include <stdio.h>

int countWords(int size, int lenString, char lines[size][lenString]){
    int countWords = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < lenString; j++){
            if(lines[i][j] == ' '){
               if((lines[i][j-1] != ' '
                && lines[i][j+1] != ' ')){
                    countWords++;
                } 
            } 
        }

    }

    return countWords;
}

int main(){
    char v[2][200] = {
        " Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
        " Programming involves tasks such as analysis, generating algorithms, profiling algorithms accuracy and resource consumption, and the implementation of algorithms in a chosen programming language."
    };
    int count = countWords(2, 200, v);
    printf("Words: %d\n", count);
}