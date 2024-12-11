#include <unordered_set>
#include <vector>
#include <iostream>


/*7. Dado um vetor arr não-ordenado de inteiros, retorne o comprimento da maior sequência de inteiros
consecutivos em arr. Por exemplo, se arr = {1, 9, 3, 10, 4, 20, 2}, então a saída deve ser 4, pois
a maior sequência de inteiros consecutivos é {1, 3, 4, 2}. Note que os elementos desta sequência não
precisam estar um ao lado do outro no vetor arr.*/

int maiorSequenciaConsecutivos(std::vector<int>& arr){
    std::unordered_set<int> set;
    int contador = 1;
    int maxSeq = 0;

    for(int a : arr){
        set.insert(a);
    }

    for(int elem: arr){
        while(set.find(elem+1) != set.end()){
            contador++;
            elem+=1;
        }
        if(contador > maxSeq) maxSeq = contador;
        contador = 0;
    }

    return maxSeq;
}


int main() {
    std::vector<int> arr = {1, 5, 3, 6, 4, 20, 2};
    int resultado = maiorSequenciaConsecutivos(arr);

    std::cout << "Maior sequência de inteiros consecutivos: " << resultado << std::endl;

    return 0;
}