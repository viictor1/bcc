/*5. Escreva uma função que imprime a tabuada de um número informado. Dica: lembre-se que você
pode alinhar os valor na saída com %2d (dois dígitos, alinhados à direita)*/

#include <stdio.h>

void print_mult_tabuada(int num){
    printf("%2d * 1 = %-2d \n", num, num * 1);
    printf("%2d * 2 = %-2d \n", num, num * 2);
    printf("%2d * 3 = %-2d \n", num, num * 3);
    printf("%2d * 4 = %-2d \n", num, num * 4);
    printf("%2d * 5 = %-2d \n", num, num * 5);
    printf("%2d * 6 = %-2d \n", num, num * 6);
    printf("%2d * 7 = %-2d \n", num, num * 7);
    printf("%2d * 8 = %-2d \n", num, num * 8);
    printf("%2d * 9 = %-2d \n", num, num * 9);
    printf("%2d * 10= %-2d \n", num, num * 10);
}

int main(){
    int num;
    printf("Digite um número para calcular sua tabuada: ");
    scanf("%d", &num);

    print_mult_tabuada(num);
    return 0;
}