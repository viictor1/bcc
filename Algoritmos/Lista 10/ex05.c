/*5. Escreva uma função que lê um registro de filme de um arquivo, na posição indicada (0, 1, 2, …). A
função deve retornar uma cópia do registro. Se a posição for inválida, a função deve retornar um
registro preenchido com zeros. OBS: você não deve trazer todos os registros para a RAM, em um
array. A função deve ler somente somente o registro em questão.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
long id;
char name[51];
} Movie;

Movie readMovie(const char *filepath, int pos){
    FILE *file = fopen(filepath, "r");

    if (fseek(file, pos * sizeof(Movie), SEEK_SET) != 0) {
        Movie m;
        m.id = 0;
        m.name[0] = 0;
        return m;
    }

    Movie* m = malloc(sizeof(Movie));
    fread(m, sizeof(Movie), 1, file);
    fclose(file);
    Movie movie = *m;
    free(m);
    return movie;
}



int main(){
    Movie movie = readMovie("movies.bin", 7); //movie = {8,"Ghosts of Mars"}
    printf("%d %s\n", movie.id, movie.name);
    return 0;
}