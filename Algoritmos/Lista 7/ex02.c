/*2. Escreva uma função que receba um vetor de inteiros e seu tamanho n. A função deve retornar o
endereço de um novo vetor, alocado na heap, contendo os max maiores elementos contidos no
vetor original. OBS: você pode modificar o conteúdo do vetor original, se necessário.*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int getMax(int size, int *v){
    int *start = &v[0];
    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(v[i] > max) {
            max = v[i];
            v[i] = INT_MIN;
        }
    }

    v = start;
    return max;
}

int* getLargests(int size, int *v, int max){
    int *vmax = malloc(max * sizeof(int));

    for(int i = 0; i < max; i++){
        vmax[i] = getMax(size, v);
    }

    return vmax;
}

void printVector(int size, int *v){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v[] = {6,10,2,1,2,3,9};
    int *vmax = getLargests(7, v, 2);
    printVector(2, vmax);
    free(vmax);
    vmax = NULL;

    return 0;
}