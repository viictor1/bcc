/**
 * A classe "Singleton" possui o método "getInstance", que retorna a única instância do Singleton.
 */
class Singleton {
    private static instance: Singleton;

    /**
     * O construtor do Singleton sempre deve ser privado, isso previne que uma nova instância seja criada
     * utilizado o "new".
     */
    private constructor() { }

    /**
     * O método estático que controla o acesso à instância do Singleton.
     *
     * Essa implementação permite que você crie subclasses da classe Singleton
     * mantendo apenas uma instância de cada subclasse.
     */
    public static getInstance(): Singleton {
        if (!Singleton.instance) {
            Singleton.instance = new Singleton();
        }

        return Singleton.instance;
    }

    /**
     * Cada singleton deve definir suas próprias regras de negócio,
     * que pode ser executada pela sua instância.
     */
    public someBusinessLogic() {
        // ...
    }
}

/**
 * O código do cliente.
 */
function clientCode() {
    const s1 = Singleton.getInstance();
    const s2 = Singleton.getInstance();

    if (s1 === s2) {
        console.log('Singleton funcionando, as duas variáveis possuem a mesma instância');
    } else {
        console.log('Singleton falhou, as variáveis possuem instâncias diferentes');
    }
}

clientCode();