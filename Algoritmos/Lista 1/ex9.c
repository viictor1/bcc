/*9. Escreva uma função que recebe três números e os imprime em ordem crescente.*/

#include <stdio.h>

void print_sorted(int a, int b, int c){
    if (a <= b && b <= c) {
    printf("%d %d %d\n", a, b, c);
    }
    else if (a <= c && c <= b) {
        printf("%d %d %d\n", a, c, b);
    }
    else if (b <= a && a <= c) {
        printf("%d %d %d\n", b, a, c);
    }
    else if (b <= c && c <= a) {
        printf("%d %d %d\n", b, c, a);
    }
    else if (c <= a && a <= b) {
        printf("%d %d %d\n", c, a, b);
    }
    else if (c <= b && b <= a) {
        printf("%d %d %d\n", c, b, a);
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

    print_sorted(a, b, c);
    return 0;
}