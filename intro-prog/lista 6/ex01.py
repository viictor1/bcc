"""
1. Escreva uma função que recebe uma lista vet a imprime em ordem reversa. Não é permitido o uso
de list.reverse()
"""

def invertList(vet):
    for i in range(len(vet) -1, -1 , -1):
        print(f"{vet[i]} ", end="")

def main():
    vet = [1, 2, 3, 4, 5]
    invertList(vet)

main()