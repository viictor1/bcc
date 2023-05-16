"""
8. Escreva uma função que imprime uma linha com duas “pontas”. A função receberá como
parâmetros: a largura da linha (n), o caractere de preenchimento da linha (fill) e o caractere das
pontas da linha (edge)
"""

def printLine(largura, fill, edge):
    for i in range(0, largura):
        if i == 0 or i == largura - 1:
            print(edge, end="")
        else:
            print(fill, end="")
    print("")
    
def main():
    printLine(5, "-", "#")

main()