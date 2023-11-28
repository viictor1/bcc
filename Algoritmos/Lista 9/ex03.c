/*3. Escreva uma função que imprime a contagem de palavras por quantidade de letras, de um arquivo.
A contagem deve ser informada em ordem crescente de quantidade de letras.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reportByChars(const char *filepath){
    FILE *file = fopen(filepath, "r");
    if(!file) return;

    int letras[45] = {0};

    char *str = malloc(44 * sizeof(char));
    while(fscanf(file, "%s", str) != EOF){
        letras[strlen(str)]++;
    }

    for(int i = 0; i < 45; i++){
        if(letras[i] != 0){
            printf("%d letras: %d\n", i, letras[i]);
        }
    }

    fclose(file);
    free(str);
}

int main(){
    reportByChars("dados");
}