/*5. Escreva uma função que concatene duas strings e retorne o resultado em uma nova string, alocada
na heap.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatString(const char *str1, const char *str2){
    char *concat = malloc(sizeof(str1) + sizeof(str2));
    int j = 0;

    for(int i = 0; str1[i] != 0; i++){
        concat[j] = str1[i];
        j++;
    }

    for(int i = 0; i < str2[i] != 0; i++){
        concat[j] = str2[i];
        j++;
    }
    
    concat[j] = 0;
    return concat;
}

int main(){
    char *str1 = "oiii";
    char *str2 = "souvitin";
    char *concat = concatString(str1, str2);
    printf("%s\n", concat);
    free(concat);
    concat = NULL;
}