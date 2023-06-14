"""
25. Escreva uma função que recebe duas listas de inteiros (bin1 e bin2) de mesmo tamanho, que
devem ser interpretadas como dois números binários de n algarismos. A função deve calcular a
sequência de números que representa a soma dos dois binários, colocando-a em uma nova lista a
ser retornada.
"""

def binarySum(bin1, bin2):
    carry = 0
    sum = [0] * len(bin1)

    for i in range(len(bin1) - 1, -1, -1):
        if bin1[i] + bin2[i] + carry == 3:
            sum[i] = 1
            carry = 1

        elif bin1[i] + bin2[i] + carry == 2:
            sum[i] = 0
            carry = 1
        
        elif bin1[i] + bin2[i] + carry == 1:
            sum[i] = 1
            carry = 0

        elif bin1[i] + bin2[i] + carry == 0:
            sum[i] = 0
            carry = 0
    
    return sum

def main():
    print(f"{binarySum([0,1,0,0,1,1,0,1], [0,1,1,1,0,1,1,0])}")
    print(f"{binarySum([0,1], [1,0])}")

main()  