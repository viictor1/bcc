/*7. Escreva uma função que conta e devolve o número de palavras em uma string. Considere que
haverá somente um espaço entre as palavras.*/

#include <stdio.h>

int countWords(char s[]){
    int i = 0;
    int words = 0;
    while(s[i] != 0){
        if(s[i] == ' ' || s[i+1] == 0){
            words++;
        }
        i++;
    }

    return words;
}

int main(){
    int res = countWords("first things first, second things latter");
    printf("%d\n", res);
}