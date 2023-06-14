"""
24. Escreva uma função para imprimir o número de acertos de cada aluno em uma prova. A prova
possui 20 questões e cada questão tem cinco alternativas (A, B, C, D, E). Para isso são dados:
a. lista check, de 20 elementos, com o gabarito;
b. lista answers, com as respostas dos alunos, contendo as 20 respostas de cada aluno, em
sequência.
i.
A lista contém as respostas de todos os alunos (20 para cada aluno). Dessa forma, o
tamanho da lista é múltiplo de 20. Se forem 10 alunos, answers terá tamanho 200.
"""

def checkAnswers(check, answers):
    acertos = 0
    for i in range(len(answers) // 20):
        for j in range(20):
            if check[j] == answers[j + 20 * i]:
                acertos += 1
        print(f"Acertos do aluno {i + 1}: {acertos}")
        acertos = 0

def main():
    check = ['A'] * 20
    answers = ['A'] * 100
    checkAnswers(check, answers)

main()