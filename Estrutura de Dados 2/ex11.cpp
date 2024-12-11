#include <unordered_set>
#include <vector>
#include <iostream>

/*11. Dado um par de vetores arr1 e arr2, retorne um vetor contendo os elementos que estão em arr1 ou em
arr2. Em outras palavras, sua função deve implementar a operação de união de conjuntos.*/

using namespace std;

std::vector<int> uniao(std::vector<int>& arr1, std::vector<int>& arr2){
    std::unordered_set<int> set;
    std::vector<int> retorno;

    for(int elem : arr1){
        if(set.find(elem) == set.end()){
            retorno.push_back(elem);
            set.insert(elem);
        }
    }

    for(int elem : arr2){
        if(set.find(elem) == set.end()){
            retorno.push_back(elem);
            set.insert(elem);
        }
    }

    return retorno;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};
    vector<int> result1 = uniao(arr1, arr2);

    cout << "União de arr1 e arr2: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr3 = {7, 8, 9};
    vector<int> arr4 = {10, 9, 8};
    vector<int> result2 = uniao(arr3, arr4);

    cout << "União de arr3 e arr4: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr5 = {1, 3, 5};
    vector<int> arr6 = {2, 4, 6};
    vector<int> result3 = uniao(arr5, arr6);

    cout << "União de arr5 e arr6: ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}