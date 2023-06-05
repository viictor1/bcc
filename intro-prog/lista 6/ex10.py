"""
10. Escreva uma função que recebe uma lista vet e devolve o segundo maior elemento. Dica: list.sort()
"""

def find2Max(ls):
    ls.sort()
    return ls[len(ls) - 2]

def main():
    print(f"{find2Max([2, 4, 5, 12])}")

main()