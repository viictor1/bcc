#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

/*
Dado um par de vetores arr1 e arr2, retorne um vetor contendo os elementos que estão em arr1 ou
em arr2, mas não em ambos. Em outras palavras, sua função deve implementar a operação de diferença
simétrica de conjuntos.
*/

std::vector<int> diferencaSimetrica(std::vector<int>& arr1, std::vector<int>& arr2){
    unordered_set<int> set1;
    unordered_set<int> set2;

    std::vector<int> retorno;

    for(int elem : arr1){
        if(set1.find(elem) == set1.end())
            set1.insert(elem);
    }
    
    for(int elem : arr2){
        if(set2.find(elem) == set2.end())
            set2.insert(elem);
    }

    for(int elem : set1){
        if(set2.find(elem) == set2.end()){
            retorno.push_back(elem);
        }
    }

    for(int elem : set2){
        if(set1.find(elem) == set1.end()){
            retorno.push_back(elem);
        }
    }


    return retorno;
}


void imprimirVetor(const std::vector<int>& vetor) {
    for (int num : vetor) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Testes
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {4, 5, 6, 7, 8};
    
    std::vector<int> resultado = diferencaSimetrica(arr1, arr2);
    
    std::cout << "Diferença simétrica entre arr1 e arr2: ";
    imprimirVetor(resultado);
    
    return 0;
}