/*6. Escreva uma função que recebe um float e informa, separadamente:
a. O número com 2 casas de precisão;
b. A parte inteira e a parte decimal;
c. Sua representação em notação científica (mantissa/expoente)*/

#include <stdio.h>

void print_float(float num){
    printf("O número com 2 casas de precisão: %.2f\n", num);
    printf("A parte inteira: %d\n", (int)num);
    printf("A parte decimal: %f\n", num - (int)num);
    printf("A parte decimal: %e\n", num);
}

int main(){
    float num;

    printf("Digite um numero float: ");
    scanf("%f", &num);

    print_float(num);
}