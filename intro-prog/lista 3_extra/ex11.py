"""
11. Escreva um programa que imprime um triângulo de caracteres com o número de linhas informado.
Você só pode usar 1 laço (não deve usar laços aninhados, isto é, laço dentro de laço).
Também não pode utilizar operadores e funções de strings.
"""

linhas = int(input("Digite a quantidade de linhas "))

linha = ""

for i in range (0, linhas):
    linha += "#"
    print(linha)