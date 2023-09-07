/*2. Escreva uma função que recebe uma string e a imprime ao contrário (da direita para esquerda).
Faça duas versões da função: uma utilizando strlen() <string.h>, e outra, sem utilizar a função.*/

#include <stdio.h>

int lengthString(char s[]){
    int i = 0;
    while(s[i] != 0){
        i++;
    }

    return i;
}

void printReversedString(char s[]){
    int length = lengthString(s);

    for(int i = length - 1; i >= 0; i--){
        printf("%c", s[i]);
    }    
}

int main(){
    printReversedString("oiii");
}