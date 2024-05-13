### Iterator (Padrão Comportamental)

Esse padrão é utilizado para percorrer os elementos de estruturas de dados sem se preocupar com qual estrutura é. Existem estruturas que guardam os dados de diversas formas diferentes, e um código que implementa várias delas precisa se preocupar em acessar cada uma delas da forma adequada. O padrão iterator resolve esse problema adicionando uma camada de abstração chamada Iterator, que faz a trevessia da estrutura, podendo guardar informações como: qual é o elemento atual, qual é o próximo, quantos elementos faltam até chegar ao final.

No exemplo disponibilizado, a interface Iterator possui 5 métodos abstratos: current que retorna o elemento atual, next que retorna o atual e acessa o próximo elemento, key que retorna o indíce do elemento, valid que verifica se a posição é valida, e rewind que retorna ao primeiro elemento.
Essa classe é implementada pelas classes Iterator concretas que fornecem a implementação específica de como percorrer os elementos, no caso do AlphabeticalOrderIterator, de forma alfabética.
A classe WordsCollection é uma classe concreta de coleções, que disponibiliza dois métodos que retornam iteradores e métodos para manipular a coleção.
Com isso, o cliente pode manipular a coleção de dados e iterar sobre ela sem precisar saber como está sendo implementada.

Diagrama UML da estrutra do Iterator: <br>
![IteratorPatternUML drawio](https://refactoring.guru/images/patterns/diagrams/iterator/structure.png)