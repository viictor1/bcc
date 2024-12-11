#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

/*
12. Dado um par de vetores arr1 e arr2, retorne um vetor contendo os elementos que estão em arr1 e em
arr2. Em outras palavras, sua função deve implementar a operação de interseção de conjuntos.
*/

std::vector<int> intersecao(std::vector<int>& arr1, std::vector<int>& arr2){
    std::unordered_set<int> set;
    std::vector<int> retorno;

    for(int elem : arr1){
        if(set.find(elem) == set.end())
            set.insert(elem);
    }

    for(int elem : arr2){
        if(set.find(elem) != set.end())
            retorno.push_back(elem);
    }
    return retorno;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};
    vector<int> result1 = intersecao(arr1, arr2);

    cout << "Interseção de arr1 e arr2: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr3 = {7, 8, 9};
    vector<int> arr4 = {10, 9, 8};
    vector<int> result2 = intersecao(arr3, arr4);

    cout << "Interseção de arr3 e arr4: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr5 = {1, 3, 5};
    vector<int> arr6 = {2, 4, 6};
    vector<int> result3 = intersecao(arr5, arr6);

    cout << "Interseção de arr5 e arr6: ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
