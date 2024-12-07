#include <unordered_set>
#include <vector>
#include <utility>
#include <iostream>


/* 3. Dado um vetor de inteiros arr, retorne um par de inteiros 
que somados resultam em um valor k dado. */


std::pair<int, int> twosum(std::vector<int>& arr, int k){
    std::unordered_set<int> hash;

    for(auto& elem : arr){
        hash.insert(elem);
    }

    for(auto& elem : arr){
        int resto = k - elem;
        if(hash.find(resto) != hash.end()){
            return std::make_pair(elem, resto);
        }
    }

    return std::make_pair(-1, -1);
}

int main() {
    std::vector<int> arr = {1, 4, 6, 8, 10};
    int k = 14;

    std::pair<int, int> resultado = twosum(arr, k);

    if (resultado.first != -1) {
        std::cout << "Par encontrado: (" << resultado.first << ", " << resultado.second << ")\n";
    } else {
        std::cout << "Nenhum par encontrado que soma " << k << "\n";
    }

    return 0;
}