"""
10. Escreva um programa que imprime uma caixa de caracteres com as dimensões informadas. O
programa deve ler o caractere, bem como, as dimensões da caixa (largura e altura). Você só pode
usar 1 laço (não deve usar laços aninhados, isto é, laço dentro de laço). Também não pode
utilizar operadores e funções de strings.
"""
char = input("Digite o caractere ")
altura = int(input("Digite a altura "))
largura = int(input("Digite a largura "))
i = 0
j = 0

while i < largura * altura:
    if j == largura:
        print("")
        j = 0
    print(f"{char}", end="")
    i += 1
    j += 1
print("")