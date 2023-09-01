/*23. Escreva uma função que recebe dois vetores v1 e v2 ordenados crescentemente. Ela deve mesclar
ordenadamente os conteúdos de v1 e v2, colocando em v3. Considere que v3 tem tamanho n1 +
n2. OBS: não é permitido mesclar e ordenar.*/

#include <stdio.h>

void arrayMerge(int size1, int v1[], int size2, int v2[], int v3[]){
    int size3 = 0;
    int lastv2 = 0;

    for(int i = 0; i < size1; i++){
        for(int j = lastv2; j < size2; j++){
            if(v1[i] <= v2[j]){
                v3[size3] = v1[i];
                size3++;
                break;
            }
            else{
                v3[size3] = v2[j];
                size3++;
                lastv2++;
            }
        }
    }

    while (lastv2 < size2){
        v3[size3] = v2[lastv2];
        size3++;
        lastv2++;
    }
}

void printArray(int size, int v[]){
    for(int i = 0; i < size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v1[] = {1, 3, 4, 7, 9, 10};
    int v2[] = {2, 3, 5, 7, 7, 14};
    int v3[12];

    arrayMerge(6, v1, 6, v2, v3);
    printArray(12, v3);
}