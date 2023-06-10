"""
21. Escreva uma função que recebe duas listas e concatena o conteúdo de ambas em uma nova lista,
a ser retornada. Obs: Não é permitido o uso de list.extend() e do operador +.
"""

def listConcat(ls1, ls2):
    retorno = ls1.copy()

    for elem in ls2:
        retorno.append(elem)
    
    return retorno

def main():
    print(f"{listConcat([1,2,3],[4,5,6])}")

main()