/*13. Escreva uma função que informa, com 1 (true) ou 0 (false), se uma string está contida em outra.*/

#include <stdio.h>

int findSubstring(char s[], char sub[]){
    int i = 0;
    int j = 0;

    while(s[i] != 0){
        while(sub[j] != 0){
            if(s[i] != sub[j]){
                j = 0;
                break;
            }
            i++;
            j++;
        }
        if(sub[j] == 0){
            return 1;
        }
        i++;
    }

    return 0;
}

int main(){
    char s[] = "first things first, second things latter"; 
    int check = findSubstring(s, "things");
    printf("%d\n", check);
    return 0;
}
