"""
3. Escreva um programa que imprime a tabuada de um número informado.
"""

num = int(input("Digite um numero "))
i = 1

while i <= 10:
    print(f"{num} * {i} = {num * i}")
    i += 1
