/*2. Escreva uma função que receba um caminho de arquivo. Se o mesmo existir, faz nada. Se o
arquivo não existir, tenta criá-lo. A função deve retornar 1 (um) caso arquivo exista ou tenha sido
criado e, 0 (zero), caso contrário.*/

#include <stdio.h>
#include <stdlib.h>

int checkOrCreate(const char *filepath){
    FILE *file = fopen(filepath, "r");
    if(!file){
        file = fopen(filepath, "w");
        if(!file)
            return 0;
    }

    fclose(file);
    return 1;
}

int main(){
    int res = checkOrCreate("./biscoito.txt");
    printf("%d\n", res);
}