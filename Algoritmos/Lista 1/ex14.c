/*14. Escreva um programa que calcula a idade de uma pessoa a partir da data de nascimento, lida pelo
terminal em três variáveis (dia, mês e ano). Para obter a data atual, utilize as funções get_day(),
get_month() e get_year(), fornecidas pelo código em anexo.*/

#include<time.h>
#include <stdio.h>

struct tm get_date() {
time_t t = time(NULL);
return *localtime(&t);
}
int get_day() {
return get_date().tm_mday;
}
int get_month() {
return get_date().tm_mon+1;
}
int get_year() {
return get_date().tm_year+1900;
}

int get_age(int dia, int mes, int ano){
    if(mes < get_month()){
            return get_year() - ano;
    }
    else if(mes == get_month()){
        if(dia <= get_day()){
            return get_year() - ano;
        }
    }
    
    return get_year() - ano - 1;
    
}

int main(){
    int dia, mes, ano, age;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    age = get_age(dia, mes, ano);

    printf("Idade: %d\n", age);
}