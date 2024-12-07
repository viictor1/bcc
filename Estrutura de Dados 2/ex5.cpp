#include <unordered_set>
#include <vector>
#include <iostream>


/* 5. Dado um vetor de inteiros arr, retorne um vetor com os elementos de arr, mas sem elementos repetidos.
Os elementos no vetor de saída precisam estar na mesma ordem que os elementos do vetor de entrada. */

std::vector<int> semDuplicatas(std::vector<int>& arr){
    std::unordered_set<int> repetidos;
    std::vector<int> retorno;

    for(int elem : arr){
        if(repetidos.find(elem) == repetidos.end()){
            retorno.push_back(elem);
            repetidos.insert(elem);
        }  
    }

    return retorno;
}

int main() {
    // Exemplos de teste
    std::vector<int> arr1 = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> arr2 = {7, 7, 8, 9, 10, 8};
    std::vector<int> arr3 = {};
    std::vector<int> arr4 = {1, 1, 1, 1};

    // Chamando a função e imprimindo os resultados
    auto resultado1 = semDuplicatas(arr1);
    auto resultado2 = semDuplicatas(arr2);
    auto resultado3 = semDuplicatas(arr3);
    auto resultado4 = semDuplicatas(arr4);

    // Função para imprimir vetores
    auto printVetor = [](const std::vector<int>& v) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    };

    std::cout << "Resultado 1: ";
    printVetor(resultado1);

    std::cout << "Resultado 2: ";
    printVetor(resultado2);

    std::cout << "Resultado 3: ";
    printVetor(resultado3);

    std::cout << "Resultado 4: ";
    printVetor(resultado4);

    return 0;
}