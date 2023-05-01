"""
6. Escreva um programa que imprime a tabela ASC com valores em decimal (%d), octal (%o),
hexadecimal (%X) e o caractere (%c). Imprima apenas os caracteres 33 ao 126.
"""

for i in range(33, 127):
    print("%d %o %X %c" % (i, i, i, i))