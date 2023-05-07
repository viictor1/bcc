"""
3. Escreva um programa que, dado um número inteiro (positivo ou negativo) entre -99 e 99, o imprime
por extenso. Caso o número esteja fora desse intervalo, o programa deve informar um erro. Dica:
como o tamanho do número é conhecido (2 dígitos), você pode previamente desmontá-lo,
colocando cada dígito em variáveis separadas.
"""

num = int(input("Digite um numero "))
negativo = False

if num <= 99 and num >= -99: 
    if num < 0:
        num += (2 * num * -1)
        negativo = True
    
    ultimoDig = num % 10
    primeiroDig = num // 10 % 10

    if negativo == True:
        print("Menos ", end="")

    if primeiroDig == 1:
        if ultimoDig == 0:
            print("Dez")
        if ultimoDig == 1:
            print("Onze")
        elif ultimoDig == 2:
            print("Doze")
        elif ultimoDig == 3:
            print("Treze")
        elif ultimoDig == 4:
            print("Catorze")
        elif ultimoDig == 5:
            print("Quinze")
        elif ultimoDig == 6:
            print("Dezesseis")
        elif ultimoDig == 7:
            print("Dezessete")
        elif ultimoDig == 8:
            print("Dezoito")
        elif ultimoDig == 9:
            print("Dezenove")
    elif primeiroDig == 2:
        print("Vinte", end="")
    elif primeiroDig == 3:
        print("Trinta", end="")
    elif primeiroDig == 4:
        print("Quarenta", end="")
    elif primeiroDig == 5:
        print("Cinquenta", end="")
    elif primeiroDig == 6:
        print("Sessenta", end="")
    elif primeiroDig == 7:
        print("Setenta", end="")
    elif primeiroDig == 8:
        print("Oitenta", end="")
    elif primeiroDig == 9:
        print("Noventa", end="")

    if primeiroDig > 1: 
        print(" e ", end="")
    
    if primeiroDig != 1:
        if ultimoDig == 1:
            print("Um")
        if ultimoDig == 2:
            print("Dois")
        if ultimoDig == 3:
            print("Tres")
        if ultimoDig == 4:
            print("Quatro")
        if ultimoDig == 5:
            print("Cinco")
        if ultimoDig == 6:
            print("Seis")
        if ultimoDig == 7:
            print("Sete")
        if ultimoDig == 8:
            print("Oito")
        if ultimoDig == 9:
            print("Nove")
else:
    print("Número inválido")
