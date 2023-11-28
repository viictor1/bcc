/*1. Escreva uma função que conta todas as ocorrências de uma dada palavra, em um arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWord(const char *filepath, const char *word){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    char *string = malloc(50 * sizeof(char));
    int count = 0;

    while((fscanf(file, "%s", string)) != EOF){
        if(!strcmp(string, word)){
            count++;
        }
    }

    free(string);
    fclose(file);
    return count;
}

int main(){
    int res = countWord("dados", "oi");
    printf("%d\n", res);
}