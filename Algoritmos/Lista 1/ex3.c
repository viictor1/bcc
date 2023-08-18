/*
3. Escreva um programa que lê o raio (r) de um círculo. O programa deve informar: o diâmetro (2r), a
circunferência (2πr) e a área do círculo (πr2). Crie uma macro: #define PI 3.14159
*/

#include <stdio.h>

#define PI 3.14159

int main(){
    int raio;

    printf("Digite o raio do circulo: ");
    scanf("%d", &raio);

    printf("Diâmetro: %d\n", raio * 2);
    printf("Circunferência: %f\n", raio * 2 * PI);
    printf("Área: %f\n", ((raio * raio) * PI));
}