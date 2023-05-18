"""
11. Escreva uma função que converte um número binário (int) para decimal (int). O processo envolve
somar as multiplicações dos dígitos binários por potências de 2, com expoente crescente da direita
para a esquerda. Observe o exemplo
"""

def bin_to_dec(bin):
    print(f"{bin} = ", end="")
    i = total = 0
    while bin > 0:
        total += (bin % 10) * 2 ** i
        bin //= 10
        i += 1
    print(f"{total}")

def main():
    bin_to_dec(10010)

main()
