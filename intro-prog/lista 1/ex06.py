"""
6. Escreva um programa que lê o raio (r) de um círculo. O programa deve informar: o diâmetro, a
circunferência e a área do círculo. Considere:
a. pi (π) = 3.141593
b. Diâmetro = 2r
c. Circunferência = 2πr
d. Área = πr
"""

pi = 3.141593
raio = float(input("Digite o raio do círculo "))

print(f"Diâmetro: {raio * 2}")
print(f"Circunferência: {2 * pi * raio}")
print(f"Área: {pi * (raio ** 2)}")