"""
9. Escreva um programa que lê três números e os escreve em ordem crescente.
"""

a = int(input("Digite um numero: "))
b = int(input("Digite um numero: "))
c = int(input("Digite um numero: "))

if a > b:
    aux = a
    a = b
    b = aux
if b > c:
    aux = c
    c = b
    b = aux
if a > b:
    aux = a
    a = b
    b = aux
    
print(f"{a} {b} {c}")