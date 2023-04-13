"""
11. Escreva um programa que lê um caractere (string de 1 char) e informa se o mesmo é uma letra
maiúscula.
a. Considere como 'letra', todos os caracteres da língua portuguesa na tabela Unicode:
https://usefulwebtool.com/characters-portuguese
"""

char = int(input("Digite um numero "))

if char >= 65 and char <= 90:
    print("É a letra %c" % char)
else:
    print("Não é uma letra")