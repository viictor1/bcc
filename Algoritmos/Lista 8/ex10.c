/*10. Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
todas as palavras do arquivo. A string de separadores é passada como argumento à função. "Caso
ocorra algum problema, retorna NULL.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **getWords(const char *filepath, const char *separatores) {
    FILE *file = fopen(filepath, "r");
    if (!file) return NULL;

    int wordsSize = 10;
    int wordLength = 10;

    char **words = malloc(wordsSize * sizeof(char *));
    for (int i = 0; i < wordsSize; i++) {
        words[i] = malloc(wordLength * sizeof(char));
    }

    char c;
    int i = 0;
    int j = 0;
    int separator = 0;

    while ((c = fgetc(file)) != EOF) {
        
        if(j >= wordLength){
            wordLength++;
            words[i] = realloc(words[i], wordLength * sizeof(char));
        }
        else if (i >= wordsSize) {
            wordsSize++;
            words = realloc(words, wordsSize * sizeof(char *));
            words[i] = malloc(wordLength * sizeof(char));
        }

        for (int k = 0; separatores[k] != 0; k++) {
            if (c == separatores[k]) {
                separator = 1;
                break;
            }
        }

        if (separator) {
            words[i][j] = '\0';
            separator = 0;
            i++;
            j = 0;
            wordLength = 10;
        }
        else{
            words[i][j] = c;
            j++;
        }
        
    }


    fclose(file);
    return words;
}

int main() {
    char **text = getWords("texto.txt", " ,;.:?!-");
    if (!text) {
        printf("Error reading file.\n");
        return 1;
    }

    for (int i = 0; text[i] != NULL; i++) {
        printf("%s\n", text[i]);
        free(text[i]);
    }
    free(text);

    return 0;
}
