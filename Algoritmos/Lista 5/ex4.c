/*4. Escreva uma função que recebe um vetor de Point e encontra os dois pontos mais próximos, isto é,
aqueles que possuem a menor distância. A função deve imprimir os dois de pontos mais próximos -
(X1,Y1) e (X2,Y2) -, além da distância. */

#include <stdio.h>
#include <math.h>
#include <float.h>

typedef struct point{
    float x;
    float y;
} Point;

void nearestPoints(int size, Point points[]){
    int p1 = 0;
    int p2 = 0;
    float distance = 0;
    float smallestDistance = FLT_MAX;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(points[i].x == points[j].x && points[i].y == points[j].y) continue;
            distance = sqrt((points[j].x - points[i].x) * (points[j].x - points[i].x) 
            + (points[j].y - points[i].y) * (points[j].y - points[i].y)  );
            if(distance < smallestDistance){
                smallestDistance = distance;
                p1 = i;
                p2 = j;
            }
        }
    }

    printf("(%.2f, %.2f) - (%.2f, %.2f) = %.2f", points[p2].x, points[p2].y, points[p1].x, points[p1].y, smallestDistance);    
}

int main(){
    Point points[] = {{1,1}, {2,2}, {3,3}};
    nearestPoints(3, points);
}