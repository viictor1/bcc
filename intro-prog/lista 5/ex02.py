"""
2. Dados dois parâmetros naturais m e n (linhas x colunas), escreva uma função que exibe um
retângulo formado por caracteres ‘[]’, com mxn caracteres.
"""

def rect(l, c):
    for i in range(l):
        for i in range(c):
            print("[]", end="")
        print()
    
def main():
    rect(5,10)

main()