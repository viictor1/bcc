/*8. Escreva uma função que receba um caminho de arquivo e retorna uma string (vetor de caracteres
terminado em nulo) alocada em heap contendo o conteúdo do arquivo. Caso ocorra algum
problema, retorna NULL*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getContent(const char *filepath){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    int strSize = 50;
    char *content = malloc(strSize * sizeof(char));

    char buffer[20];
    int bufferCounter = 0;

    while(fgets(buffer, 20, file) != 0){
        bufferCounter += strlen(buffer);
        if(bufferCounter >= strSize){
            strSize += bufferCounter;
            content = realloc(content, strSize * sizeof(char));
            if(!content) break;
        }
        strcat(content, buffer);
    }

    fclose(file);
    return content;
}

int main(){
    char *content = getContent("oi");
    printf("%s\n", content);
    free(content);
    return 0;
}