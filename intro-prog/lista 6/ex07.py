"""
7. Escreva uma função que recebe uma lista vet e um número value. A função deve retornar uma
outra lista, contendo os múltiplos de value que estão em vet
"""

def getMultiples(ls, value):
    multiples = []
    for elem in ls:
        if elem % value == 0:
            multiples.append(elem)
    return multiples

def main():
    print(f"{getMultiples([2, 4, 6, 7, 3], 2)}")

main()