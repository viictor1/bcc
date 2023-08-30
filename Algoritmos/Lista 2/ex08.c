/*8. Escreva uma função que verifica se os elementos de um vetor estão em ordem crescente. A função
deve retornar 1 (true), caso os elementos estejam dispostos em ordem crescente, ou 0 (false), em
caso contrário.*/

#include <stdio.h>

int isSorted(int size, int vet[]){
    for(int i =0; i < size - 1; i++){
        if(vet[i] > vet[i + 1]){
            return 0;
        }
    }

    return 1;
}

int main(){
    int v[] = {1,4,7,9,15,22,48,12};
    int res = isSorted(8, v);
    printf("%d\n", res);
}