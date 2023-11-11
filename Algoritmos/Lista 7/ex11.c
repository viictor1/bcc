/*11. Escreva uma função que receba o endereço de uma string contendo palavras separadas por
espaços. A função deve retornar o endereço de um vetor de strings (matriz de caracteres) contendo
as palavras separadas. Além disso, deve retornar, via parâmetro, o número de palavras
encontradas*/

#include <stdio.h>
#include <stdlib.h>

char** split(const char* str, int* num){
    int wordStarted = 0;
    for(int i = 0; str[i] != 0; i++){
        if(str[i] == ' ')
            wordStarted = 0;
        else
            wordStarted = 1;
        
        if(wordStarted && (str[i +1] == ' ' || str[i+1] == 0))
            (*num)++;
    }

    char **split = malloc(*num * sizeof(char *));

    for(int i = 0; i < *num; i++){
        split[i] = malloc(15 * sizeof(char));
    }

    int index = 0;
    int letter = 0;

    for(int i = 0; str[i] != 0; i++){
        if(str[i] == ' '){
            wordStarted = 0;
            letter = 0;
        }
        else
            wordStarted = 1;

        if(wordStarted){
            split[index][letter] = str[i];
            letter++;
            if(str[i+1] == ' ')
                index++;
        }

    }

    return split;
}

int main(){
    char str[] = "     Texto  de     teste com   várias palavras  ";
    int size = 0;
    char** tokens = split(str, &size);
    printf("Size: %d\n", size);

    for (int i = 0; i < size; i++)
    printf("%s\n", tokens[i]);

    for (int i = 0; i < size; i++)
        free(tokens[i]);
    free(tokens);
}