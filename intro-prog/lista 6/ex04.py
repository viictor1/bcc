"""
4. Escreva uma função que recebe uma lista vet e devolve a média aritmética simples dos elementos.
"""

def listSum(ls):
    sum = 0
    for elem in ls:
        sum += elem
    return sum / len(ls)

def main():
    print(f"{listSum([10, 10, 10])}")

main()