import java.util.List;

class Item {
    // Implementação da classe Item
}

class Pedido {
    private List<Item> itens;

    public void calcularTotal() {
        double total = 0.0;
        for (Item item : itens) {
            total += item.getPreco();
        }
    }

    public List<Item> getItens() {
        return itens;
    }

    public int getContagemItens() {
        return itens.size();
    }

    public void addItem(Item item) {
        itens.add(item);
        System.out.println("Item adicionado: " + item.getNome());
    }

    public void deletarItem(Item item) {
        itens.remove(item);
        System.out.println("Item removido: " + item.getNome());
    }

    public void imprimirPedido(Pedido pedido) {
        System.out.println("Imprimindo pedido...");
    }

    public void mostrarPedido(Pedido pedido) {
        System.out.println("Mostrando pedido...");
    }
}
