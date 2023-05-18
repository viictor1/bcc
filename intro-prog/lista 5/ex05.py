"""
5. Dados dois parâmetros naturais m e n, escreva uma função que exibe um retângulo formado por
caracteres ‘X’ intercalados com ‘-’, tendo n caracteres ‘X’ de largura. As linhas devem estar
contidas entre colchetes.
"""

def xbox(l, c):
    for i in range(l):
        print('[', end="")
        for j in range(c):
            if j == c-1:
                print('X', end="")
            else:
                print("X", end="-")
        print(']')

def main():
    xbox(3, 6)

main()