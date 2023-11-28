/*10. Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
todas as palavras do arquivo. A string de separadores é passada como argumento à função. "Caso
ocorra algum problema, retorna NULL.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* file = fopen("texto.txt", "r");
    const char* separators = " ,;.:?!-";

    if(!file){
        printf("errooou\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long tamanho = ftell(file) + 1;
    fseek(file, 0, SEEK_SET);

    char **text = malloc(100 * sizeof(char*));
    for(int i = 0; i < 100; i++){
        text[i] = malloc(50 * sizeof(char));
    }

    int isSeparator = 0;
    char lastChar;

    for(int i = 0; i < 30; i++){
        fscanf(file, "%s", text[i]);
        lastChar = text[i][strlen(text[i]) -1];
        for(int j = 0; j < strlen(separators); j++){
            if(lastChar == separators[j]){
                text[i][strlen(text[i])-1] = 0;
            }
        }
        printf("%s\n", text[i]);
    }

    fclose(file);
    free(text);
    return 0;
}