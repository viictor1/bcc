"""
9. Escreva uma função que verifica se os elementos de uma lista estão em ordem crescente. A
função deve retornar True, caso os elementos estejam dispostos em ordem crescente, ou False,
em caso contrário. Obs: Não é permitido o uso de list.sort().
"""

def isSorted(ls):
    for i in range(len(ls)):
        try:
            if ls[i] > ls[i+1]:
                return False
        except:
            pass
    return True

def main():
    print(f"{isSorted([0, 1, 2, 3, 4])}")

main()