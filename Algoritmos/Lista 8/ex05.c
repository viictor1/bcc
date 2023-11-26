/*5. Escreva uma função que receba um caminho de arquivo e escreva uma string no mesmo. A função
deve (re)criar o arquivo especificado*/

#include <stdio.h>
#include <stdlib.h>

int saveString(const char *filepath, const char *text){
    FILE *file = fopen(filepath, "w");
    if(!file) return 0;

    for(int i = 0; text[i] != 0; i++){
        fputc(text[i], file);
    }
    fclose(file);
    return 1;
}

int main(){
    int res = saveString("./biscoito.txt", "oiiiii tudo bemm");
    printf("\n%d\n", res);
}