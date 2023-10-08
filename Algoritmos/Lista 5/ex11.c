/*11. Escreva uma função que recebe um vetor de Contact e o preenche. O campo id deve ser
preenchido incrementalmente, iniciando em 1. O campo type deve ser randomizado entre um dos 5
tipos possíveis, exceto para contatos de pessoas da família “Doe”, que devem ser definidos com o
tipo “Amigo”. Utilize a função do exercício anterior*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int id = 0;

typedef struct contact{
    int id;
    char name[51];
    char email[51];
    int type;
} Contact;

void fixName(char name[]){
    int wordStarted = 0;
    for(int i = 0; name[i] != 0; i++){
        if((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z')){
            if(name[i] >= 'A' && name[i] <= 'Z' && wordStarted == 1){
                name[i] += 32;
            }else if(name[i] >= 'a' && name[i] <= 'z' && wordStarted == 0){
                name[i] -= 32;
            }

            wordStarted = 1;
        }else{
            if((name[i] == ' ') && (((name[i-1] >= 'A' && name[i-1] <= 'Z') 
                || (name[i-1] >= 'a' && name[i-1] <= 'z'))
                && ((name[i+1] >= 'A' && name[i+1] <= 'Z')
                || (name[i+1] >= 'a' && name[i+1] <= 'z')))){
                    wordStarted = 0;
                    continue;
            } 
            for(int j = i; name[j] != 0; j++){
                name[j] = name[j+1];
            }
            i--;
        }
    }
}

void makeEmail(char email[], char name[]){
    strcpy(email, name);

    for(int i = 0; email[i] != 0; i++){
        if(email[i] >= 'A' && email[i] <= 'Z'){
            email[i] += 32;
        } else if(email[i] == ' '){
            email[i] = '.';
        }
    }
    strcat(email, "@email.com");
}

Contact createContact(int id, char name[], int type){
    Contact c;
    c.id = id;
 
    strcpy(c.name, name);
    fixName(c.name);
    makeEmail(c.email, c.name);
    c.type = type;
    printf("ID: %d\nName: %s\nEmail: %s\nType: %d\n\n", c.id, c.name, c.email, c.type);
    return c;
}

void fillContactList(int size, Contact list[]){
    for(int i = 0; i < size; i++){
        id++;
        int type = ((rand()/(float)RAND_MAX) * 5) + 1;
        createContact(id, "oi", type);
    }
}

int main(){
    Contact list[15];
    fillContactList(15, list);
}