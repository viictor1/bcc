/*24. Escreva uma função que recebe um vetor contendo números inteiros. Ela deve determinar o
segmento de soma máxima e imprimi-lo.*/

#include <stdio.h>

void maxSumSlice(int size, int v[]){
    int maxSum = 0;
    int sum = 0; 
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            for(int k = i; k < j; k++){
                sum += v[k];
                printf("%d ", v[k]);
            }
            printf("\n");
            if(sum > maxSum){
                maxSum = sum;
            }
            sum = 0;

        }
    }

    printf("Max Sum: %d\n", maxSum);
}

int main(){
    int v[] = {5, 2, -2, -7, 3, 14, 10, -3, 9, -6, 4, 1};
    maxSumSlice(12, v);
}