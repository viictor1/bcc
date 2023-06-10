"""
23. Escreva uma função que recebe duas listas e realiza a interseção entre o conteúdo de ambas,
colocando o resultado em uma nova lista, a ser retornada.
"""

def listIntersection(ls, ls2):
    retorno = []

    for elem in ls:
        if elem in ls2:
            retorno.append(elem)
    
    return retorno

def main():
    print(f"{listIntersection([8,2,4,9], [1,2,3,4,5])}")

main()