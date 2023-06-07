"""
11. Escreva uma função que recebe uma lista vet e devolve o maior e o menor elementos. Obs: Não é
permitido o uso de mint() e max()
"""

def findMinMax(ls):
    ls.sort()
    return ls[0], ls[len(ls) - 1]

def main():
    print(f"{findMinMax([8, 1, 23, 10, 4])}")

main()