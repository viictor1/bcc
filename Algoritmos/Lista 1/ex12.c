/*12. Escreva um programa que lê um caractere e informa:
a. Se é letra e, neste caso, também informa se é vogal ou consoante;
b. Se é número;
c. Se é símbolo (ASCII 33 ao 126, exceto números e símbolos).*/

#include <stdio.h>
int main(){
    char carac;

    printf("Digite um char: ");
    scanf("%c", &carac);

    if((carac >= 65 && carac <= 90) || (carac >= 97 && carac <= 122)){
        printf("É uma letra ");
        if (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' ||
            carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U') {
            printf("vogal!\n");
        } else {
            printf("consoante!\n");
        }
    }
    else if (carac >= '0' && carac <= '9') {
        printf("É um número.\n");
    }
    else if (carac >= 33 && carac <= 126) {
        printf("É um símbolo.\n");
    }
    else {
        printf("Caractere inválido.\n");
    }

    return 0;
    
}