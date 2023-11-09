/*4. Escreva uma função que receba o endereço de uma string. A função deve retornar o endereço de
uma cópia reversa da string alocada na heap*/

#include <stdio.h>
#include <stdlib.h>

char* copyReverse(const char* str){
    int len = sizeof(str) / 2;
    char *copy = malloc(len * 2);
    int j = 0;

    for(int i = len-1; str[i] != 0; i--){
        copy[j] = str[i];
        j++;
    }

    return copy;
}

int main(){
    char *copy = copyReverse("Oiii");
    printf("%s\n", copy);
    free(copy);
    copy = NULL;
    return 0;
}