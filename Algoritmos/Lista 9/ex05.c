/*5. Escreva uma função que retorna um vetor contendo todas as palavras (strings) que possuam um
dado número de letras em um arquivo. O vetor deve ser alocado em heap.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **getWords(const char* filepath, int letters){
    FILE *file = fopen(filepath, "r");
    if(!file) return NULL;

    int size = 10;
    int index = 0;
    char **words = malloc(size * sizeof(char*));
    for(int i = 0; i < size; i++){
        words[i] = malloc(51 * sizeof(char));
    }

    char str[50];
    

    while((fscanf(file, "%s", str)) != EOF){
        if(strlen(str) == letters){
            if(index >= size){
                size = index;
                words = realloc(words, size * sizeof(char*));
            }
            strcpy(words[index], str);
            index++;
        }
    }



    fclose(file);
    return words;
}

int main(){
    char **words = getWords("dados", 3);

    for(int i = 0; i < 5; i++){
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);

    return 0;
}