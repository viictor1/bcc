"""
8. Escreva um programa que calcula o fatorial de um número natural. Por definição: 0! = 1 e 1! = 1
"""

n = int(input("Digite um numero para calcular seu fatorial "))
fat = 1

print(f"{n}! = ", end="")
if n != 0 and n != 1:
    for i in range (1, n+1):
          if i == n:
                print(f"{i} = ", end="")
          else: 
                print(f"{i} * ", end="")
          fat *= i

print(f"{fat}")