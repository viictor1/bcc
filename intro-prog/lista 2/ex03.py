"""
3. Escreva um programa que lê um número inteiro e informa se o mesmo é par ou ímpar
"""

num = int(input("Digite um numero: "))

if num % 2 == 0:
    print(f"O numero {num} é par")
else:
    print(f"O numero {num} é impar")