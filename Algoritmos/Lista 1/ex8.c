/*8. Escreva uma função que recebe um inteiro representando um ano e retorna se o mesmo é
bissexto. A função deve retornar 1 (true) para bissexto ou 0 (false), em caso contrário. Para um ano
ser bissexto (leap year), ele precisa:
a. Ser divisível por 4 e não divisível por 100, OU, ser divisível por 400.*/

#include <stdio.h>

int isGapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int year;

    printf("Digite o ano: ");
    scanf("%d", &year);

    printf("%d\n", isGapYear(year));

    return 0;
}