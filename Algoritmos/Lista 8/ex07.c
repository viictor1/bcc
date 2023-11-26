/*7. Escreva uma função que receba um caminho de arquivo e escreva linhas de strings no mesmo. Ela
deve (re)criar o arquivo especificado. A função recebe um vetor de strings e cada uma deve ser
escrita em uma linha do arquivo. Retorna 1 para sucesso ou 0, em caso de erro.*/

#include <stdio.h>
#include <stdlib.h>


int addString(const char *filepath, const char** textLines){
    FILE *file = fopen(filepath, "w");
    if(!file) return 0;

    for(int i = 0; textLines[i] != 0; i++){
        fprintf(file, textLines[i]);
        fputc('\n', file);
    }

    fclose(file);
    return 1;
}

int main(){
    const char *lines[] = {"oiii", "rudo?", "bem"};
    int res = addString("filepath", lines);
    printf("%d\n", res);
}