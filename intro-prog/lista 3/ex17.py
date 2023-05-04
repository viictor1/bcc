"""
17. Escreva um programa que verifica se um número inteiro é um palíndromo, isto é, se representa o
mesmo valor quando invertido. Note que será necessário desmontar o número e remontá-lo
invertido. Para tanto, lembre-se de que utilizamos a base 10, o que torna possível “mover” um
número para esquerda multiplicando-o por 10.
"""

num = int(input("Digite um numero "))
reserva = num
invertido = 0
i = 0

while i <= reserva:
    