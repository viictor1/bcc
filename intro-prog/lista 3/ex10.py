"""
10. Escreva um programa que calcula a divisão inteira e o resto de dois números inteiros utilizando
somente o operador aritmético de subtração (-). O programa deve informar o quociente e o resto.
"""

a = int(input("Informe A "))
b = int(input("Informe B "))
div = a
quociente = 0
resto = 0

while div > 0:
    div -= b
    quociente += 1

if div != 0:
    div += b
    quociente -= 1

print(f"Quociente: {quociente} Resto: {resto}")