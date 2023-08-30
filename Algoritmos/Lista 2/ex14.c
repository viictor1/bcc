/*14. Escreva uma função que recebe um valor inteiro value e um vetor notes com as possíveis cédulas.
A função deve imprimir a quantidade mínima de cédulas equivalente ao valor.
Dica: use um vetor auxiliar count para armazenar a contagem de cada cédula.*/

#include <stdio.h>

void minBills(int value, int size, int bills[]){
    int count = 0;
    int i = size - 1;

    while(value > 0){
        if(value >= bills[i]){
            count ++;
            value -= bills[i];
        }
        else{
            printf("%d x %d\n", count, bills[i]);
            i--;
            count = 0;
        }
    }

    printf("%d x %d\n", count, bills[i]);

    return;
}

int main(){
    minBills(209, 5, (int[]){1,5,10,50,100});
}