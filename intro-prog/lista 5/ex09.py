"""
9. Escreva uma função que exibe um triângulo centralizado formado por caracteres ‘[]’, com m
caracteres de altura.
"""

def centered_triangle(m):
    spaces = m 
    columns = 1

    for i in range(m):

        for j in range(spaces):
            print(" ", end="")

        for k in range(columns):
            print("[]", end="")
            
        print()
        spaces -= 1
        columns += 1

def main():
    centered_triangle(3)

main()