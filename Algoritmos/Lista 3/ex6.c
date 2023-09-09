/*6. A função strcmp(str1, str2) compara duas strings alfabeticamente. Ela devolve:
a. res < 0 se str1 < str2 << str1 vem antes de str2
b. res = 0 se str1 = str2
c. res > 0 se str1 > st2 << str1 vem depois de str2
Escreva uma função que compara duas strings independente do caso (maiúsculo ou minúsculo).
Ela deve retornar os mesmos tipos de valores que strcmp().*/

#include <stdio.h>

void stringUpper(char s[]){
    int i = 0;
    while(s[i] != 0){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
        }

        i++;
    }
}

int strcmps(char s1[], char s2[]){
    stringUpper(s1);
    stringUpper(s2);

    int i = 0;

    while(s1[i] != 0){
        if(s2[i] == 0){
            return 1;
        } else if(s1[i] > s2[i]){
            return 1;
        } else if(s1[i] < s2[i]){
            return -1;
        } 

        i++;
    }

    return 0;
    
}

int main(){
    char s1[] = "JOanna";
    char s2[] = "joanna";
    int res = strcmps(s1, s2);
    printf("%d\n", res);
}