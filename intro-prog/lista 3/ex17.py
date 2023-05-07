"""
17. Escreva um programa que verifica se um número inteiro é um palíndromo, isto é, se representa o
mesmo valor quando invertido. Note que será necessário desmontar o número e remontá-lo
invertido. Para tanto, lembre-se de que utilizamos a base 10, o que torna possível “mover” um
número para esquerda multiplicando-o por 10.
"""

reserva = num = int(input("Digite um numero "))
invertido = 0
digito = 0

while reserva > 0:
    digito = reserva % 10
    reserva //= 10
    invertido = invertido * 10 + digito

if num == invertido:
    print(f"{num} = {invertido}")
    print('Palíndromo!')
else:
    print(f"{num} != {invertido}")
    print('Não é palíndromo!')