/*3. Escreva uma função que recebe uma string e imprime seus caracteres separados por um outro
caractere, fornecido como segundo parâmetro da função. Note que o separador não deve ser
impresso ao final.*/

#include <stdio.h>

void printStringSeparated(char s[], char separator){
    int i = 0;
    while(s[i] != 0){
        printf("%c%c", s[i], separator);
        i++;
    }

    printf("\b \n");
}

int main(){
    printStringSeparated("hyphenated", '-');

    return 0;
}