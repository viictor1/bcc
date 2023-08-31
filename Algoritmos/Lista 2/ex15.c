/*15. Escreva uma função que recebe pontos X,Y em um vetor points de tamanho n. O vetor conterá os
pontos sequencialmente: [X1, Y1, X2, Y2, X3, Y3,...]. A função deve informar a distância entre cada
par de pontos consecutivos. Distância: sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ).*/

#include <stdio.h>
#include <math.h>

void distances(int size, int points[]){
    float distancia = 0;
    int x1, x2, y1, y2;
    for(int i = 0; i < size; i += 4){
        x1 = points[i];
        y1 = points[i+1];
        x2 = points[i+2];
        y2 = points[i+3];

        distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
        printf("Distância entre (%d, %d) e (%d, %d): %.2f\n", x1, y1, x2, y2, distancia);
    }
}

int main(){
    int points[] = {1, 2, 4, 6, 7, 8, 10, 15};
    distances(8, points);
}