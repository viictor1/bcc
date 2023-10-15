#include <stdio.h>

/*1. Escreva um programa em C que declara três variáveis (char, int e double) e imprime seus
endereços*/

void printAddress(){
    char letter = 'a';
    int num = 2;
    double floating = 3.2;

    //printf("char: %p\nint: %p \ndouble: %p \n", &letter, &num, &floating);
}

/*2. Escreva uma função que recebe o endereço de duas variáveis inteiras. A função deve somar os
valores contidos nessas variáveis por meio de seus endereços, colocando o resultado na primeira.*/

void add(int *a, int *b){
    *a = *a + *b;
    //printf("a: %d\n", *a);
}

/*3. Escreva uma função que recebe o comprimento e o endereço de um vetor, e imprime o seu
conteúdo, sem utilizar o operador de índice [ ] para acessar os elementos do vetor.*/

void printArray(int size, const int *v){
    for(int i = 0; i < size; i++){
        //printf("%d ", *(v + i));
    }
    //printf("\n");
}

/*4. Escreva uma função que recebe o comprimento e o endereço de um vetor, e imprime o seu
conteúdo em ordem reversa, sem utilizar o operador de índice [ ] para acessar os elementos do
vetor.*/

void printArrayReversed(int size, const int *v){
    for(int i = 0; i < size; i++){
        //printf("%d ", *(v + size - 1 - i));
    }
    //printf("\n");
}

/*5. Escreva uma função que recebe o comprimento e o endereço de um vetor. A função deve retornar,
via parâmetros min e max, o maior e o menor valor contido no vetor. Você não deve utilizar o
operador de índice [ ] para acessar os elementos do vetor.*/

void getMinMax(int size, const int *v, int *min, int *max){
    int num = 0;
    for(int i = 0; i < size; i++){
        num = *(v + i);
        if(num > *max) *max = num;
        else if(num < *min) *min = num; 
    }
}

/*6. Escreva uma função que recebe as dimensões e o endereço de uma matriz (vetor bidimensional).
A função deve imprimir seu conteúdo, sem utilizar o operador de índice [ ] para acessar os
elementos da matriz.*/

void printMatrix(int rows, int columns, const int *m){
    for(int i = 0; i < rows * columns; i++){
        //if(i % columns == 0 && i != 0) printf("\n");
        //printf("%d ", *(m + i));
    }
}

/*7. Escreva uma função que recebe o endereço de uma string. A função deve concatenar, ao final da
string original, uma barra vertical, seguida do conteúdo da string de forma invertida. Considere que
o vetor possui comprimento suficiente para a adição dos novos caracteres. Você não deve utilizar o
operador de índice [ ] para acessar os caracteres da string.*/

void makeMirrored(char *str){
    for(;*str != 0; str++);
    *str = '|';
    char *reverse = str--;
    for(;*reverse != 0; reverse--){
        str++;
        *str = *reverse;
    }
}

int main(){
    int a = 5;
    int b = 6;
    int array[] = {0, 1, 2, 3, 4};
    int min;
    int max;
    int m[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };
    char name[40] = "John Doe";

    printAddress();
    add(&a, &b);
    printArray(5, array);    
    printArrayReversed(5, array);
    getMinMax(5, array, &min, &max);
    printMatrix(3, 4, (int*)m);
    makeMirrored(name);
    printf("%s\n", name);
}
