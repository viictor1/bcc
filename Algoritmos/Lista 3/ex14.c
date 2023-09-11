/*14. Escreva uma função que corta uma string após uma dada palavra. As posições após a palavra
devem ser preenchidas com o caractere '\0' (int 0), até o final do vetor.*/

#include <stdio.h>

void cutString(char s[], char target[]){
    int i = 0;
    int j = 0;

    while(s[i] != 0){
        while(target[j] != 0){
            if(s[i] != target[j]){
                j = 0;
                break;
            }
            i++;
            j++;
        }
        i++;
        if(target[j] == 0){
            for(; s[i] != 0; i++){
                s[i] = 0;
            }
            return;
        }
    }

}

int main(){
    char s[] = "first things first, second things latter";
    cutString(s, "second");
    printf("%s", s); // s = “first things first, second”
}