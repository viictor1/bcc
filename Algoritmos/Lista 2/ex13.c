/*13. Escreva uma função que recebe um vetor vet de tamanho n preenchido com inteiros positivos. A
função deve imprimir as ocorrências (contagem) de cada número no vetor. Dica: utilize um vetor
count para armazenar a contagem de cada elemento no vetor vet, relacionando as posições de
count aos valores em vet.*/

#include <stdio.h>

int maxElementArray(int size, int v[]){
    int maior = v[0];
    for(int i = 0; i < size; i++){
        if(maior < v[i]){
            maior = v[i];
        }
    }
    return maior;
}

void initializeArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        v[i] = 0;
    }
}

void printCountedElements(int n, int v[]){
    for(int i = 0; i < n; i++){
        if(v[i] != 0){
           printf("%d: %d \n", i, v[i]);    
        }
    }
}

void countElements(int size, int v[]){
    int max = maxElementArray(size, v) + 1;
    int count[max];
    initializeArray(max, count);

    for(int i = 0; i < size; i++){
        count[v[i]] ++;
    }

    printCountedElements(max, count);
}

int main(){
    int v[] = {1, 1, 5, 5, 5, 5, 6, 7, 9, 10};
    countElements(10, v);
    return 0;
}