/*10. Escreva uma função que recebe três notas escolares n1, n2 e n3 (0..10). A função deve calcular e
imprimir a média aritmética simples das três notas, bem como, o conceito que o aluno obteve pela
média, segundo estes critérios:
a. Conceito A, se média no intervalo [8,5..10]
b. Conceito B, se média no intervalo [7,0..8,5[
c. Conceito C, se média no intervalo [5,5..7,0[
d. Conceito F, se média inferior a 5,5*/

#include <stdio.h>

void printGrade(int num1, int num2, int num3){
    int grade = (num1 + num2 + num3) / 3.0;
    if(grade >= 8.5){
        printf("Conceito A\n");
    }
    if(grade >= 7 && grade < 8.5){
        printf("Conceito B\n");
    }
    if(grade >= 5.5 && grade < 7){
        printf("Conceito C\n");
    }
    if(grade < 5.5){
        printf("Conceito F\n");
    }
}

int main(){
    int a, b ,c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printGrade(a, b, c);
    return 0;
}