### Singleton (Padrão Criacional)

O objetivo desse padrão é permitir que uma classe possua apenas 1 objeto instanciado que é acessado globalmente. Geralmente é utilizado para acessar recursos compartilhados entre todo o software, funcionando como uma variável global. 

Um dos problemas resolvido é o de instanciar desnecessariamente um objeto sempre que necessário, ao invés disso, apenas 1 objeto é instanciado e utilizado. Para fazer isso, se instancia o objeto globalmente, porém, não é possível sobrescrever o código original, solucionando um dos problemas das variáveis globais.

O singleton é implementado utilizando um construtor da classe privado, para impedir que ele seja instanciado por terceiros. Portanto, a instância do objeto é retornado por meio de um método estático utilizando o construtor privado, esse método verifica se já existe um objeto retornado, se já existir ele é retornado, se não existir é instânciado um novo.

Diagrama UML da estrutura do Singleton:
![SingletonPatternUML drawio](https://refactoring.guru/images/patterns/diagrams/adapter/structure-object-adapter.png)