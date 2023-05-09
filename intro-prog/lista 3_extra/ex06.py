"""
6. Escreva um programa que, dado um número inteiro positivo, imprime seus fatores primos.
"""

n = int(input("Digite um numero inteiro positivo "))
div = 2

print(f"Fatores: ", end="")
while n > 1:
    if n % div == 0:
        n //= div
        print(f"{div} ", end="")
    else:
        div += 1
