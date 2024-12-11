#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <utility>
#include <iostream>

/*
19. Dado um vetor de strings, crie um programa que conta a frequência de cada string. Além disto, a
função recebe um dicionário (hash) contendo as palavras que não devem ser contadas (stopwords). Por
3
exemplo, se arr = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"} e
stopwords = {"the", "is"}, então a saída deve ser {{"day", 1}, {"sunny", 2}}.
*/

std::unordered_map<std::string, int>
contarFrequencia(std::vector<std::string>& arr, std::unordered_set<std::string>& stopwords){
    std::unordered_map<std::string, int> retorno;

    for(auto& str : arr){
        if(stopwords.find(str) == stopwords.end()){
            retorno[str]++;
        }
    }

    return retorno;
}

int main() {
    std::vector<std::string> arr = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    
    std::unordered_set<std::string> stopwords = {"the", "is"};

    std::unordered_map<std::string, int> frequencias = contarFrequencia(arr, stopwords);

    std::cout << "Frequência das palavras (desconsiderando as stopwords):\n";
    for (const auto& item : frequencias) {
        std::cout << "{" << item.first << ", " << item.second << "}\n";
    }

    return 0;
}