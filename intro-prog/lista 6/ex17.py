"""
17. Escreva uma função que recebe uma lista vet preenchido com inteiros positivos. A função deve
imprimir as ocorrências (contagem) de cada número na lista. Dica: utilize uma lista count para
armazenar a contagem de cada elemento na lista vet, relacionando as posições de count aos
valores em vet. A lista count precisa ter tamanho max(vet)+1.
"""

def countElementes(ls):
    count = []
    for i in range(max(ls) + 1):
        count.append(0)

    for elem in ls:
        count[elem] += 1
    
    for i in range(len(count)):
        if count[i] != 0:
            print(f"Ocorrência de {i}: {count[i]}")

def main():
    countElementes([1, 1, 1, 2, 5, 5, 2, 10])

main()