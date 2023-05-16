"""
1. Escreva uma função que calcula e devolve o somatório de um número.
Função: def summation(n: int) -> int
"""

def summation(n):
    sum = 0
    for i in range (1, n + 1):
        sum += i
    return sum

def main():
    print(summation(10))
    print(summation(5))
    print(summation(0))
    print(summation(-5))

main()