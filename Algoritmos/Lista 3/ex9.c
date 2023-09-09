/*9. Escreva uma função que recebe uma string composta de várias palavras. A função deve modificar
a letra inicial de cada palavra para maiúscula e, as demais, para minúsculas. Considere que
sempre haverá ao menos um espaço entre cada palavra.*/

#include <stdio.h>

void strCapitalize(char s[]){
    int i = 0;
    int wordStarted = 0;

    while(s[i] != 0){

        if(wordStarted == 0){
            if(s[i] >= 97 && s[i] <= 122){ //se for letra minuscula
                s[i] -= 32;
            }
        } else if(s[i] >= 65 && s[i] <= 90){ //se for letra maiscula
                s[i] += 32;
            }


        if(s[i] == ' '){
            wordStarted = 0;
        }
        else{
            wordStarted = 1;
        }

        i++;
    }
}

int main(){
    char s[] = "welCOME    To  COMPUTER programming!!";
    strCapitalize(s);
    printf("%s\n", s);
    return 0;
}