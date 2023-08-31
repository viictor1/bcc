/*20. Escreva uma função que recebe três vetores e seus tamanhos. A função deve concatenar (juntar) o
conteúdo de v1 e v2 em v3. Considere que v3 tem tamanho n1 + n2. Os vetores contém apenas
inteiros positivos.*/

#include <stdio.h>

void arrayConcat(int size1, int v1[], int size2, int v2[], int v3[]){
    int size3;

    for(int i = 0; i < size1; i++){
        v3[i] = v1[i];
        size3++;
    }

    for(int i = 0; i < size2; i++){
        v3[size3] = v2[i];
        size3++;
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
    arrayConcat(5, v1, 3, v2, v3);
    printArray(8, v3);
}