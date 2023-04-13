"""
14/15. Escreva um programa que lê um número float (com parte decimal) e informa separadamente:
a. O número com 2 casas de precisão ("%.2f");
b. A parte inteira;
c. A parte decimal;
"""

num = float(input("Digite um número float: "))
print("Número com duas casas de precisão %.2f " % num)
print("A parte inteira: %d " % num)
print(f"A parte decimal: {num - int(num)}")