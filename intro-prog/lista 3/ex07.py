"""
7. Escreva um programa que calcula o somatório de um número natural X fornecido pelo teclado.
Exemplo:
Informe o número: 5
1 + 2 + 3 + 4 + 5 = 15
"""

n = int(input("Digite um numero "))
i = 1
soma = 0

while i <= n:
    if i == n:
        print(f"{i} =", end=" ")
    else:
     print(f"{i} +", end=" ")
    soma += i
    i+= 1
print(f"{soma}")