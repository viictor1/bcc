"""
14. Os números seriais de produtos de uma certa empresa são formados por um número de 10 dígitos
seguidos de 1 dígito verificador, calculado conforme exemplificado a seguir. Escreva um programa
que verifica se um um número serial de 11 dígitos (10 + verificador) está correto.
Seja num_serial = 45398016422 o número da conta (2 é o dígito verificador).
a. Somar os 10 primeiro dígitos de num_serial
i. soma = 4+5+3+9+8+0+1+6+4+2 = 42
b. Obter o resto da divisão da soma por 10
i. resto de 42 por 10 é 2 (dígito verificador).
c. Comparar o dígito verificador encontrado com o último dígito do número serial
"""

num_serial_original = num_serial = 4539801642
soma = ultimo_num = 0

for i in range(0,10):
    dig = num_serial % 10
    soma += dig
    num_serial //= 10
    if i == 0:
        ultimo_num = dig

if soma % 10 == ultimo_num:
    print("O serial está correto ")
else:
    print("O serial não está correto")