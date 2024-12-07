#include <unordered_set>
#include <vector>
#include <iostream>

/* 4. Dado um vetor de inteiros arr, retorne true se arr contém algum elemento repetido, e false caso
contrário. */

bool temDuplicatas(std::vector<int>& arr){
    std::unordered_set<int> hash;

    for(int elem : arr){
        if(hash.find(elem) != hash.end()){
            return true;
        }
        hash.insert(elem);
    }

    return false;
}

int main() {
    // Testes
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {1, 2, 3, 2, 5};
    std::vector<int> arr3 = {};
    std::vector<int> arr4 = {7, 7, 7, 7};

    std::cout << "Teste 1: " << (temDuplicatas(arr1) ? "Tem duplicatas" : "Sem duplicatas") << "\n";
    std::cout << "Teste 2: " << (temDuplicatas(arr2) ? "Tem duplicatas" : "Sem duplicatas") << "\n";
    std::cout << "Teste 3: " << (temDuplicatas(arr3) ? "Tem duplicatas" : "Sem duplicatas") << "\n";
    std::cout << "Teste 4: " << (temDuplicatas(arr4) ? "Tem duplicatas" : "Sem duplicatas") << "\n";

    return 0;
}