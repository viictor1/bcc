"""
1. Escreva uma função que recebe uma lista vet a imprime em ordem reversa. Não é permitido o uso
de list.reverse()
"""

def invertList(vet):
    reverse = vet.copy()
    for i in range(len(vet)):
        aux = vet[i]
        reverse[i] = vet[len(vet)-i - 1]
        reverse[len(vet)-i - 1] = aux
    return reverse

def main():
    vet = [1, 2, 3, 4, 5]
    reverse = invertList(vet)
    print(f"Lista Original: {vet}")
    print(f"Lista Reversa: {reverse}")

main()