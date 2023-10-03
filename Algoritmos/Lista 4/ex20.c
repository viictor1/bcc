/*20. Escreva uma função que conta e devolve o número de ocorrências de uma palavra word em um
array de n linhas de texto (strings de até len-1 letras)*/

#include <stdio.h>

int countOcorrences(int rows, int columns, char lines[rows][columns], char word[]){
    int ocorrences = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(lines[i][j-1] == ' ' || lines[i][j-1] == 0){
                for(int k = 0; word[k] != 0; k++){
                    if(lines[i][j] != word[k]) break;
                    if(word[k+1] == 0) ocorrences++;
                    j++;
                }  
            }
        }
    }

    return ocorrences;
}

int main(){
    char v[5][200] = {
        "computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
        "programming involves tasks such as analysis, generating algorithms, profiling algorithms accuracy and resource consumption, and the implementation of algorithms in a chosen programming language.",
        "the source code of a program is written in one or more programming languages.",
        "the purpose of programming is to find a sequence of instructions that will automate the performance of a task for solving a given problem.",
        "the process of programming thus often requires expertise in several different subjects, including knowledge of the application domain, specialized algorithms, and formal logic."
    };

    int count = countOcorrences(5, 200, v, "programming");
    printf("Count: %d\n", count);
}