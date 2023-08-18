/*4. Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Resto (utilizado o operador %)
b. Resto (sem utilizar o operador %)
i. Dica: Faça a divisão “no papel” e observe quais outras operações podem ser
utilizadas para obter o resto.*/

#include <stdio.h>

int main(){
    int a,b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("%d mod %d = %d\n", a, b, a % b);
    printf("%d mod %d = %d\n", a, b, (a - (a/b * b)));

    return 0;
}