class Pessoa {
    private Carro carro;

    public Pessoa() {
        this.carro = new Carro();
    }

    public Carro getCarro() {
        return this.carro;
    }

}

class Carro {
    private String modelo = "Fusca";

    public String getModelo() {
        return this.modelo;
    }
}

public class Main {
    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa();

        System.out.println(pessoa.getCarro().getModelo());
    }
}
