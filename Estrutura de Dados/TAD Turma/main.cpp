#include <stdlib.h>
#include <iostream>
#include <string>
#include "aluno.h"
#include "turma.h"

int main(){
    Aluno* a1 = new Aluno("a111", "Joao");
    Aluno* a2 = new Aluno("a222", "Maria");
    Aluno *alunos = new Aluno[44];
    
    Turma turma = new Turma(1, 2, "2024-1", alunos);

    delete(turma);
}