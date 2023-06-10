"""
22. Escreva uma função que recebe duas listas e realiza a união entre o conteúdo de ambas,
colocando o resultado em uma nova lista, a ser retornada.
"""

def listUnion(ls, ls2):
    retorno = ls.copy()

    for elem in ls2:
        if elem not in ls:
            retorno.append(elem)
    
    return retorno

def main():
    print(f"{listUnion([1,2,3,4,5], [8,2,4,9])}")

main()