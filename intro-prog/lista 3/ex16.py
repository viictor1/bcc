"""
16. Escreva um programa que exibe a frequência de cada dígito em um número inteiro.
"""

n = int(input("Digite um numero "))
feq0 = feq1= feq2 = feq3 = feq4 = feq5 = feq6 = feq7 = feq8 = feq9 = 0

while n > 0:
    digito = n % 10
    n //= 10
    if digito == 0:
        feq0 += 1
    elif digito == 1:
        feq1 += 1
    elif digito == 2:
        feq2 += 1
    elif digito == 3:
        feq3 += 1
    elif digito == 4:
        feq4 += 1
    elif digito == 5:
        feq5 += 1
    elif digito == 6:
        feq6 += 1
    elif digito == 7:
        feq7 += 1
    elif digito == 8:
        feq8 += 1
    elif digito == 9:
        feq9 += 1

    

print(f"""
> Frequência de 0: {feq0}
> Frequência de 1: {feq1}
> Frequência de 2: {feq2}
> Frequência de 3: {feq3}
> Frequência de 4: {feq4}
> Frequência de 5: {feq5}
> Frequência de 6: {feq6}
> Frequência de 7: {feq7}
> Frequência de 8: {feq8}
> Frequência de 9: {feq9}
""")