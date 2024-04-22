### Single Responsability Principle
Define que cada classe e seus métodos devem ter apenas uma responsabilidade, ou seja, devem realizar apenas uma tarefa específica, fazendo com que cada classe/método tenha apenas um motivo para ser modificado. Essa abordagem de separação ajuda a facilitar da manutenção e na reusabilidade do código.

Neste exemplo, ao invés de criar uma classe "Pedido" que possui todoas as funcionalidades, cada classe possui uma única responsabilidade
 - Pedido: Responsável por manipular um pedido em si, obtendo o preço total, itens, adicionando e deletando itens.
 - PedidoViewer: Responsável por exibir as informações de um pedido
