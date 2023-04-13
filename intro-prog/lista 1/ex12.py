"""
12. Escreva um programa que lê três números inteiros (a, b e c) e informa:
a. A média aritmética simples dos três valores.
b. A média ponderada dos três valores, considerando como pesos 10% (a), 50% (b) e 40% (c).
"""

a = int(input("Digite o valor A "))
b = int(input("Digite o valor B "))
c = int(input("Digite o valor C "))

print(f"Média simples: {(a + b + c) / 3}")
print(f"Média ponderada: {(a * 10/100) + (b * 50/100) + (c * 40/100)}")