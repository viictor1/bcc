"""
19. Escreva um programa que verifica se um número inteiro é primo, isto é, possui divisão exata
somente pelo próprio número ou por 1.
"""

n = int(input("Digite um numero "))
i = 1
divs = 0

while i <= n:
    if n % i == 0:
        divs += 1
    i += 1

if divs == 2:
    print(f"{n} é primo!")
else:
    print(f"{n} não é primo!")