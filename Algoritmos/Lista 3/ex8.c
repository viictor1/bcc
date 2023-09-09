/*8. Escreva uma função que conta e devolve o número de palavras em uma string. Considere que
poderá haver mais de um espaço entre as palavras, bem como, no início e final da string.*/

#include <stdio.h>

int countWordsHard(char s[]){
    int i = 0;
    int wordStarted = 0;
    int words = 0;

    while(s[i] != 0){
        if(wordStarted == 1 && s[i] == ' '){
            words++;
            wordStarted = 0;
        }else if(s[i] != ' '){
            wordStarted = 1;
        }

        i++;
    }

    return words;
}

int main(){
    char s[] = " first things first, second things latter ";
    printf("%d", countWordsHard(s)); 
}