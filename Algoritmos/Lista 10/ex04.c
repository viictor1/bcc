/*4. Escreva uma função que retorna a quantidade de registros de filmes contidos em um arquivo.*/

#include <stdio.h>

typedef struct {
long id;
char name[51];
} Movie;

int countMovies(const char *filepath){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    fseek(file, 0, SEEK_END);
    int size = ftell(file) / sizeof(Movie);
    rewind(file);
    fclose(file);
    return size;
}

int main(){
    int size = countMovies("movies.bin");
    printf("Size: %d\n", size);
}