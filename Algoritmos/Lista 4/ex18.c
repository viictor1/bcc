/*18. Escreva uma função que imprime as palavras de maior e menor tamanhos em um array de n
strings de até len-1 letras.*/

#include <stdio.h>
#include <string.h>

void printStringMinMax(int size, int length, char list[size][length]){
    int min, max;
    int thisLen = 0;

    for(int i = 0; i < size; i++){
        thisLen = strlen(list[i]);

        if(i == 0){
            min = thisLen;
            max = min;
        }    

        if(thisLen > max){
            max = thisLen;
        }else if(thisLen < min){
            min = thisLen;
        }
    }
    

    printf("Menor: ");
    for(int i = 0; i < size; i++){
        if(strlen(list[i]) == min) printf("%s ", list[i]);
    }

    printf("\nMaior: ");
    for(int i = 0; i < size; i++){
        if(strlen(list[i]) == max) printf("%s ", list[i]);
    }

}

int main(){
    char v[6][20] = {"Johnny", "Mariane", "Jak", "Samuel", "Ada", "Michelangelo"};
    printStringMinMax(6, 20, v);
}