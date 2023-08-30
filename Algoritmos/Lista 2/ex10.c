/*10. Escreva uma função que recebe um vetor vet de tamanho n, bem como, um elemento elem a ser
procurado. A função deve substituir todas as ocorrência de elem por -1.*/

#include <stdio.h>

void replaceElement(int size, int v[], int element){
    for(int i = 0; i < size; i++){
        if(v[i] == element){
            v[i] = -1;
        }
        printf("%d ", v[i]);   
    }

}

int main(){
    int v[] = {1, 2, 3, 4, 5, 5, 5, 5};
    replaceElement(8, v, 5);
}