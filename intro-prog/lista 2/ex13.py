"""
13. Escreva um programa que lê um caractere da entrada. Se não for letra, informa. Se for letra,
verifica se é maiúscula (e passa para maiúscula se necessário). Ao final, deve informar a letra
digitada em maiúsculo
"""

char = int(input("Digite um numero "))

if char >= 65 and char <= 122:
    if char >= 65 and char <= 90:
        print("%c" %char)
    else:
        print("%c" % (char - 32))
else:
    print("Não é uma letra")