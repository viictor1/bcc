/*16. Escreva uma função que recebe dois vetores (vet1 e vet2) de mesmo tamanho n. A função deve
copiar todos os elementos de vet1 para vet2.*/

#include <stdio.h>

void copyArray(int size, int v1[], int v2[]){
    for(int i = 0; i < size; i++){
        v2[i] = v1[i];
    }
}

void printArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v1[] = {1, 2, 3, 4, 5};
    int v2[5];

    copyArray(5, v1, v2);
    printArray(5, v1);
    printArray(5, v2);
}