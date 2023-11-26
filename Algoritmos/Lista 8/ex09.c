/*. Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
todas as palavras do arquivo. Considere como separadores de palavras o caractere de espaço e a
quebra de linha '\n'. "Caso ocorra algum problema, retorna NULL*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **getWords(const char* filepath){
    FILE *file = fopen(filepath, "r");
    if(!file) return 0;

    int wordsSize = 1;
    char **words = malloc(wordsSize * sizeof(char*));
    for(int i = 0; i < wordsSize; i++){
        words[i] = malloc(10 * sizeof(char));
    }

    char c;
    int i = 0;
    int j = 0;
    while((c = fgetc(file)) != EOF){
        if(c == ' ' || c == '\n'){
            i++;
            j = 0;
        }

        if(i >= wordsSize){
            wordsSize++;
            words = realloc(words, wordsSize * sizeof(char*));
        }
        else{
            words[i] = realloc(words[i], (j+1) * sizeof(char));
            words[i][j] = c;
            j++;
        }
    }

    fclose(file);
    return words;
}

int main(){
    char **text = getWords("texto.txt");
    for(int i = 0; text[i] != 0; i++){
        printf("%s\n", text[i]);
        free(text[i]);
    }
    free(text);
    return 0;
}