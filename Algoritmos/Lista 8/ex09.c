/*9. Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
todas as palavras do arquivo. Considere como separadores de palavras o caractere de espaço e a
quebra de linha '\n'. "Caso ocorra algum problema, retorna NULL.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* file = fopen("dados.txt", "r");
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

    for(int i = 0; i < tamanho; i++){
        fscanf(file, "%s", text[i]);
    }

    fclose(file);
    free(text);
    return 0;
}