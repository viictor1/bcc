/*22. Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a
intersecção entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho
min(n1, n2). Os vetores contém apenas números naturais (inteiros positivos) e v3 deve ser iniciado
com 0.*/

#include <stdio.h>

void initiateArray(int size, int v[]){
    for(int i =0; i < size; i++){
        v[i] = 0;
    }
}

void printArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void arrayIntersec(int size1, int v1[], int size2, int v2[], int v3[]){
    if(size1 > size2){
        for(int i = 0; i < size2; i++){
            for(int j = 0; j < size1; j++){
                if(v2[i] == v1[j]){
                    v3[i] = v2[i];
                }
            }
        }
    }
    else{
        for(int i = 0; i < size1; i++){
            for(int j = 0; j < size2; j++){
                if(v1[i] == v2[j]){
                    v3[i] = v1[i];
                }
            }
        }
    }

}

int main(){
    int v2[5] = {1,2,3,4,5};
    int v1[3] = {2,3,8};
    int v3[3] = {0};
    arrayIntersec(3, v1, 5, v2, v3);
    printArray(3, v3);
}