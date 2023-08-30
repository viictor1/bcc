/*2. Escreva uma função que recebe um inteiro positivo e imprime seus fatores primos (e quantidades).
void print_factors(int a)*/

#include <stdio.h>

void printFactors(int num){
    int i = 2;
    int cont = 0;

    while (num > 1){
        if(num % i == 0){
            cont ++;
            num = num/i;
        }
        else 
        {   if(cont > 0){
                printf("Quantidade de %d: %d\n", i, cont);
                cont = 0;
            }
            i++;
        }
    }

    printf("Quantidade de %d: %d\n", i, cont);
}

int main(){
    printFactors(132);
}