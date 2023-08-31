/*17. Um vetor pode ser utilizado como uma lista que permite inserções e remoções de números inteiros
positivos. No vetor, o valor -1 indica posição vazia (disponível). Escreva uma função que recebe um
vet1 de tamanho n e um novo elemento. A função deve inserir o novo elemento na primeira
posição válida disponível, isto é, marcada com -1. Caso não haja alguma posição disponível, a
inserção deve ser cancelada.*/

#include <stdio.h>

void arrayInsert(int size, int v[], int elem){
    for(int i = 0; i < size; i++){
        if(v[i] == -1){
            v[i] = elem;
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
    arrayInsert(9, v, 18); // v = {1, 6, 18, 9, 4, -1, -1, 2, -1}
    printArray(9, v);
    arrayInsert(9, v, 7);
    printArray(9, v);
}