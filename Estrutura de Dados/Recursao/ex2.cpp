#include <iostream>

bool buscaSequencial(int elemento, int *v, int tam){
    if(tam <= 0) return false;

    if(elemento == v[tam - 1]) return true;

    return buscaSequencial(elemento, v, tam-1);
}

int main(){
    int v[5] = {5, 2, 3, 4, 6};
    std::cout << buscaSequencial(5, v, 5) << "\n";
}