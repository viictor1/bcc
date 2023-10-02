/*8. Escreva uma função que recebe um vetor de empregados (Employee) e seu tamanho. A função
deve imprimir os nomes dos três empregados de maiores salários, ou seja, as pessoas que
recebem os três maiores salários*/

#include <stdio.h>

typedef struct employee {
    char name[50];
    float salary;
    int type; // 0 - Developer, 1 - Designer, 2 - Manager, 3 - Support
} Employee;

void printBest3(int size, Employee employees[]){
    float top3[3] = {0};

    for(int i = 0; i < size; i++){
        Employee atual = employees[i];

        if(atual.salary > top3[0]){
            top3[2] = top3[1];
            top3[1] = top3[0];
            top3[0] = atual.salary;
        } else if(atual.salary > top3[1]){
            top3[2] = top3[1];
            top3[1] = atual.salary;
        } else if(atual.salary > top3[0]){
            top3[2] = atual.salary;
        }
    }

    printf("Top 1: %.2f\n", top3[0]); 
    printf("Top 2: %.2f\n", top3[1]);
    printf("Top 3: %.2f\n", top3[2]);
}

int main(){
    Employee employees[] = {
        {"Alice", 50000.0, 0}, // Developer
        {"Bob", 60000.0, 0},   // Developer
        {"Charlie", 75000.0, 1}, // Designer
        {"David", 85000.0, 2},  // Manager
        {"Eve", 40000.0, 3},     // Support
    };

    printBest3(5, employees);
}
