/*12. Escreva uma função que remove os espaços que possam existir antes e depois de uma string.*/

#include <stdio.h>

void strTrim(char s[]){
    int i = 1;

    while(s[i] != 0){
            if(s[i] == ' ' && s[i-1] < 33 && s[i+1] < 33){
                int j = i;
                while(s[j] != 0){
                    s[j] = s[j+1];
                    j++;
                }
            }
        i++;
    }
}

int main(){
    char s[] = "     hello world    ";
    strTrim(s);
    printf("%s", s);
}