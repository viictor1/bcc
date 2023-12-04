/*6. Escreva uma função que retorna a posição de um registro de filme em um arquivo, a partir de seu
ID (campo Movie::id). A função deve retornar a posição (índice) que o registro ocupa no arquivo ou
-1, caso ID inexistente. OBS: você não deve trazer todos os registros para a RAM, em um array. A
função deve acessar registro por registro, no próprio arquivo.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
long id;
char name[51];
} Movie;

long findMovie(const char *filepath, long id){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    Movie *m = malloc(sizeof(Movie));
    int index = 0;

    while( (fread(m, sizeof(Movie), 1, file)) != 0 ){
        if(m->id == id){
            return index;
        }
        index++;
    }
    fclose(file);
    free(m);
    return -1;
}

int main(){
    long pos = findMovie("movies.bin", 7);
    printf("%d\n", pos);
}