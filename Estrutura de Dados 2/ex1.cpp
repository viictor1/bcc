#include <unordered_map>
#include <vector>
#include <iostream>

/*Retorna: um dicionario com a frequencia de cada inteiro, onde a chave é o inteiro
e o valor é a frequência.*/
std::unordered_map<int,int> contarFrequencia(std::vector<int>& arr){
    std::unordered_map<int,int> retorno;

    for(int elem : arr){
        retorno[elem]++;
    }

    return retorno;
}

int main() {
    std::vector<int> numeros = {1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5};

    std::unordered_map<int, int> frequencias = contarFrequencia(numeros);

    std::cout << "Frequências dos elementos:\n";
    for (const auto& par : frequencias) {
        std::cout << "Elemento: " << par.first << ", Frequência: " << par.second << '\n';
    }

    return 0;
}