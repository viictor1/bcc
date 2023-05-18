"""
12. Escreva uma função que imprime um tablado de tamanho 20x10, contendo um personagem ‘#’, que
deverá ser controlado pela entrada dos caracteres WASD. O personagem inicia no centro do
trabalho - posição (10, 10). O código deve controlar a posição (linha x coluna) do personagem e
alterá-la conforme os caracteres WASD forem informados. Note que, ao imprimir o tablado, é
necessário considerar a posição em que se encontra o personagem para imprimí-lo na posição
adequada. O código deve impedir que o personagem seja movido além dos limites do tablado. De
forma geral, o programa consiste em:
1. Ler caractere do teclado (W-A-S-D ou Q);
a. Cada um dos caracteres WASD corresponde à uma direção;
b. O caractere Q (“quit”) deve encerrar o programa.
2. De acordo com o caractere informado (WASD), deve alterar (adicionar/subtrair) a
linha/coluna correspondente, de forma a reposicionar o personagem;
a. W: linha -= 1, S: linha += 1, A: coluna -= 1, D: coluna += 1
3. Reimprimir o tablado após cada entrada, conforme exemplo abaixo. Considerar a posição
em que deve ser impresso o caractere do personagem (‘#’).

Notas: Fiz uma adição em que se o "personagem" ultrapassar a caixar, ele será teleportado para o outro lado da caixa
"""

def moveAMove():
    command = 0
    x = 5
    y = 10
    linhas = 12
    colunas = 22
    while command != 'q':
        print("     Move A Move")  
        for i in range(linhas): #Printando a caixa
            if i == 0: #Topo
                print('╔', end = "")
                for j in range(colunas):
                    print("═", end="")
                print("╗")
            elif i == linhas - 1: #Chao
                print('╚', end = "")
                for j in range(colunas):
                    print("═", end="")
                print("╝")
            else:
                print("║", end="")  #Meiuca
                for j in range(colunas):
                    if i == x and y == j:
                        print("#", end="")
                    else:
                        print(" ", end="")
                print("║")
        print("Teclas: A⇦ W⇧ D⇨ S⇩")
        command = (input(""))
        for i in range(len(command)):  #Controles
            if command[i] == 'w':
                x -= 1
                if x - 1 < 0:
                    x = 10
            if command[i] == 'a':
                y -= 1
                if y - 1 < -1:
                    y = 21
            if command[i] == 's':
                x += 1
                if x + 1 > 11:
                    x = 1
            if command[i] == 'd':
                y += 1
                if y + 1 > 22:
                    y = 0
        
        print("\033c", end="") #Limpar a tela
def main():
    moveAMove()

main()