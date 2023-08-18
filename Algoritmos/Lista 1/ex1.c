/*1. Escreva uma programa que lê (pelo terminal) dois números inteiros (a e b) e informa:
a. Adição
b. Subtração (a menos b
*/
#include <stdio.h>

int main(){

    int a,b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);

    return 0;
}