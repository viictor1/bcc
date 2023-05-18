"""
6. Escreva uma função que desenha uma caixa de tamanho mxn, com estilo igual ao mostrado no
exemplo abaixo.
"""

def box(l, c):
    for i in range(l):
        if i == l-1 or i == 0:
            print('+', end = "")
            for j in range(c):
                print("-", end="")
            print("+")
        else:
            print("|", end="")
            for j in range(c):
                print(" ", end="")
            print("|")

def main():
    box(5,5)

main()
