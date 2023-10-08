DROP TABLE IF EXISTS PEIDO_TEM_PIZZA,
					 PIZZA_TEM_TAMANHO,
                     PEDIDO,
					 TAMANHO,
                     PIZZA,
                     CLIENTE,
                     BAIRRO,
                     ATENDENTE,
                     ENTREGADOR,
                     FUNCIONARIO;

CREATE TABLE PIZZA(
	numero int,
    nome VARCHAR(200),
    ingredientes TEXT,
    PRIMARY KEY(numero)
);

CREATE TABLE TAMANHO(
	descricao VARCHAR(200),
    PRIMARY KEY(DESCRICAO)
);

CREATE TABLE PIZZA_TEM_TAMANHO(
	num_pizza INT,
    descricao_tamanho VARCHAR(200),
    preco REAL,
    PRIMARY KEY (num_pizza, descricao_tamanho),
    FOREIGN KEY (num_pizza) REFERENCES PIZZA(numero),
    FOREIGN KEY (descricao_tamanho) REFERENCES TAMANHO(descricao)
);

CREATE TABLE BAIRRO(
	nome VARCHAR(200),
    tempo TIME,
    PRIMARY KEY(nome)
);

CREATE TABLE CLIENTE(
	telefone CHAR(8) PRIMARY KEY,
    nome VARCHAR(200),
    nome_bairro VARCHAR(200) NOT NULL,
    FOREIGN KEY (nome_bairro) REFERENCES BAIRRO(nome)
);

CREATE TABLE FUNCIONARIO(
	id INTEGER PRIMARY KEY
);

CREATE TABLE ENTREGADOR(
	id_entregador INT PRIMARY KEY,
    telefone CHAR(8),
    FOREIGN KEY (id_entregador) REFERENCES FUNCIONARIO(id)
);

CREATE TABLE ATENDENTE(
	id_atendente INT,
	FOREIGN KEY (id_atendente) REFERENCES FUNCIONARIO(id)
);

CREATE TABLE PEDIDO(
	numero INT PRIMARY KEY,
    data_pedido DATE,
    endereco TEXT,
    tel_cliente CHAR(8),
    id_atendente INT,
    id_entregador INT,
    FOREIGN KEY (tel_cliente) REFERENCES CLIENTE(telefone),
    FOREIGN KEY (id_atendente) REFERENCES ATENDENTE(id_atendente),
    FOREIGN KEY (id_entregador) REFERENCES ENTREGADOR(id_entregador)
);

CREATE TABLE PEDIDO_TEM_PIZZA(
	id_pedido INT,
	num_pizza INT,
    descricao_tamanho VARCHAR(200),
    qtd INT,
    PRIMARY KEY (id_pedido, num_pizza, descricao_tamanho),
	FOREIGN KEY (num_pizza, descricao_tamanho) REFERENCES PIZZA_TEM_TAMANHO(num_pizza, descricao_tamanho),
    FOREIGN KEY (id_pedido) REFERENCES PEDIDO(numero)
);