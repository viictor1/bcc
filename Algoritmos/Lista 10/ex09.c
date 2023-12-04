/*9. Escreva uma função que remove um registro em um arquivo de filmes, a partir de seu ID
(Movie::id). A função não apaga os dados do registro, mas apenas marca-o como removido,
definindo ID = -1. A função deve retornar 1 (true) para sucesso ou 0 (false) em caso de erro. OBS:
você não deve trazer todos os registros para a RAM, em um array. A função deve acessar somente
o registro especificado.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
long id;
char name[51];
} Movie;

int deleteMovie(const char *filepath, long id){
    FILE *file = fopen(filepath, "rb+");
    if(!file) return 0;

    Movie m;

    while((fread(&m, sizeof(m), 1, file)) != EOF){
        if(m.id == id){
            m.id = -1;
            fseek(file, -sizeof(Movie), SEEK_CUR);
            fwrite(&m, sizeof(Movie), 1, file);
            return 1;
        }
    }

    fclose(file);
    return 0;

}

int main(){
    deleteMovie("movies.bin", 25);
}