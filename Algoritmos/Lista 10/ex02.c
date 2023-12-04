/*2. Escreva uma função que lê o conteúdo de um arquivo para um vetor de inteiros, alocado em heap.
A função deve retornar o endereço do vetor alocado na heap. O tamanho do vetor deve ser
retornado pela função pelo parâmetro 'n'. Caso o arquivo não exista, a função deve retornar NULL.*/

#include <stdio.h>
#include <stdlib.h>

int *readArray(const char *filepath, int *n){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    rewind(file);

    *n = size / sizeof(int);
    int *v = malloc(size);
    fread(v, sizeof(int), *n, file);
    fclose(file);
    return v;
}

void printArray(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int n;
    // lê arquivo 'dados.bin' para 'v'. Preenche o tamanho de 'v' em 'n'.
    int* v = readArray("dados.bin", &n);
    printArray(v, n);
    free(v);
}