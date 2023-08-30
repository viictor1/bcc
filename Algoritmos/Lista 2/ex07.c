/*7. Escreva uma função que recebe um vetor vet de tamanho n contendo números inteiros positivos e
negativos. A função deve inverter o sinal dos números negativos, passando-os para positivo*/

#include <stdio.h>

void setPositive(int size, int vet[]){
    for(int i = 0; i < size; i++){
        if(vet[i] < 0){
            vet[i] = -vet[i];
        }
        printf("%d\n", vet[i]);
    }
}

int main(){
    int vet[] = {-1, 2, -4, -6, 9};
    setPositive(5, vet);
}