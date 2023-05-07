"""
5. Escreva um programa que, dado um número inteiro positivo, verifica se o mesmo é um Número
Perfeito. Um número perfeito é igual à soma de seus divisores positivos. Exemplo: 6 = 1 + 2 + 3.
"""

n = int(input("Digite um numero "))
soma = 0
i = 1

while i < n:
    if n % i == 0:
        soma += i
    i += 1

print(f"{soma}")

if soma == n:
    print(f"{n} é um numero perfeito! ")
else:
    print(f"{n} não é um numero perfeito!")