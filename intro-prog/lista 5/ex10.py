"""
10. Escreva uma função que exibe um MENU com 5 opções para executar operações. O MENU deve
permitir operar sobre duas variáveis, A e B, que serão lidas por meio das opções [1] e [2]. Dica:
utilize um laço que só termina quando a opção 5 for digitada
"""

def runMenu():
    opcao = a = b = 0
    while opcao != 5:
        print(f"""
        --------------------------------------------------
        SUPREME SUM!                           A: {a} B: {b}
        --------------------------------------------------
        1 - Set A 
        2 - Set B 
        3 - Show A+B 
        4 - Show AxB
        5 - Exit
        """)
        opcao = int(input(""))
        if opcao == 1:
            a = int(input("Digite o novo valor de A: "))
        elif opcao == 2:
            b = int(input("Digite o novo valor de B: "))
        elif opcao == 3:
            print(f"{a} + {b} = {a+b}")
        elif opcao == 4:
            print(f"{a} * {b} = {a*b}")

def main():
    runMenu()

main()