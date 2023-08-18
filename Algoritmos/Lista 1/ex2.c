/*2. Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Multiplicação
b. Divisão inteira (a dividido por b)
c. Divisão float (a dividido por b)*/
#include <stdio.h>

int main(){

    int a,b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d mod %d = %d\n", a, b, a % b);

    return 0;
}