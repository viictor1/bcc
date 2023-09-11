/*16. Escreva uma função que converte uma string para um inteiro. Utilize a notação posicional para
montar o número inteiro. Ex: 2506 = 2 x 103 + 5 x 102 + 0 x 101 + 6 x 100.
int string_to_int(char textNumber[])
Ex: int n = string_to_int(“1024”);
printf(“%d”, n); // saída: 1024 (inteiro)*/

#include <stdio.h>

int stringToInt(char s[]){
    int number = 0;
    int digit = 0;
    int length = -1;
    int i = 0;

    for(int i = 0; s[i] != 0; i++){
        length++;
    }

    for(int i = 0; s[i] != 0; i++){
        digit = s[i] - 48; 
        for(int j = length - i; j > 0; j--){
            digit *= 10;
        }
        number += digit;
        digit = 0;
    }

    return number;
}

int main(){
    int n = stringToInt("1024");
    printf("%d", n); // saída: 1024 (inteiro)
}