/*19. Considere as operações dos dois exercícios anteriores. Após algumas operações de inserção e
remoção, o vetor ficará repleto de “buracos”. Escreva uma função que recebe um vetor vet de
tamanho n. O vetor contém inteiros positivos e posições livres, marcadas com -1. A função deve
desfragmentar o vetor, colocando todos os valores válidos à esquerda*/

#include <stdio.h>

void arrayDefrag(int size, int v[]){
    int aux = 0;

    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(v[i] == -1 && v[j] != -1){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    return;
}

void printArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1};
    arrayDefrag(9, v);
    printArray(9, v);
}