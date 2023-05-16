"""
3. Escreva uma função que verifica se um dado número é primo. A função deve devolver True, caso o
número seja primo, ou False, caso contrário.
"""

def isPrime(n):
    if n <= 1:
        return False
    if n % 2 == 0 and n != 2:
        return False
    else:
        div = 3
        while div <= n ** (1/2):
            if n % div == 0:
                return False
            div += 2    
    return True

def main():
    print(isPrime(9))

main()