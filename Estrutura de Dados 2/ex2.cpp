#include <unordered_map>
#include <vector>
#include <iostream>

/*2. Dado um vetor de inteiros arr, retorne a posição do primeiro elemento do vetor que não tem duplicata.
Se todos os elementos ocorrerrem pelo menos duas vezes, retorne -1.
*/

int primeiroUnico(std::vector<int>& arr){
    std::unordered_map<int,int> contagem;

    for(int elem : arr){
        contagem[elem]++;
    }

    for(int i = 0; i < arr.size(); i++){
        if(contagem[arr[i]] == 1)
            return i;
    }

    return -1;
}

int main() {
    // Exemplos de teste
    std::vector<int> arr1 = {4, 5, 1, 2, 0, 4, 1, 2};
    std::vector<int> arr2 = {7, 3, 5, 3, 7, 5, 8};
    std::vector<int> arr3 = {2, 2, 2, 2};

    std::cout << "Teste 1: " << primeiroUnico(arr1) << "\n"; // Deve retornar 1 (índice do elemento 5)
    std::cout << "Teste 2: " << primeiroUnico(arr2) << "\n"; // Deve retornar 6 (índice do elemento 8)
    std::cout << "Teste 3: " << primeiroUnico(arr3) << "\n"; // Deve retornar -1 (nenhum elemento único)

    return 0;
}