"""
4. Escreva um programa que imprime os N primeiros ímpares.
"""

n = int(input("Digite o numero de impares "))
impar = 1
i = 0

while i < n:
    print(f"{impar}", end=" ")
    impar += 2
    i += 1
print("\nFIM")