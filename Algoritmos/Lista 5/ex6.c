/*6. Escreva uma função que recebe um vetor de Contact e imprime os contatos agrupados pelo seu
tipo.*/

#include <stdio.h>

typedef struct contact{
    int id;
    char name[51];
    char email[51];
    int type;
} Contact;

void print_contact_list(int contactsSize, Contact list[contactsSize], int typesize, char types[typesize][50]){
    for(int i = 0; i < typesize; i++){
        int hasContacts = 0; 
        for(int j = 0; j < contactsSize; j++){
            if(list[j].type == i){
                hasContacts = 1; 
                break;          
            }
        }

        if(hasContacts == 1)printf("%s:\n", types[i]);

        for(int j = 0; j < contactsSize; j++){
            if(list[j].type == i){
                printf("    %s\n", list[j].name);
            }
        }
    }
}

int main(){
    char types[][50] = {"Família","Amigo","Trabalho","Escola","Outros"};
    Contact list[] = {
        {1, "Marcus Fenix", "fenix@gow.com", 2},
        {41, "Blue Mary", "mary@ff3snk.net", 0},
        {17, "Barry Burton", "bburton@re.cap", 0},
        {8, "Charlie Nash", "nash@ssz.com", 2},
        {2, "Ada Wong", "wong@re2.net", 4},
        {5, "Chris Redfield", "crfield@re.cap", 0}
        };
    print_contact_list(6, list, 5, types);
}