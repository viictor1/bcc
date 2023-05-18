"""
3. Dados dois parâmetros naturais m e n, escreva uma função que exibe um retângulo torcido,
formado por caracteres ‘[]’ e com mxn caracteres.
"""

def skewed_rect(l, c):
    for i in range(l):
        for j in range(i):
            print("  ", end="")
        for k in range(c):
            print("[]", end="")
        print()

def main():
    skewed_rect(5,4)

main()