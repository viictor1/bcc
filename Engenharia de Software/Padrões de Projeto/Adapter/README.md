### Adapter (Padrão Estrutural)

Esse padrão de projeto é útil para quando é necessário adapar uma interface para ser utilizado por outro objeto com interface incompatível, sem precisar modificar o código original, o Adaptor funcionará como um tradutor de um objeto. Por exemplo, converter de um formato de dados para outro.
Para fazer isso, o Adapter adiciona um nível de abstração acima do objeto que está sendo adaptado, convertendo a sua interface assim como for necessário, com o objetivo de tornar ele compatível com o outro objeto.

O código de exemplo funciona da seguinte maneira, o cliente consegue se comunicar diretamente com "Target", porém não consegue entender "Adaptee", a classe "Adaptor" funciona como um tradutor de "Adaptee", o cliente consegue se comunicar com essa classe através dessa abstração.

Diagrama UML do Adapter padrão: <br>
![AdapterPatternUML drawio](https://refactoring.guru/images/patterns/diagrams/adapter/structure-object-adapter.png)