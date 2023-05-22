"""
6. Escreva um programa que, dado um número inteiro positivo, imprime seus fatores primos.
"""

n = int(input("Digite um numero inteiro positivo "))
div = 2
cont = 0

if n > 1:
    while n > 1:
        if n % div == 0:
            cont += 1
            n /= div
        else:
            if cont > 0:
                print(f"{cont} vezes fator {div}")
            cont = 0
            div += 1

    print(f"{cont} vezes fator {div}")
