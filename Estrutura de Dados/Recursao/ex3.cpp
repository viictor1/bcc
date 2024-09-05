#include <iostream>

bool buscaBinariaIterativa(int elemento, int* v, int tam){
    int inicio = 0;
    int fim = tam;

    while(inicio < fim){
        int meio = (inicio + fim) / 2;

        if(v[meio] == elemento) return true;

        if(elemento > v[meio]){
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }

    return false;
}

bool buscaBinariaRecursiva(int elemento, int* v, int inicio, int fim){
    int meio = (inicio + fim) / 2;

    if(elemento == v[meio]) return true;
    if(inicio > fim) return false;

    if(elemento > v[meio]){
        return buscaBinariaRecursiva(elemento, v, meio + 1, fim);
    }else{
        return buscaBinariaRecursiva(elemento, v, inicio, meio - 1);
    }
}

int main(){
    int lista[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int valorProcurado = 0;

    int resultado = buscaBinariaRecursiva(valorProcurado, lista, 0, 10);

    std::cout << resultado << "\n";

    return 0;
}