/*5. Escreva uma função que recebe uma string e a converte para letras maiúsculas. Atenção: a string
poderá conter letras maiúsculas e símbolos.*/

#include <stdio.h>

void stringUpper(char s[]){
    int i = 0;
    while(s[i] != 0){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
        }

        i++;
    }
}

int main(){
    char s[] = "All your BASE are Belong to US!";
    stringUpper(s);
    printf("%s\n", s); 
}