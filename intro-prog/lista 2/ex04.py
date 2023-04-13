"""
4. Escreva um programa que lê um número de 0 a 9 e o imprime por extenso. O programa deve
validar a entrada (0 <= x <= 9) e informar erro, caso ocorra.
"""

x = int(input("Digite um numero de 0 a 9 "))

if 0 <= x and x <= 9:
    if x == 1:
        print("Um")
    elif x == 2:
        print("Dois")
    elif x == 3:
        print("Tres")
    elif x == 4:
        print("Quatro")
    elif x == 5:
        print("Cinco")
    elif x == 6:
        print("Seis")
    elif x == 7:
        print("Sete")
    elif x == 8:
        print("Oito")
    elif x == 9:
        print("Nove")
else:
    print("Numero inválido")