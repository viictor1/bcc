"""
2. Escreva uma função que recebe uma lista vet e imprime apenas os valores pares.
"""

def evenList(vet):
    for elem in vet:
        if elem % 2 == 0 and elem > 0:
            print(f"{elem} ")

def main():
    evenList([2, 3, 5, 4, 10, 0])

main()