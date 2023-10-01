/*5. Escreva uma função que recebe um Contact (ver struct abaixo) e imprime seu conteúdo. A função
também recebe um vetor de strings contendo os nomes dos tipos, chamado type_names. O
campo type do contato deve ser utilizado como índice no vetor type_names.*/

#include <stdio.h>

typedef struct contact{
    int id;
    char name[51];
    char email[51];
    int type;
} Contact;

void printContact(Contact c, int size, char types[size][50]){
    printf(" Id: %d\n Name: %s\n Email: %s\n Type: %s\n", c.id, c.name, c.email, types[c.type]);
}

int main(){
    char types[][50] = {"familia", "amigo", "trabalho", "escola", "outros"};
    Contact c = {1, "vitin", "victoralmeida.2004@alunos.utfpr.edu.br", 3};
    printContact(c, 5, types);
}