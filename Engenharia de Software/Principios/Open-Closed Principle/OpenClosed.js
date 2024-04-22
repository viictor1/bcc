class Jogador {
    constructor(nome, idade, posicao) {
      this.nome = nome;
      this.idade = idade;
      this.posicao = posicao;
    }
  
    getPosicao() {
      return this.posicao.getPosicao();
    }
  }
  
  
  class Goleiro extends Jogador {
    getPosicao() {
      return 'goleiro';
    }
  }
  
  class Zagueiro extends Jogador {
    getPosicao() {
      return 'zagueiro';
    }
  }
  
  class MeioCampo extends Jogador {
    getPosicao() {
      return 'meioCampo';
    }
  }
  
  class Atacante extends Jogador {
    getPosicao() {
      return 'atacante';
    }
  }

  console.log("Vai Corinthians");