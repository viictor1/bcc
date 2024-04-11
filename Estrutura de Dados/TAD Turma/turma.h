#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Turma {
    private:
        string codDisciplina;
        string codTurma;
        string semestre;

        Aluno** alunos;
        int tamVetor;
        int qtde;


    public:
        Turma(string semestre, int tamVetor){
            if(semestre == ""){
                return;
            }
            this->semestre = semestre;
            this->codTurma = "";
            this->codDisciplina = "";

            this->alunos = new Aluno*[tamVetor];
            this->tamVetor = tamVetor;
            this->qtde = 0;
        }

        ~Turma(){
            delete[] this->alunos;
        }

        bool matricula(Aluno *a){
            if(qtde >= tamVetor){
                return false;
            }

            this->alunos[qtde] = a;
            qtde++;

            return true;
        }

        int cancelaMatricula(string ra){
            for(int i = 0; i < qtde; i++){
                if(this->alunos[i]->getRa() == ra){
                    for(int j = i; j < qtde - 1; j++){
                        this->alunos[j] = this->alunos[j+1];
                    }
                    qtde--;

                    return i;
                }
            }

            return -1;
        }

        void imprime(){
            cout << "Codigo da turma: " << codTurma << " Semestre: " << semestre << endl;
            for(int i = 0; i < qtde; i++){
                this->alunos[i]->imprimir();
            }
        };

        string getCodDisciplina() { return codDisciplina; }

        string getCodTurma() { return codTurma; }

        string getSemestre() { return semestre; }

        void setCodDisciplina(string codDisciplina) { this->codDisciplina = codDisciplina; }

        void setCodTurma(string codTurma) { this->codTurma = codTurma; }

};