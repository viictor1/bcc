"""
12. Escreva uma função que recebe uma lista vet e devolve o maior e o menor elementos. Obs: Não é
permitido o uso de mint(), max() e list.sort()
"""

def findMinMax(ls):
    min = max = ls[0]
    for elem in ls:
        if elem > max:
            max = elem
        elif elem < min:
            min = elem
    return min,max

def main():
    print(f"{findMinMax([0, 1, 2, 3])}")

main()