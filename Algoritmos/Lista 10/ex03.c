/*3. Escreva uma função que grava o conteúdo de um vetor de filmes (Movie) em um arquivo. Caso o
arquivo não exista, a função deve c*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
long id;
char name[51];
} Movie;

void writeAllMovies(const char *filepath, int n, const Movie *v){
    FILE *file = fopen(filepath, "wb");
    if(!file) return;

    fwrite(v, sizeof(Movie), n, file);
    fclose(file);
}

int main(){
    Movie list[] = {
        {1, "They Live"},
        {2,"Big Trouble in Little China"},
        {3,"The Thing"},
        {5, "In the Mouth of Madness"},
        {7, "Ghosts of Mars"},
        {10,"Halloween"},
        {11, "Village of the Damned"}
    };
    // cria arquivo 'dados.bin' com conteúdo de 'list'
    writeAllMovies("movies.bin", 7, list);
}