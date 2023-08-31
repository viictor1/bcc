/*18. Considerando o mesmo formato de lista do exercício anterior, escreva uma função que recebe um
vet1 de tamanho n e uma posição. A função deve “remover” o elemento da lista, marcando a
posição com -1. Caso a posição seja inválida, nenhuma operação deve ser realizada.*/

#include <stdio.h>

void arrayRemove(int size, int v[], int elem){
    for(int i = 0; i < size; i++){
        if(v[i] == elem){
            v[i] = -1;
            return;
        }
    }
}

void printArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1};
    arrayRemove(9, v, 1); // v = {1, 6, 18, 9, 4, -1, -1, 2, -1}
    printArray(9, v);
    arrayRemove(9, v, 9);
    printArray(9, v);
}