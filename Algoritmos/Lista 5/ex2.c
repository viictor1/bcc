/*2. Considerando a estrutura Point do exercício anterior, escreva uma função que recebe um vetor de
pontos, bem como seu tamanho, e informa a distância a cada dois pontos consecutivos do vetor.*/

#include <stdio.h>
#include <math.h>

typedef struct point{
    float x;
    float y;
} Point;


void distanceVector(int n, Point v[]){
    float dis = 0;
    for(int i = 0; i < n-1; i++){
        dis = sqrt((v[i+1].x - v[i].x) * (v[i+1].x - v[i].x) + (v[i+1].y - v[i].y) * (v[i+1].y - v[i].y));
        printf("Distâcia pontos %d e %d: %.2f\n", i, i+1, dis);
    }
}

int main(){
    Point pontos[] = { {1.0, 2.0}, {4.0, 6.0}, {7.0, 9.0}, {3.0, 1.0} };
    distanceVector(4, pontos);
}