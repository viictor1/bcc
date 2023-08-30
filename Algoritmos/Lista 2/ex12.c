/*12. Escreva uma função que faz a leitura de n números inteiros e os coloca no vetor vet fornecido.
Considere que o vet possui tamanho n.*/

#include <stdio.h>

void arrayReader(int size, int v[]){
    for(int i = 0; i < size; i++)
    {
        printf("Digite a posição %d: ", i);
        scanf("%d", &v[i]);
    }
}

void printArray(int n, int v[]){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

int main(){
    int n = 0;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int v[n];
    arrayReader(n, v);
    printArray(n, v);
}