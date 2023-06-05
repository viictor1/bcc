"""
5. Escreva uma função que recebe uma lista vet, bem como, um elemento elem a ser procurado. A
função deve retornar a posição (índice) do elemento ou None caso ele não esteja no vetor
"""

def find(ls, num):
    for i in range(len(ls)):
        if ls[i] == num:
            return i
    return


def main():
    print(f"{find([0, 2, 3], 2)}")

main()