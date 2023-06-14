"""
6. Escreva uma função que recebe uma lista vet ordenado crescentemente, bem como, um elemento
elem a ser procurado. A função deve retornar a posição (índice) do elemento ou None caso ele
não esteja na lista. OBS: Tente usar o fato da lista estar ordenada para criar uma solução
melhor que a anterior
"""

def find(ls, num):
    for i in range(len(ls)):
        if num < ls[i]:
            break
        elif ls[i] == num:
            return i
    return

def main():
    print(f"{find([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 7)}")

main()