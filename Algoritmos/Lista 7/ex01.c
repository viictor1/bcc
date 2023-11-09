/*1. Escreva uma função que aloca na heap um array de inteiros de tamanho n, preenchido com zeros,
e retorna seu endereço*/

#include <stdio.h>
#include <stdlib.h>

int *createVector(int n){
    int *v = malloc(n * sizeof(int));

    return v;    
}

void printVector(int size, int *v){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int *v = createVector(5);
    printVector(5, v);
    free(v);
    v = NULL;
}