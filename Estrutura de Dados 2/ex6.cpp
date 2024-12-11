#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>

/*
6. Dado um vetor de strings palavras, retorne um vetor de vetores, onde cada vetor interno contém todas
as palavras que são anagramas entre si. Por exemplo, se palavras = {"ate", "eat", "tea", "bat",
"tab"}, então a saída deve ser {{"ate", "eat", "tea"}, {"bat", "tab"}}.
*/

std::vector<std::vector<std::string>> agruparAnagramas(std::vector<std::string>& palavras){
    std::unordered_map<std::string, std::vector<std::string>> map;

    for (auto& palavra : palavras) {
        std::string chave = palavra;        
        std::sort(chave.begin(), chave.end());  
        map[chave].push_back(palavra); 

    std::vector<std::vector<std::string>> retorno;
    for (auto& entry : map) {
        retorno.push_back(entry.second);
    }

    return retorno; 
}

int main() {
    std::vector<std::string> palavras = {"ate", "eat", "tea", "bat", "tab"};
    std::vector<std::vector<std::string>> resultado = agruparAnagramas(palavras);

    for (const auto& grupo : resultado) {
        for (const auto& palavra : grupo) {
            std::cout << palavra << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
