"""
5. Escreva um programa que lê a largura e o comprimento de um retângulo. O programa deve
imprimir o perímetro e a área do retângulo. Considere:
a. Área = largura x comprimento
b. Perímetro = soma de todos os lados
"""

largura = int(input("Digite a largura do retângulo "))
comprimento = int(input("Digite o comprimento do retângulo "))

print(f"Área: {largura * comprimento}")
print(f"Perímetro: {largura * 2 + comprimento * 2}")