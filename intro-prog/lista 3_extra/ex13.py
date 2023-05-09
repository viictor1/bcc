"""
13. Escreva um programa que imprime um triângulo de caracteres invertido, alinhado à direita, com o
número de linhas informado. Você só pode usar 1 laço (não deve usar laços aninhados, isto é, laço dentro de laço).
Também não pode utilizar operadores e funções de strings.
"""

linhas = int(input("Digite o numero de linhas "))
char = "#"
linha = " "

for i in range(0, linhas * 2):
    if i < linhas:
        linha += " "
    else:
        linha += "\b\b" + char
        print(f"{linha}")
        