/*7. Escreva uma função que recebe um número de dias e informa a quantidade correspondente em:
anos + semanas + dias*/

#include <stdio.h>

void print_dias(int diasTotais){
    printf("Anos: %d\n", diasTotais / 365);
    printf("Semanas: %d\n", diasTotais % 365 / 7);
    printf("Dias: %d\n", diasTotais % 365 % 7);
}

int main(){
    int dias;

    printf("Digite o numero de dias totais: ");
    scanf("%d", &dias);

    print_dias(dias);

    return 0;
}