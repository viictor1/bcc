#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

/*
13. Dado um par de vetores arr1 e arr2, retorne um vetor contendo os elementos que estão em arr1 mas
não estão em arr2. Em outras palavras, sua função deve implementar a operação de diferença de conjuntos.
*/

std::vector<int> diferenca(std::vector<int>& arr1, std::vector<int>& arr2){
    unordered_set<int> set;
    vector<int> retorno;

    for(int elem : arr2){
        if(set.find(elem) == set.end())
            set.insert(elem);
    }

    for(int elem : arr1){
        if(set.find(elem) == set.end())
            retorno.push_back(elem);
    }

    return retorno;
}

int main() {
    // Teste 1: Vetores com elementos comuns e diferentes
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {4, 5, 6, 7};
    
    std::vector<int> resultado1 = diferenca(arr1, arr2);
    std::cout << "Diferença (arr1 - arr2): ";
    for (int elem : resultado1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Teste 2: arr1 e arr2 com elementos totalmente diferentes
    std::vector<int> arr3 = {10, 20, 30};
    std::vector<int> arr4 = {40, 50, 60};
    
    std::vector<int> resultado2 = diferenca(arr3, arr4);
    std::cout << "Diferença (arr3 - arr4): ";
    for (int elem : resultado2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Teste 3: arr1 e arr2 com elementos iguais
    std::vector<int> arr5 = {7, 8, 9};
    std::vector<int> arr6 = {7, 8, 9};
    
    std::vector<int> resultado3 = diferenca(arr5, arr6);
    std::cout << "Diferença (arr5 - arr6): ";
    for (int elem : resultado3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}