
### Single Responsability Principle
Define que cada classe e seus métodos devem ter apenas uma responsabilidade, ou seja, devem realizar apenas uma tarefa específica, fazendo com que cada classe/método tenha apenas um motivo para ser modificado. Essa abordagem de separação ajuda a facilitar da manutenção e na reusabilidade do código.

Exemplo: (link)
Neste exemplo, ao invés de criar uma classe "Pedido" que possui todoas as funcionalidades, cada classe possui uma única responsabilidade
 - Pedido: Responsável por manipular um pedido em si, obtendo o preço total, itens, adicionando e deletando itens.
 - PedidoViewer: Responsável por exibir as informações de um pedido


### Open Closed Principle
Cada entidade de um software deve ser fechada para modificações diretas, mas aberta para extensões. Isso significa que, ao surgir a necessidade de alterar o comportamento de uma entidade, a melhor prática é não modificar o código original, mas sim estender sua funcionalidade por meio de herança ou outras técnicas de extensibilidade. Deixando o código mais seguro e de fácil reusabilidade, já que não precisa se preocupar com a entidade principal ser alterada.

Exemplo: (link)
Neste exemplo existe uma classe jogador que define as propriedades que todos os jogadores possuem, além disso, existem as classes específicas para cada posição, que herdam da classe jogador. Quando se quer adicionar uma nova posição, ao invés de modificar a classe principal, se herda dessa classe e modifica a funcionalidade "getPosicao".


### Interface Segregation Principle
Diz que as interfaces de um sistema devem ser quebradas em interfaces cada vez menores para que não seja necessário para uma classe implementar métodos que ele não utilizará, isso faz com que o código fique mais limpo e ajuda na mantenubilidade, já que o código ficará mais fácil de se extender.

Exemplo: (link)
Neste exemplo, são implementadas 3 interfaces distintas que realizam uma ação específica: trabalhar, comer e dormir. A classe "Trabalhador Humano" implementa as três interfaces, mas o "Trabalhador Robô" apenas implementa a interface de trabalhar. Ao fazer essa separação entre interfaces possibilita as classes implementarem somente os métodos necessários.