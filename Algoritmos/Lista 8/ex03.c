/*3. Escreva uma função que receba um caminho de arquivo e imprima seu conteúdo no terminal.
Retorna 1 para sucesso ou 0, caso o arquivo não exista.*/

#include <stdlib.h>
#include <stdio.h>

int printContent(const char* filepath){
    FILE *file = fopen(filepath, "r");
    if(!file){
        return 0;
    }

    char c;
    while((c = fgetc(file)) != EOF){
        printf("%c", c);
    }

    fclose(file);
    return 1;
}

int main(){
    int res = printContent("./biscoito.txt");
    printf("%d\n", res);
}