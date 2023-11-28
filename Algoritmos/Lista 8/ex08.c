/*8. Escreva uma função que receba um caminho de arquivo e retorna uma string (vetor de caracteres
terminado em nulo) alocada em heap contendo o conteúdo do arquivo. Caso ocorra algum
problema, retorna NULL.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* file = fopen("dados.txt", "r");
    if(!file){
        printf("errooou\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long tamanho = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *text = malloc(tamanho * sizeof(char));
    fgets(text, tamanho + 1, file);


    printf("Tamanho do arquivo:%ld\n", tamanho);
    printf("String: %s\n", text);

    fclose(file);
    free(text);
    return 0;
}