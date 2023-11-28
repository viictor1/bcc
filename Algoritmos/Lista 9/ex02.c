/*2. Escreva uma função que substitui todas as ocorrências de uma dada palavra por outra, em um
arquivo. A função deve retornar a quantidade de substituições realizadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWord(const char *filepath, const char *oldStr, const char *newStr){
    FILE *file = fopen(filepath, "r+");
    if(!file) return 0;

    char *string = malloc(50 * sizeof(char));
    int count = 0;

    while((fscanf(file, "%s", string)) != EOF){
        if(strcmp(string, oldStr)) continue;

        fseek(file, -strlen(oldStr), SEEK_CUR);
        fprintf(file, "%s", newStr);
        count++;

    }

    free(string);
    fclose(file);
    return count;
}

int main(){
    int res = countWord("dados", "cara", "novo");
    printf("%d\n", res);
}