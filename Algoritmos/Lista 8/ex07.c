/*7. Escreva uma função que receba um caminho de arquivo e escreva linhas de strings no mesmo. Ela
deve (re)criar o arquivo especificado. A função recebe um vetor de strings e cada uma deve ser
escrita em uma linha do arquivo. Retorna 1 para sucesso ou 0, em caso de erro*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* file = fopen("dados.txt", "w");
    if(!file){
        printf("errooou\n");
        return 1;
    }

    const char *lines[] = {"oi", "tudo", "bem"};
    int arraySize = sizeof(lines) / sizeof(char*);

    for(int i = 0; i < arraySize; i++){
        fprintf(file, "%s\n", lines[i]);
    }


    fclose(file);
    return 0;
}