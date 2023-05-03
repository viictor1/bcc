"""
11. Escreva um programa que faz a leitura de vários números inteiros (um a cada iteração do laço), até
que se digite zero. O programa deve imprimir a soma e a média aritmética simples dos números
digitados.
"""

soma = 0
media = 0
qtd = 0

n = int(input("Digite um numero "))
while n != 0:
    soma += n
    media += n
    qtd += 1
    n = int(input("Digite um numero "))

media /= qtd
print(f"Soma dos numeros: {soma}")
print(f"Media dos numeros: {media}")