/*11. Escreva uma função que recebe um vetor vet de tamanho n e inverte os seus elementos (no
próprio vetor*/

#include <stdio.h>

void reverse(int n, int v[]){
    int aux = 0;

    for(int i = 0; i < n/2; i++){
        aux = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = aux;
    }
}

void printArray(int n, int v[]){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

int main(){
    int v[] = {1, 2, 3, 4, 5};
    reverse(5, v);
    printArray(5, v);
}