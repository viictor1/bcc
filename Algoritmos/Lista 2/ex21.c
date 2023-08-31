/*21. Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a união
entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho n1 + n2. Os
vetores contém apenas inteiros positivos e v3 deve ser iniciado com 0.*/

#include <stdio.h>

void arrayUnion(int size1, int v1[], int size2, int v2[], int v3[]){
    int size3 = 0;

    for(int i = 0; i < size1; i++){
        v3[i] = v1[i];
        size3++;
    }

    short contains;

    for(int i = 0; i < size2; i++){
        contains = 0;
        for(int j = 0; j < size1; j++){
            if(v2[i] == v1[j]){
                contains = 1;
                break;
            }
        }
        if(contains == 0){
            v3[size3] = v2[i];
            size3++;
        }
    }
}

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

int main(){
    int v1[5] = {1,2,3,4,5};
    int v2[3] = {2,3,8};
    int v3[8];
    initiateArray(8, v3);
    arrayUnion(5, v1, 3, v2, v3);
    printArray(8, v3);
}