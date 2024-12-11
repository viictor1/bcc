#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

/*
17. Dado um vetor de inteiros, retorne o elemento majoritário do vetor. O elemento majoritário do vetor é
aquele que ocorre mais do que n
2 vezes, onde n é o tamanho do vetor. Se o vetor não contém um elemento
majoritário, retorne -1.
*/

int elementoMajoritario(std::vector<int>& arr){
    unordered_map<int, int> map;

    for(int elem : arr){
        map[elem]++;
    }

    for(int elem : arr){
        if(map[elem] > arr.size()/2){
            return elem;
        }
    }

    return -1;
}

int main() {
    // Testes
    std::vector<int> arr1 = {3, 3, 4, 2, 3, 3, 3};
    std::vector<int> arr2 = {1, 2, 3, 4, 5, 6};
    std::vector<int> arr3 = {2, 2, 1, 1, 1, 2, 2};

    std::cout << "Elemento majoritário (arr1): " << elementoMajoritario(arr1) << std::endl;
    std::cout << "Elemento majoritário (arr2): " << elementoMajoritario(arr2) << std::endl;
    std::cout << "Elemento majoritário (arr3): " << elementoMajoritario(arr3) << std::endl;

    return 0;
}
