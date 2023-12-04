/*8. Escreva uma função que grava um registro em um arquivo de filmes a partir de seu ID (Movie::id),
substituindo o existente. A função deve retornar 1 (true) para sucesso ou 0 (false), em caso de erro
ou ID inexistente. OBS: você não deve trazer todos os registros para a RAM, em um array. A
função deve acessar somente o registro especificado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
long id;
char name[51];
} Movie;

int updateMovie(const char *filepath, Movie movie){
    FILE *file = fopen(filepath, "rb+");
    if(!file) return 0;

    Movie m;
    while(fread(&m, sizeof(Movie), 1, file) != 0){
        if(m.id == movie.id){
            fseek(file, -sizeof(Movie), SEEK_CUR);
            fwrite(&movie, sizeof(Movie), 1, file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}

int main(){
    Movie m;
    m.id = 25;
    strcpy(m.name, "outro vitin");
    updateMovie("movies.bin", m);
}