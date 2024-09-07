#include <iostream>
#include <vector>
#include <forward_list>
#include <stack>
#include <queue>

using namespace std;

vector<int> vet_to_vector(int n, int* v){
    vector<int> vetor;

    for(int i = 0; i < n; i++){
        vetor.push_back(v[i]);
    }

    return vetor;
}

forward_list<int> vet_to_flist(int n, int v[]){
    forward_list<int> lista;

    for(int i = n - 1; i >= 0; i--){
        lista.push_front(v[i]);
    }

    return lista;
}

stack<int> vet_to_stack(int n, int v[]){
    stack<int> pilha;

    for(int i = n - 1; i >= 0; i--){
        pilha.push(v[i]);
    }

    return pilha;
}

vector<int> list_concat(forward_list<int>& list1, forward_list<int>& list2){
    vector<int> vetor;

    for(auto it = list1.begin(); it != list1.end(); ++it){
        vetor.push_back(*it);
    }

    for(auto it = list2.begin(); it != list2.end(); ++it){
        vetor.push_back(*it);
    }

    return vetor;
}

bool verificaExpressao(const string& expressao) {
    stack<char> simbolos;

    for (char c : expressao) {
        if (c == '(' || c == '{' || c == '[') {
            simbolos.push(c);
        } else if (c == ')') {
            if (simbolos.empty() || simbolos.top() != '(') {
                return false;
            }
            simbolos.pop();
        } else if (c == '}') {
            if (simbolos.empty() || simbolos.top() != '{') {
                return false;
            }
            simbolos.pop();
        } else if (c == ']') {
            if (simbolos.empty() || simbolos.top() != '[') {
                return false;
            }
            simbolos.pop();
        }
    }

    return simbolos.empty();
}

int main(){
    int lista[5] = {1, 2, 3, 4, 5};
    vector<int> vecctor = vet_to_vector(5, lista);
    forward_list<int> flista = vet_to_flist(5, lista);
    stack<int> pilha = vet_to_stack(5, lista);
    forward_list<int> list1 = {1, 2, 3};
    forward_list<int> list2 = {4, 5, 6};
    vector<int> v = list_concat(list1, list2);

    string expressao = "{[(sasa]}";
    if (verificaExpressao(expressao)) {
        cout << "A expressão está balanceada." << endl;
    } else {
        cout << "A expressão não está balanceada." << endl;
    }
    return 0;
}