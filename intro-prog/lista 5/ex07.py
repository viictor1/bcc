"""
7. Escreva uma função que exibe um triângulo retângulo formado por caracteres ‘[]’, com m
caracteres de altura.
"""

def right_triangle(m):
    aux = m
    for i in range(m):
        for j in range(i):
            print("  ", end='')
        for k in range(aux):
            print("[]", end="")
        aux -= 1
        print()

def main():
    right_triangle(5)

main()
