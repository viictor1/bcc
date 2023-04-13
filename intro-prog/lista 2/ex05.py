"""
5. Escreva um programa que lê dois números naturais e informa o maior. O programa também deve
informar se os números são iguais. Caso o utilizador entre com números negativos, o programa
deve informar um erro e não realizar as demais verificações.
"""

num1 = int(input("Digite o numero 1 "))
num2 = int(input("Digite o numero 2 "))

if num1 >= 0 and num2 >= 0:
    if num1 > num2:
        print(f"Maior: {num1}")
    elif num2 > num1:
        print(f"Maior: {num2}")
    else:
        print("Os dois são iguais")
else:
    print("Numero negativos não são aceitos")