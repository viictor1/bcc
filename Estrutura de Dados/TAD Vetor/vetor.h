#include <iostream>
#include <string>

using namespace std;
class Vetor{

    private:
        int* array;
        int capacity;
        int tamanho;

    public:
        Vetor(){
            capacity = 10;
            tamanho = 0; 
            array = new int[capacity];        
        }
        ~Vetor(){
            delete[] array; 
        }

        // Insere o elemento e na última posição
        bool push_back(int e){
            this->gerenciaCapacidade();
            array[tamanho] = e;
            tamanho++;
            return true;
        }
        // Insere o elemento e na primeira posição
        bool push_front(int e){
            tamanho++;
            this->gerenciaCapacidade();

            for(int i = tamanho - 1; i > 0; i--){
                array[i] = array[i - 1];
            }
            array[0] = e;
            return true;
        }
        // Insere o elemento e na posição pos
        bool insert(int pos, int e){
            tamanho++;
            this->gerenciaCapacidade();
            for(int i = tamanho; i >= pos; i--){
                array[i+1] = array[i];
            }
            array[pos] = e;
            return true;
        }

        // Remove o último elemento
        int pop_back(){
            if (tamanho == 0) {
                return -1;
            }
            int popped = array[tamanho - 1];
            array[tamanho - 1] = 0;
            tamanho--;
            return popped;
        }
        // Remove o primeiro elemento
        int pop_front(){
            int popped = array[0];
            for(int i = 0; i < tamanho; i++){
                array[i] = array[i+1];
            }
            tamanho--;
            return popped;
        }
        // Remove o elemento da posição pos e retorna o elemento removido
        int erase(int pos){
            if(pos > tamanho){
                return -1;
            }
            int e = array[pos];
            for(int i = pos; i < tamanho; i++){
                array[i] = array[i+1];
            }
            tamanho--;
            return e;
        }

        // Retorna o primeiro elemento
        int front(){
            return array[0];
        }
        // Retorna o último elemento
        int back(){
            return array[tamanho - 1];
        }
        // Retorna o elemento da posição pos
        int at(int pos){
            return array[pos];
        }

        // Torna a lista vazia
        void clear(){
            for(int i = 0; i < tamanho; i++){
                array[i] = 0;
            }

            tamanho = 0;
        }

        // Verifica se o vetor está vazio
        bool empty(){
            return tamanho > 0;
        }
        // Devolve a quantidade de elementos
        int size(){
            return tamanho;
        }
        // Substitui o elemento da posição pos pelo elemento e
        bool replace(int pos, int e){
            if(pos > tamanho){
                return false;
            }
            array[pos] = e;
            return true;
        }

        // Imprime todos os elementos no formato [1,2,3]
        void print(){
            cout << "[";
            for(int i = 0; i < tamanho; i++) {
                cout << array[i];
                if(i < tamanho - 1) {
                    cout << ", ";
                }
            }
            cout << "]" << endl;
        }

    private:
        // Dobrar a capacidade quando não houver mais espaço
        // Reduzir a capacidade pela metade quando for inferior a 25% de ocupação
        void gerenciaCapacidade() {
        if (tamanho + 1 >= capacity) {
            capacity *= 2;
            array = (int*)realloc(array, capacity * sizeof(int));
        } else if (tamanho < (capacity * 0.25)) {
            capacity /= 2;
            array = (int*)realloc(array, capacity * sizeof(int));
        }
    }
        
};