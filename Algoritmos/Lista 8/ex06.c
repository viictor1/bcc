/*. Escreva uma função que receba um caminho de arquivo e acrescenta uma string no mesmo. A
função deve criar o arquivo especificado, caso não exista. Retorna 1 para sucesso ou 0, em caso
de erro. Dica: observe o modo de abertura 'a' (slide no. 5 do material).*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int appendString(const char* filepath, const char* text){
    char *caminho = malloc(sizeof(char) * (strlen(filepath) + strlen(text)));
    strcat(caminho, filepath);
    strcat(caminho, text);

    FILE *file = fopen(caminho, "a");
    if(!file){
        printf("deu ruim\n");
        return 0;
    }

    free(caminho);
    fclose(file);

    return 1;

}

int main(){
    const char* filepath = "bis";
    int result = appendString(filepath, "coito");
    printf("%d\n", result);
}