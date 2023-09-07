/*1. Escreva uma função que recebe uma string (como parâmetro) e a imprime na tela, com cada
caractere separado por um espaço. Você não pode utilizar strlen().*/

#include <stdio.h>

void printString(char s[]){
    int i = 0;
    while(s[i] != 0){
        printf("%c ", s[i]);
        i++;
    }
    printf("\n");
}

int main(){
    printString("oiii");
}