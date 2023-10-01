/*3. Escreva uma função que recebe um vetor de Point e os inicia com valores float aleatórios -50 e 50.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    float x;
    float y;
} Point;


void randomPoints(int n, Point points[]){
    for(int i = 0; i < n; i++){
        points[i].x = (rand()/(float) RAND_MAX) * 100 - 100/2.0f;
        points[i].y = (rand()/(float) RAND_MAX) * 100 - 100/2.0f;
        printf("points[%d].x = %f\n", i, points[i].x);
        printf("points[%d].y = %f\n\n", i, points[i].y);
    }
}

int main(){
    Point points[5];
    randomPoints(5, points);
}