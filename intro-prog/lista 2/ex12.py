"""
12. Escreva uma versão modificada do programa anterior, agora informando se o caractere é uma
letra, independente do mesmo ser informado como minúscula ou maiúscula.
"""

char = int(input("Digite um numero "))

if char >= 65 and char <= 122:
    print("É a letra %c" % char)
else:
    print("Não é uma letra")