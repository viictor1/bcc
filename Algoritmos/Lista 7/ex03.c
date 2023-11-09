/*3. Escreva uma função que receba o endereço de uma string. A função deve retornar o endereço de
uma cópia da string alocada na heap.*/

#include <stdio.h>
#include <stdlib.h>

char *copyStr(const char *str){
    char *copy = malloc(sizeof(str));

    for(int i = 0; str[i] != 0; i++){
        copy[i] = str[i];
    }

    return copy;
}

int main(){
    char *copy = copyStr("oiii");
    printf("%s\n", copy);
    free(copy);
    copy = NULL;
    return 0;
}