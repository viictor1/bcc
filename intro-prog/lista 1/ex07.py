"""
7. Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Resto (utilizado o operador %)
b. Resto (sem utilizar o operador %)
i. Dica: Faça a divisão “no papel” e observe quais outras operações podem ser
utilizadas para obter o resto.
"""

a = int(input("Digite um número: "))
b = int(input("Digite outro número: "))

print(f"Resto com %: {a % b}")
print(f"Resto sem % {a - (a // b * b)}")