/*11. Escreva uma função que recebe uma string e imprime o número de ocorrências de cada letra da
tabela ASCII (26 possibilidades), bem como, seu percentual sobre o todo (desconsiderando
espaços). A contagem deve desconsiderar letras maiúsculas e minúsculas.*/

#include <stdio.h>

void toLower(char s[]){
    int i = 0;
        while(s[i] != 0){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] +=32;
            }

            i++;
        }
}

void printCount(int size, int a[], int stringSize){
    for(int i = 0; i < size; i++){
        printf("%c: x%d (%d%%)\n", i+97, a[i], (a[i]*100)/stringSize);
    }
}

void countLetters(char s[]){
    toLower(s);
    int count[26] = {0};
    int stringSize = 0;

    int i = 0;
    while(s[i] != 0){
        if(s[i] >= 'a' && s[i] <= 'z'){
            count[s[i] - 97]++;
            stringSize++;
        }

        i++;
    }

    printCount(26, count, stringSize);
}

int main(){
    char s[] = "Hello World of Software Development";
    countLetters(s);
}