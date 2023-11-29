/*4. Escreva uma função que imprime a quantidade de ocorrências de cada palavra, em um arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Palavra{
    char str[50];
    int ocorrencias;

} palavra;

void countAllWords(const char *filepath){
    palavra lista[150];
    int count = 0;
    FILE *file = fopen(filepath, "r");


    char *str = malloc(44 * sizeof(char));
    int achou = 0;
    while(fscanf(file, "%s", str) != EOF){
        for(int i = 0; i < count; i++){
            if(!strcmp(lista[i].str, str)){
                lista[i].ocorrencias++;
                achou = 1;
            }
        }
        if(!achou){
            strcpy(lista[count].str, str);
            lista[count].ocorrencias++;
            count++; 
            achou = 0;
        }
        
    }


    for(int i = 0; i < count; i++){
        printf("%s: %d\n", lista[i].str, lista[i].ocorrencias);
    }

}

int main(){
    countAllWords("dados");
}