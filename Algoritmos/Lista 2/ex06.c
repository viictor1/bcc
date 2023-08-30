/*6. Escreva uma função que recebe um vetor vet de tamanho n e imprime apenas os valores pares.
void print_even(int n, int vet[])*/

#include <stdio.h>

void printEven(int size, int vet[]){
    for(int i = 0; i < size; i++){
        if(vet[i] % 2 == 0){
            printf("%d \n", vet[i]);
        }
    }
}

int main(){
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printEven(10, vet);
}