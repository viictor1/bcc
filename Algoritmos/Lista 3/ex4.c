/*4. Escreva uma função que recebe uma string e imprime:
a. A quantidade de letras (maiúsculas ou minúsculas);
b. A quantidade de dígitos;
c. A quantidade de símbolos.
OBS: considere apenas a porção dos caracteres imprimíveis da tabela ASCII, isto
é, dos índices 32 ao 126.*/

#include <stdio.h>

void stringReport(char s[]){
    int i = 0;
    int qtd[] = {0, 0, 0};
    while(s[i] != 0){
        if(s[i] >= 32 && s[i] <= 126){
            if(s[i] >= 48 && s[i] <= 57) qtd[0]++;

            else if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
                qtd[1]++;
            }
            else qtd[2]++;
            
        }

        i++;
    }

    printf("Quantidade números: %d\n", qtd[0]);
    printf("Quantidade letras: %d\n", qtd[1]);
    printf("Quantidade simbolos: %d\n", qtd[2]);
}

int main(){
    stringReport("oii!!332");
    return 0;
}