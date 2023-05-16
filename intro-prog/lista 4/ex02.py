"""
2. Utilizando a função summation(n) do exercício anterior, escreva uma função que devolve o
produto (multiplicação) dos somatórios de dois números.
"""

def summation(n):
    sum = 0
    for i in range (1, n + 1):
        sum += i
    return sum

def summationProduct(n1, n2):
    return summation(n1) * summation(n2)

def main():
    print(summationProduct(5, 10))

main()