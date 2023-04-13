"""
6. Escreva um programa que lê um inteiro representando um ano e verifica se o mesmo é bissexto.
Para um ano ser bissexto (leap year), ele precisa:
a. Ser divisível por 4 e não divisível por 100, OU, ser divisível por 400.
"""

ano = int(input("Digite um ano "))

if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
    print(f"{ano} é bissexto")
else:
    print(f"{ano} não é bissexto")