#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

/*
Dado um par de vetores arr1 e arr2, retorne true se arr1 e arr2 são disjuntos, ou false caso contrário.
Considere que os vetores não contém elementos duplicados. Por definição arr1 e arr2 são disjuntos se não
existe nenhum elemento em comum entre eles
*/

bool ehDisjunto(std::vector<int>& arr1, std::vector<int>& arr2){
    unordered_set<int> set;

    for(int elem : arr2){
        if(set.find(elem) == set.end())
            set.insert(elem);
    }

    for(int elem : arr1){
        if(set.find(elem) != set.end())
            return false;
    }

    return true;
}



int main() {
    // Teste 1: Vetores disjuntos
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6};
    
    if (ehDisjunto(arr1, arr2)) {
        std::cout << "arr1 e arr2 são disjuntos." << std::endl;
    } else {
        std::cout << "arr1 e arr2 não são disjuntos." << std::endl;
    }

    // Teste 2: Vetores com um elemento em comum
    std::vector<int> arr3 = {1, 2, 3};
    std::vector<int> arr4 = {3, 4, 5};
    
    if (ehDisjunto(arr3, arr4)) {
        std::cout << "arr3 e arr4 são disjuntos." << std::endl;
    } else {
        std::cout << "arr3 e arr4 não são disjuntos." << std::endl;
    }

    // Teste 3: Vetores com elementos iguais
    std::vector<int> arr5 = {1, 2, 3};
    std::vector<int> arr6 = {1, 2, 3};
    
    if (ehDisjunto(arr5, arr6)) {
        std::cout << "arr5 e arr6 são disjuntos." << std::endl;
    } else {
        std::cout << "arr5 e arr6 não são disjuntos." << std::endl;
    }

    return 0;
}