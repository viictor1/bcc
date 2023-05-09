"""
12. Escreva um programa que imprime um triângulo de caracteres invertido com o número de linhas. Você só pode usar 1 laço (não deve usar laços aninhados, isto é, laço dentro de laço).
Também não pode utilizar operadores e funções de strings.
informado.
"""

linhas = int(input("Digite o numero de linhas "))
char = "#"
linha = ""

for i in range(linhas * 2, 0, -1):
    if i > linhas:
        linha += char
    else: 
        print(f"{linha}")
        linha += "\b \b"

    