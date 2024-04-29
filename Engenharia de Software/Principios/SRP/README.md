### Single Responsability Principle
Define que cada classe e seus métodos devem ter apenas uma responsabilidade, ou seja, devem realizar apenas uma tarefa específica, garantindo que cada classe/método tenha apenas um motivo para ser modificado. Essa abordagem de separação ajuda a facilitar da manutenção e na reusabilidade do código.

No exemplo errado, a classe pedido era responsável por manipular os pedidos e imprimir elas na tela, na versão corrigida a lógica foi separada em duas classes diferentes:
 - Pedido: Responsável por manipular um pedido em si, obter o preço total, obter os itens, adicionar e deletar itens.
 - PedidoViewer: Responsável apenas por exibir as informações de um pedido

Com essa modificação, cada classe é responsável por apenas uma responsabilidade.
