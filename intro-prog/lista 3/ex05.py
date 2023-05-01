"""
5. Escreva um programa que imprime todas as letras do alfabeto (minúscula e maiúscula), segundo o
exemplo:
LETRAS DO ALFABETO:
a | A
b | B
c | C
...
"""

for i in range (97,123):
    print("%c | %c" % (i, i-32))