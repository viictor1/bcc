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

/*8. Escreva uma função que recebe o endereço de duas strings e calcula a distância de Hamming
entre ambas. A distância de Hamming corresponde à quantidade de caracteres diferentes em
posições correspondentes nas duas strings. Considere que as strings terão o mesmo comprimento,
mas certifique-se de que o código não acessa posições inválidas para strings de tamanhos
distintos.*/

int hammingDistance(const char *s1, const char *s2){
    int hamming = 0;
    while(*s1 != 0 || *s2 != 0){
        if(*s1 != *s2) hamming++;
        s1++;
        s2++;
    }

    return hamming;
}

/*9. Escreva uma função que recebe o endereço de uma string str e de um vetor de strings words (de
até 49 caracteres). A função deve devolver o endereço da string de words que seja mais similar à
str, isto é, com a menor distância de Hamming. OBS: faça chamadas à função do exercício anterior
para encontrar as distâncias entre str e cada uma das palavras em words.*/

char* findMostSimilarWord(const char *str, int n, char list[n][50]){
    int smallest = 50;
    int index = 0;
    int dis = 0;

    for(int i = 0; i < n; i++){
        dis = hammingDistance(str, list[i]);
        if(dis < smallest){
            smallest = dis;
            index = i;
        }
    }
    return list[index];
}

/*10. Escreva uma função que recebe o endereço de um Rect e imprime um tablado de acordo com a
posição x,y e as dimensões width e height. Você pode considerar cada caractere do terminal
como uma unidade para posição/tamanho.*/

struct rect {
int x, y, width, height; // é possível declarar os campos em uma só linha
};
typedef struct rect Rect;

void printBoard(Rect* board){
    for(int i = 0; i < board->x; i++){
        printf("\n");
    }

    for(int i = 0; i < board->width; i++){
        for(int j = 0; j < board->x; j++){
            printf(" ");
        }
        for(int j = 0; j < board->width; j++){
            printf("x");
        }
        printf("\n");
    }

}

/*11. Modifique a função do exercício anterior para que receba o endereço de um Point e o imprima
dentro de um tablado de dimensões definido por um Rect. As coordenadas do Point devem ser
relativas à do Rect, isto é, um Point na posição (0,0) deve ser desenhado no canto esquerdo
superior do Rect. Caso a posição do Point extrapole os limites do Rect, não deve ser desenhado.*/

struct point {
    int x, y; // é possível declarar os campos em uma só linha
    char symbol;
};
typedef struct point Point;

void printBoard2(Point* point, Rect* board){
    for(int i = 0; i < board->x; i++){
        printf("\n");
    }

    for(int i = 0; i < board->width; i++){
        for(int j = 0; j < board->x; j++){
            printf(" ");
        }
        for(int j = 0; j < board->width; j++){
            if(i == point->x && j == point->y){
                printf("%c", point->symbol);
                continue;
            }
            printf("x");
        }
        printf("\n");
    }
}

/*12. Modifique a função do exercício anterior para que receba o endereço de vetor de Point. A função
deve imprimir todos os pontos dentro do tablado, seguindo as mesmas orientações do exercício
mencionado.*/

void printBoard3(Point* points, Rect* board){
    for(int i = 0; i < board->x; i++){
        printf("\n");
    }

    for(int i = 0; i < board->width; i++){
        for(int j = 0; j < board->x; j++){
            printf(" ");
        }
        for(int j = 0; j < board->width; j++){
            if(i == points->x && j == points->y){
                printf("%c", points->symbol);
                points++;
                continue;
            }
            printf("x");
        }
        printf("\n");
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
    char s1[] = "banana";
    char s2[] = "cabana";
    char words[][50] = {"cabana", "savana", "bacana", "halana"};

    printAddress();
    add(&a, &b);
    printArray(5, array);    
    printArrayReversed(5, array);
    getMinMax(5, array, &min, &max);
    printMatrix(3, 4, (int*)m);
    makeMirrored(name);
    int dis = hammingDistance(s1, s2);
    char* mostSimilar = findMostSimilarWord("banana", 4, words);
    Rect rect = {5,5,5,5}; // posição 5,5 (x,y) e dimensões 10x10 (width,height)
    //printBoard(&rect);
    Point point = {1,4,'A'}; // posição 0,0 dentro do tablado
    //printBoard2(&point, &rect);
    Point points[] = { {0,0,'A'}, {2,3,'B'}, {4,4,'C'} };
    printBoard3(points, &rect);
}
