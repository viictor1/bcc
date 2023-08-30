/*1. Escreva uma função que recebe um inteiro positivo e verifica se o mesmo é um Número Perfeito.
Um número perfeito é igual à soma de seus divisores positivos. Exemplo: 6 = 1 + 2 + 3. A função
deve retornar 1 (número perfeito) ou 0 (não é número perfeito).
int is_perfect_number(int a)*/

#include <stdio.h>

int isPerfectNumber(int num){
    int testPerfect = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            testPerfect += i;
        }
    }
    if(testPerfect == num){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    printf("%d\n", isPerfectNumber(6));
    printf("%d\n", isPerfectNumber(7));
}