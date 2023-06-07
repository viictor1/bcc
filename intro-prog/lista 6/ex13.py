"""
13. Escreva uma função que recebe uma lista vet e devolve seus 3 maiores elementos. Obs: Não é
permitido o uso de max() e list.sort()
"""

def getMax3(ls):
    max3 = max2 = max = ls[0]
    for elem in ls:
        if elem > max:
            max3 = max2
            max2 = max
            max = elem
        elif elem > max2:
            max3 = max2
            max2 = elem
        elif elem > max3:
            max3 = elem
    return max, max2, max3

def main():
    print(f"{getMax3([2, 3, 5, 19, 23, 42])}")

main()