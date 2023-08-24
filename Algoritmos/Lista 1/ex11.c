/*11. Escreva um programa que lê um caractere da entrada. Se não for letra, informa. Se for letra,
verifica se é maiúscula (e passa para maiúscula se necessário). Ao final, deve informar a letra
digitada em maiúsculo.*/

#include <stdio.h>

int main(){
    short carac;

    printf("Digite o char: ");
    scanf("%hd", &carac);

    if(carac >= 65 && carac <= 90){
        printf("Letra Maíscula!\n");
    }
    else if(carac >= 97 && carac <= 122){
        printf("Letra Minúscula!\n");
    }
    else{
        printf("Não é uma letra!\n");
    }
}