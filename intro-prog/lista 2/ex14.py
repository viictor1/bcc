"""
14. Escreva um programa que lê um caractere e informa:
a. Se é letra e, neste caso, também informa se é vogal ou consoante;
b. Se é número;
c. Se é símbolo (ASCII 33 ao 126, exceto números e símbolos).
"""

char = int(input("Digite um char em ascii "))

if char >= 65 and char <= 122:
    if char == 65 or char == 69 or char == 73 or char == 79 or char == 85 or char == 97 or char == 101 or char == 105 or char == 111 or char == 117:
        print("É uma vogal")
    else:
        print("É uma consoante")
elif char >=48 and char <= 57:
    print("É um numero")
elif char >= 33  and char <= 126:
    print("É um simbolo")