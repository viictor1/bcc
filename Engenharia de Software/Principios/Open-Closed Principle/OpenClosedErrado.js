class Jogador {
    constructor(nome, idade, posicao) {
      this.nome = nome;
      this.idade = idade;
      this.posicao = posicao;
    }
  
    getPosicao() {
      switch (this.posicao) {
        case 'goleiro':
          console.log(`O jogador, ${this.nome} is a goleiro`);
          break;
        case 'zagueiro':
          console.log(`O jogador, ${this.nome} is a zagueiro`);
          break;
        case 'meio-campo':
          console.log(`O jogador, ${this.nome} é meio-campo`);
          break;
        case 'atacante':
          console.log(`O jogador, ${this.nome} é atacante line`);
          break;
        default:
          throw new Error(`Posicao inválida: ${this.type}`);
      }
    }
  }