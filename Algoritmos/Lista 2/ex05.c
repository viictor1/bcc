/*5. Escreva uma função que recebe dois inteiros positivos (A e B) e retorna o MMC (Mínimo Múltiplo
Comum) entre ambos. O MMC é o menor número que resulta da multiplicação de A e B por algum
número (não necessariamente igual para ambos). Dica: teste os múltiplos do MAIOR(A, B), até
encontrar um que seja divisível pelo MENOR(A, B). OBS: Sempre há um MMC entre dois números
quaisquer*/

#include <stdio.h>

int mmc(int a, int b){
    int maior = (a > b) ? a : b;
    int menor = (a > b) ? b : a;

    for(int i = 1; i < maior; i++){
        if((maior * i) % menor == 0){
            return maior * i;
        }
    }

    return 1;
}

int main(){
    printf("%d\n", mmc(30, 12));
}

