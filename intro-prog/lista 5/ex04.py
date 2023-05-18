"""
4. Dados dois parâmetros naturais m e n, escreva uma função que exibe um retângulo torcido,
formado por caracteres ‘[]’ e com mxn caracteres
"""

def skewed_rect2(l, c):
    aux = c
    k = aux
    for i in range(l):
        for j in range(c):
            while k > 0:
                print("  ", end="")
                k -= 1
            print("[]", end="")
        aux -= 1
        k = aux
        print()
            

def main():
    skewed_rect2(5,4)

main()