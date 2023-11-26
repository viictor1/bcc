/*22. Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a
intersecção entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho
min(n1, n2). Os vetores contém apenas números naturais (inteiros positivos) e v3 deve ser iniciado
com 0.*/

#include <stdio.h>

void printArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void arrayIntersec(int size1, int v1[], int size2, int v2[], int v3[]){
    int menor;
    int maior;
    int index = 0;

    if(size1 > size2){
        maior = size1;
        menor = size2;
    }
    else{
        maior = size2;
        menor = size1;
    }

    for(int i = 0; i < maior; i++){
        for(int j = 0; j < menor; j++){
            if(maior == size1){
                if(v1[i] == v2[j]){
                    v3[index] = v2[j];
                    index++;
                }
            }
            else{
                if(v2[i] == v1[j]){
                    v3[index] = v2[i];
                    index++;
                }
            }
        }
    }
}

int main(){
    int v2[5] = {1,2,3,4,8};
    int v1[4] = {1,3,5,8};
    int v3[3] = {0};
    arrayIntersec(5, v2, 4, v1, v3);
    printArray(3, v3);
    return 0;
}