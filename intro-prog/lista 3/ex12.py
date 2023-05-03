"""
12. Escreva um programa que faz a leitura de vários números inteiros (um a cada iteração do laço), até
que se digite zero. O programa deve imprimir o maior e o menor entre os números digitados.
Exemplo:
"""

maior = menor = n = int(input("Digite um numero ")) 
while n != 0:
    if n > maior:
        maior = n
    elif n < menor:
        menor = n
    n = int(input("Digite um numero ")) 

print(f"Maior: {maior}")
print(f"Menor: {menor}")
