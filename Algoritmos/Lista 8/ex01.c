/*1. Escreva uma função que verifica se o arquivo de caminho informado existe (retorna 1). Caso
contrário, retorna 0.*/

#include <stdio.h>
#include <stdlib.h>


int fileExists(const char *filepath){
    FILE *file = fopen(filepath, "r");
    if(!file){
        return 0;
    }
    return 1;

    fclose(file);
}

int main(){
    int res = fileExists("./biscoito.txt");
    printf("%d\n", res);
}