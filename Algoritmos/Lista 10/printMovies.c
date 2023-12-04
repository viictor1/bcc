#include <stdio.h>

typedef struct {
long id;
char name[51];
} Movie;

int main(){
    FILE *file = fopen("movies.bin", "r");
    if(!file) return 1;

    Movie m;
    while((fread(&m, sizeof(Movie), 1, file)) != 0){
        printf("%d %s\n", m.id, m.name);
    }

    fclose(file);
    return 0;
}