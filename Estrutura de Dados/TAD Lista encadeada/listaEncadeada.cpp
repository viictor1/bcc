
#include <string>

#define LISTA_VAZIA -999999
#define POSICAO_INVALIDA -999998

class No {
  public:
    No* ant;
    int dado;
    No* prox;

   No() {}
   No(int dado) { this->dado = dado; }
   No(No* ant, int dado, No* prox) {
      this->ant = ant;
      this->dado = dado;
      this->prox = prox;
   }
};

class ListaEncadeada {

  private:
    No* primeiro;
    No* ultimo;
    int qtde;

  public:
   ListaEncadeada() {
      this->primeiro = nullptr;
      this->ultimo = nullptr;
      this->qtde = 0;
   }
   ~ListaEncadeada() {
   }

  private:

  public:
   No* getEnderecoNo(int pos) {
    if(pos > this->size() || this->empty()){
        return nullptr;
    }

    if(pos <= this->size() / 2){
        No* aux = this->primeiro;
        for(int i = 0; i < pos - 1; i++){
            aux = aux->prox;
        }
        return aux;
    }
    else{
        No* aux = this->ultimo;
        for(int i = this->size(); i > pos; i--){
            aux = aux->ant;
        }
        return aux;
    }
   }
   // Insere o elemento e na última posição
   bool push_back(int e) {
    No* no = new No(e);

    if(this->empty()){
        this->primeiro = no;
    }
    else{
        this->ultimo->prox = no;
        no->ant = this->ultimo;
    }

    this->ultimo = no;
    this->qtde++;
    return true;
   }

   // Insere o elemento e na primeira posição
   bool push_front(int e) {
    No* novo = new No(e);

    if(this->empty()){
        this->ultimo = novo;
    }
    else{
        this->primeiro->ant = novo;
        novo->prox = this->primeiro;
    }
    this->primeiro = novo;
    this->qtde++;

    return true;
   }

   // Insere o elemento e na posição pos
   bool insert(int pos, int e) {
    if(pos > this->size() || pos < 0){
        return false;
    }

    if(this->empty() || pos == 0){
        push_front(e);
    } else if(pos == this->size()){
        this->push_back(e);
    }else{
        No* novo = new No(e);
        No* aux = getEnderecoNo(pos - 1);

        novo->prox = aux->prox;
        aux->prox = novo;
        novo->ant = aux;
        novo->prox->ant = novo;

        this->qtde++;
    }

    return true;
   }

   // Remove o último elemento. Devolve o elemento removido
   int pop_back() {
    if(this->empty()){
        return LISTA_VAZIA;
    }

    No* aux = this->ultimo;
    this->ultimo = aux->ant;

    if(this->size() == 1){
        this->primeiro = nullptr;
    }else{
        aux->ant->prox = nullptr;
    }

    int dado = aux->dado;
    this->qtde--;

    delete aux;
    return dado;
   }

   // Remove o primeiro elemento
   int pop_front() {
    if(this->empty()){
        return LISTA_VAZIA;
    }

    No* aux = this->primeiro;
    this->primeiro = aux->prox;

    if(this->size() == 1){
        this->ultimo = nullptr;
    }else{
        this->primeiro->ant = nullptr;
    }
    int dado = aux->dado;
    this->qtde--;
    delete aux;
    return dado;
   }


   // Remove o elemento da posição pos e retorna o elemento removido
   int erase(int pos) {
    if(this->empty()){
        return LISTA_VAZIA;
    }
    if(pos > this->size() || pos < 0){
        return POSICAO_INVALIDA;
    }

    if(this->size() == 1 || pos == 0){
        return this->pop_front();
    }
    if(pos == this->size()){
        return this->pop_back();
    }

    No* no = getEnderecoNo(pos);
    no->ant->prox = no->prox;
    no->prox->ant = no->ant;

    int dado = no->dado;
    this->qtde--;
    delete no;
    return dado;
   }

   // Retorna o primeiro elemento
   int front() {
    if(this->empty()){
        return LISTA_VAZIA;
    }

    return this->primeiro->dado;
   }
   // Retorna o último elemento
   int back() {
    if(this->empty()){
        return LISTA_VAZIA;
    }
    return this->ultimo->dado;
   }

   // Retorna o elemento da posição pos
   int at(int pos) {
    if(this->empty()){
        return LISTA_VAZIA;
    }

    return this->getEnderecoNo(pos)->dado;
   }

   // Torna a lista vazia
   void clear() {

    while(!this->empty()){
        this->pop_front();
    }
   }

   // Verifica se o vetor está vazio
   bool empty() { return this->qtde == 0; }

   // Devolve a quantidade de elementos
   int size() { return this->qtde; }

   // Substitui o elemento da posição pos pelo elemento e
   bool replace(int pos, int e);

   // Imprime todos os elementos no formato [1,2,3]
   void print() {
    printf("[");
    for(No* aux = this->primeiro; aux != nullptr; aux = aux->prox){
        printf("%d,", aux->dado);
        if (aux->prox != nullptr) printf(",");
    }
    printf("]\n");
   }

   void printInverso() {
    printf("[");
    for(No* aux = this->ultimo; aux != nullptr; aux = aux->ant){
        printf("%d,", aux->dado);
        if (aux != this->primeiro) printf(",");
    }
    printf("]\n");
   }
};