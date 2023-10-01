/*1. Escreva uma função que recebe dois pontos x,y (Point) e devolve a distância entre os mesmos.
Utilize sqrt() da lib <math.h> para obter a raiz quadrada:*/

#include <stdio.h>
#include <math.h>

typedef struct point{
    float x;
    float y;
} Point;

float distance(Point p1, Point p2){
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)  );
}

int main(){
    Point p1 = {-2.0f, 7.5f};
    Point p2 = {5.0f, 12.4f};
    float dist = distance(p1, p2);
    printf("Distance: %f\n", dist);
}