/*4. Escreva uma função que receba um caminho de arquivo e retorna a quantidade de linhas de texto
contidas no arquivo. */

#include <stdio.h>
#include <stdlib.h>

int countLines(const char *filepath){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    char c;
    int lines = 0;

    while((c = fgetc(file)) != EOF){
        if(c == '\n') lines++;
    }

    return lines;
}

int main(){
    int res = countLines("./biscoito.txt");
    printf("%d\n", res);
}