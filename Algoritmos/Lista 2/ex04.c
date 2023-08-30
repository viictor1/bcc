/*4. Escreva uma função que recebe dois inteiros positivos (A e B) e retorna o MDC (Máximo Divisor
Comum) entre ambos. O MDC é o maior número que divide A e B (divisão exata, de resto zero).
Dica: teste os divisores do MENOR(A, B) até encontrar o maior número que divide A e B.*/

#include <stdio.h>

int mdc(int a, int b){
    int menor = (a > b) ? b : a;
    int mdc = 1;

    for(int i = 2; i < menor; i++){
        if(a % i == 0 && b % i == 0){
            mdc = i;
        }
    }

    return mdc;
}

int main(){
    printf("%d\n", mdc(30, 12));
}