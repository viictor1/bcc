/*12. Escreva uma função que remove os espaços que possam existir antes e depois de uma string.*/

#include <stdio.h>

void strTrim(char s[]){
    int i = 0;
    int wordStarted = 0;
    int wordEnded = 0;
    int lastLetter;

    while(s[i] != 0){
        if(s[i] == ' '){
            int j = i;
            while(s[j] != 0){
                s[j] = s[j+1];
                j++;
            }
        }
        if(wordStarted == 1 && s[i] = ' '){
            wordEnded = 1;
        } else if(wordStarted == 0)

        i++;
    }
}

int main(){
    char s[] = " hello world ";
    strTrim(s);
    printf("%s\n", s);
}