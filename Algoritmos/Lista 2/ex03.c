/*3. Escreva uma função que recebe um inteiro e o devolve invertido. Utilize "resto por 10" para extrair a
unidade e "divisão por 10" para remover a unidade.
int reverse_int(int a)*/

#include <stdio.h>

int reverseInt(int num){
    int digit = 0;
    int reversed = 0;

    while(num > 0){
        digit = num % 10;
        reversed *= 10;
        reversed += digit;
        num /= 10;
    }

    return reversed;
}

int main(){
    printf("%d\n", reverseInt(1234));
}

