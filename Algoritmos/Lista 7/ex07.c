/*7. Escreva uma função que realize a intersecção entre dois vetores, retornado o resultado em um
vetor alocado na heap.*/

#include <stdio.h>
#include <stdlib.h>

int *intersect(int size1, const int *v1, int size2, const int *v2){
    int size = size1 < size2 ? size1 : size2;
    int *retorno = malloc(sizeof(int) * size);
    int index = 0;

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(v1[i] == v2[j]){
                int k = 0;
                for(k = 0; k < size; k++){
                    if(v1[i] == retorno[k]) break;
                }
                if(k == size){
                    retorno[index] = v1[i];
                    index++;
                }
            }
        }
    }

    return retorno;
}

void printVector(int size, int *v){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int vetor1[] = {1, 2, 3, 4, 5};
    int tamanho1 = 5;
    
    int vetor2[] = {3, 4, 5, 6, 7};
    int tamanho2 = 5;
    
    int tamanhoResultado;
    int *resultado = intersect(tamanho1, vetor1, tamanho2, vetor2);
    printVector(5, resultado);
    free(resultado);
    resultado = NULL;
}