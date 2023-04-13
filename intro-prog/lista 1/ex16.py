"""
    16. Escreva um programa que lê um número de dias e converte em: anos + semanas + dias.
    a. Considere:
    i. Ano = 365 dias
    ii. Semana = 7 dias
    Exemplo:
    Dias: 427 = 1 ano(s), 8 semana(s) e 6 dia(s)
"""

diasInput = int(input("Digite a quantidade de dias "))

anos = diasInput // 365
semanas = (diasInput % 365) // 7
dias = (diasInput % 365) % 7

print(f"Anos: {anos}")
print(f"Semanas: {semanas}")
print(f"Dias: {dias}")
