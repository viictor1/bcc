#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Turma{
    private:
        int codigoDisciplina;
        int codigoTurma;
        string semestre;
        Aluno* alunos;

    public:
        Turma(int codigoDisciplina, int codigoTurma, string semestre, Aluno* alunos){
            if(semestre.empty()){
                cout << "Semestre não pode possuir um valor vazio";
                return;
            };

            this->codigoDisciplina = codigoDisciplina;
            this->codigoTurma = codigoTurma;
            this->semestre = semestre;
            this->alunos = alunos;
        }

        void setCodigoDisciplina(int codigoDisciplina){
            this->codigoDisciplina = codigoDisciplina;
        }

        void setCodigoTurma(int codigoTurma){
            this->codigoTurma = codigoTurma;
        }

        int getCodigoDisciplina(){
            return this->codigoDisciplina;
        }

        int getCodigoTurma(){
            return this->codigoTurma;
        }

        string getSemestre(){
            return this->semestre;
        }

        Aluno* getAlunos(){
            return this->alunos;
        }

        void matricularAluno(Aluno aluno){
            this->alunos->push_back(aluno);        
        }

        void desmatricularAluno(Aluno aluno){
            Aluno aluno = std::find(alunos.begin(), alunos.end(), aluno);

            if (aluno != alunos.end()) {
                this->alunos->erase(aluno);
            } 
        }

        void listarAlunos(){
            for (Aluno* aluno : alunos) {
                cout << "(" << aluno->ra << ", " << aluno->nome << ")" << endl;

            }
        }

        ~Turma() { 
            cout << "Destruindo" << endl; 
            for (Aluno* aluno : alunos) {
                delete aluno; 
            }
        }
};