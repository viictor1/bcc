/*. Considerando o tipo estruturado Product, escreva uma função que grava o conteúdo de um vetor
de produtos em um arquivo no formato CSV (valores separados por vírgula). No arquivo, os
registros dos produtos são armazenados em sequência, com seus campos separados por vírgula.
A função deve retornar true (1) para sucesso ou false (0), caso contrário. OBS: ao salvar o campo
Product::name no arquivo, substitua os espaços por '@'. Dica: Utilize a função fprintf() para facilitar
a implementação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
int id;
char name[51];
float price;
} Product;

int saveRecords(const char *filepath, int n, const Product *prods){
    FILE *file = fopen(filepath, "w");
    if(!file) return 0;

    for(int i = 0; i < n; i++){
        char modifiedName[51];
        strcpy(modifiedName, prods[i].name);

        for (int j = 0; j < strlen(modifiedName); j++) {
            if (modifiedName[j] == ' ') {
                modifiedName[j] = '@';
            }
        }
        if(i+1 == n){
            fprintf(file, "%d,%s,%.2f", prods[i].id, modifiedName, prods[i].price);
            continue;
        }
        fprintf(file, "%d,%s,%.2f,", prods[i].id, modifiedName, prods[i].price);
    }

    fclose(file);
    return 1;

}

int main(){
    Product p1 = {1, "sim", 5.0};
    Product p2 = {2, "nao sei", 7.0};
    Product produtos[] = {p1, p2};

    int res = saveRecords("dados.csv", 2, produtos);
    printf("%d\n", res);
}