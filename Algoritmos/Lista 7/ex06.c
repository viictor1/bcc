/*6. Escreva uma função que realize a união entre dois vetores, retornado o resultado em um vetor
alocado na heap.*/

#include <stdio.h>
#include <stdlib.h>

int *unions(int size1, const int *v1, int size2, const int *v2){
    int *retorno = malloc((size1 + size2) * sizeof(int));
    int index = 0;
    int k;

    for(int i = 0; i < size1; i++){
        k = 0;
        for(k = 0; k < index; k++){
            if(v1[i] == retorno[k]) break;
        }
        if(k == index){
            retorno[index] = v1[i];
            index++;
        }
        
    }

    for(int i = 0; i < size2; i++){
        k = 0;
        for(k = 0; k < index; k++){
            if(v2[i] == retorno[k]) break;
        }
        if(k == index){
            retorno[index] = v2[i];
            index++;
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
    int *resultado = unions(tamanho1, vetor1, tamanho2, vetor2);
    printVector(7, resultado);
    free(resultado);
    resultado = NULL;
}