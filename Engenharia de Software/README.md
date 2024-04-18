
### Single Responsability Principle
Define que cada classe e método devem ser responsáveis por apenas 1 ação, possuindo apenas 1 motivo para modificar ela. Esse princípio ajuda a facilitar a manutenção e reusabilidade do código.

Exemplo: (link)
Neste exemplo, ao invés de criar uma classe "Pedido" que possui todoas as funcionalidades, cada classe possui uma única responsabilidade
 - Pedido: Responsável por manipular um pedido em si
 - PedidoViewer: Responsável por exibir as informações de um pedido