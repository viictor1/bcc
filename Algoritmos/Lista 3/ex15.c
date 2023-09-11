/*15. Escreva uma função que converte um número inteiro (parâmetro de entrada number) para uma
string (parâmetro de saída converted).*/

#include <stdio.h>

void intToString(int number, char converted[]){
    int n = number;
    int digit = 0;
    int i = 0;
    int length = 0;

    while(n > 0){
        n = n / 10;
        length++;
    }

    n = number;

    while(n > 0){
        digit = n % 10;
        n = n / 10;
        converted[length - i] = digit + 48;
        i++;
    }
}

int main(){
    char num[11];
    intToString(512, num);
    printf("%s", num); // saída: “512” (string)
}