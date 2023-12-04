/*7. Escreva uma função que adiciona um registro ao final de um arquivo de filmes. A função deve
retornar 1 (true) para sucesso ou 0 (false) em caso de erro. OBS: você não deve trazer todos os
registros para a RAM, em um array.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
long id;
char name[51];
} Movie;

int addMovie(const char *filepath, Movie movie){
    FILE *file = fopen(filepath, "ab");
    if(!file) return 0;

    fwrite(&movie, sizeof(Movie), 1, file);
    fclose(file);
    return 1;
}

int main(){
    Movie m;
    m.id = 25;
    strcpy(m.name, "vitin");
    addMovie("movies.bin", m);
}