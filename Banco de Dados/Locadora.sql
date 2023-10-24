DROP TABLE IF EXISTS ator_filme,
					 filme,
					 emprestimo,
					 dvd,
					 cliente,
					 genero,
					 ator;

CREATE TABLE ator(
 	nome varchar(200) PRIMARY KEY
 );
 
 CREATE TABLE genero(
 	descricao varchar(200) PRIMARY KEY  
 );
 
  CREATE TABLE filme(
   id int PRIMARY KEY,
   nome varchar(200),
   genero varchar(200),
   FOREIGN KEY (genero) REFERENCES genero (descricao)
 );
 
 CREATE TABLE cliente(
   num int PRIMARY KEY,
   nome varchar(200),
   sobrenome varchar(200),
   telefone char(11),
   endereco varchar(200)
 );
 
 CREATE TABLE dvd(
   id int PRIMARY KEY,
   id_filme int,
   FOREIGN KEY (id_filme) REFERENCES filme (id)
 );
 
 CREATE TABLE emprestimo(
   data_devolucao date,
   data_emprestimo date,
   valor_pago float,
   valor_a_pagar float,
   cliente int,
   dvd int UNIQUE,
   PRIMARY KEY(cliente, dvd),
   FOREIGN KEY (cliente) REFERENCES cliente (num),
   FOREIGN KEY (dvd) REFERENCES dvd (id)
 );
 

 
 CREATE TABLE ator_filme(
   nome_ator varchar(200),
   id_filme int,
   PRIMARY KEY (nome_ator, id_filme),
   FOREIGN KEY (nome_ator) REFERENCES ator (nome),
   FOREIGN KEY (id_filme) REFERENCES filme (id)
 );