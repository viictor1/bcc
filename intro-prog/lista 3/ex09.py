"""
9. Escreva um programa que calcula a multiplicação de dois números inteiros utilizando somente o
operador aritmético de adição (+).
"""

n1 = int(input("Digite o numero 1 "))
n2 = int(input("Digite o numero 2 "))
result = 0
i = 0

while i <= n2:
    result += n1
    i += 1

print(f"{n1} * {n2} = {n1 * n2}")