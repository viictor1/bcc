"""
13. Modifique o programa anterior, letra (b), para que seja possível informar os 3 pesos, além dos 3
valores.
"""

a = int(input("Digite o valor A "))
pesoA = int(input("Digite o peso da prova A: (Ex: 40) "))
b = int(input("Digite o valor B "))
pesoB = int(input("Digite o peso da prova B: (Ex: 50) "))
c = int(input("Digite o valor C "))
pesoC = int(input("Digite o peso da prova C: (Ex: 10) "))

print(f"Média ponderada: {(a * pesoA/100) + (b * pesoB/100) + (c * pesoC/100)}")