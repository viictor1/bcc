#include <unordered_set>
#include <vector>
#include <iostream>


/*
10. Dado um par de vetores, arr1 e arr2, retorne true se arr1 e arr2 contém os mesmos elementos, ou
false caso contrário. Considere que os vetores não contém elementos duplicados e que não necessariamente
os elementos estão na mesma ordem.
*/

bool saoIguais(std::vector<int>& arr1, std::vector<int>& arr2){
    if(arr1.size() != arr2.size()) return false;

    std::unordered_set<int> set;

    for(int elem : arr1){
        set.insert(elem);
    }

    for(int elem : arr2){
        if(set.find(elem) == set.end()) return false;
    }

    return true;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4};
    std::vector<int> arr2 = {4, 3, 2, 1};
    std::vector<int> arr3 = {1, 2, 3, 5};

    std::cout << "arr1 e arr2 são iguais? " << (saoIguais(arr1, arr2) ? "Sim" : "Não") << std::endl;
    std::cout << "arr1 e arr3 são iguais? " << (saoIguais(arr1, arr3) ? "Sim" : "Não") << std::endl;

    return 0;
}