/*9. Escreva uma função que recebe um nome, o verifica e corrige, se necessário. Um nome deve
conter apenas letras, com as iniciais de cada nome em maiúscula e o restante em minúsculas.
Deve haver somente um espaço entre cada nome e não devem haver espaços no início e final.*/

#include <stdio.h>
#include <string.h>

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

int main(){
    char name[] = " JoHn! Do5e3 ";
    char name2[] = "   VITIN rIQue!!  32";
    fixName(name);
    printf("%s\n", name);
    fixName(name2);
    printf("%s\n", name2);
}