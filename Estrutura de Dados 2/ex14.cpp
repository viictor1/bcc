#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

/*
14. Dado um par de vetores arr1 e arr2, retorne true se arr1 é um subconjunto de arr2, ou false caso
contrário. Considere que os vetores não contém elementos duplicados. Por definição arr1 é subconjunto de
arr2 se todos os elementos de arr1 estão em arr2.
*/

bool ehSubconjunto(std::vector<int>& arr1, std::vector<int>& arr2){
    unordered_set<int> set;

    for(int elem : arr2){
        if(set.find(elem) == set.end())
            set.insert(elem);
    }

    for(int elem : arr1){
        if(set.find(elem) == set.end())
            return false;
    }

    return true;
}


int main() {
    // Teste 1: arr1 é subconjunto de arr2
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {1, 2, 3, 4, 5};
    
    if (ehSubconjunto(arr1, arr2)) {
        std::cout << "arr1 é subconjunto de arr2." << std::endl;
    } else {
        std::cout << "arr1 não é subconjunto de arr2." << std::endl;
    }

    // Teste 2: arr1 não é subconjunto de arr2
    std::vector<int> arr3 = {1, 2, 6};
    std::vector<int> arr4 = {1, 2, 3, 4, 5};
    
    if (ehSubconjunto(arr3, arr4)) {
        std::cout << "arr3 é subconjunto de arr4." << std::endl;
    } else {
        std::cout << "arr3 não é subconjunto de arr4." << std::endl;
    }

    // Teste 3: arr1 é igual a arr2
    std::vector<int> arr5 = {1, 2, 3};
    std::vector<int> arr6 = {1, 2, 3};
    
    if (ehSubconjunto(arr5, arr6)) {
        std::cout << "arr5 é subconjunto de arr6." << std::endl;
    } else {
        std::cout << "arr5 não é subconjunto de arr6." << std::endl;
    }

    return 0;
}