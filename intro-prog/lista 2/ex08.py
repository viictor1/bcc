"""
8. Escreva um programa que lê quatro números e informa o maior digitado.
"""

maior = int(input("Digite um numero: "))
b = int(input("Digite um numero: "))
c = int(input("Digite um numero: ")) 
d = int(input("Digite um numero: "))

if b > maior:
    maior = b
if c > maior:
    maior = c
if d > maior:
    maior = d

print(f"Maior: {maior}")