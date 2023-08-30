/*9. Escreva uma função que recebe um vetor vet de tamanho n e devolve o maior valor contido no
vetor.*/

#include <stdio.h>

int findMax(int size, int vet[]){
    int maior = vet[0];
    for(int i = 0; i < size; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    return maior;
}

int main(){
    int v[] = {1, 2, 3, 0};
    printf("%d\n", findMax(3, v));
}