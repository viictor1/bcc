/*10. Escreva uma função que preenche e devolve um Contact (struct do exercício 5), definindo os
campos da seguinte forma:
a. id: definido pelo parâmetro id;
b. name: definido pelo parâmetro name. Deve ser verificado e corrigido, se necessário. Para
tanto, utilize a função do exercício anterior.
c. email: deve ser gerado com base no nome e respeitando as seguintes características
i. Todas as letras minúsculas;
ii. Espaço deve ser substituído por “.” (ponto);
iii. Acrescentar o sufixo “@mail.br”.
d. type: definido pelo parâmetro type*/

#include <stdio.h>
#include <string.h>

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
    printf("ID: %d\nName: %s\nEmail: %s\nType: %d\n", c.id, c.name, c.email, c.type);
    return c;
}

int main(){
    Contact c = createContact(4, " JoHn! Do5e3 ", 1);
}