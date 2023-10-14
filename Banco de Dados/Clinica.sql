drop table if exists paciente_possui_responsavel,
					 medico_trata_paciente,
					 medico_possui_formacao,
					 medico,
					 especialidade,
					 paciente,
                     quarto;

CREATE TABLE quarto(
  number int primary key,
  andar int
);

CREATE TABLE paciente(
  cpf char(11) PRIMARY KEY,
  nome varchar(200),
  rg char(11),
  num_quarto int unique,
  FOREIGN KEY (num_quarto) REFERENCES quarto(number)
);

CREATE TABLE especialidade(
	nome varchar(200) PRIMARY KEY
);

CREATE TABLE medico(
	crm int PRIMARY KEY,
  	nome varchar(200),
  	salario float,
  	especialidade varchar(200),
  	FOREIGN KEY (especialidade) REFERENCES especialidade (nome)
);

CREATE TABLE medico_possui_formacao(
  crm int,
  especialidade varchar(200),
  PRIMARY KEY(crm, especialidade),
  FOREIGN KEY (crm) REFERENCES medico (crm),
  FOREIGN KEY (especialidade) REFERENCES especialidade (nome)
);

CREATE TABLE medico_trata_paciente(
	crm int,
    paciente char(11),
    PRIMARY KEY(crm, paciente),
    FOREIGN KEY (crm) REFERENCES medico (crm),
    FOREIGN KEY (paciente) REFERENCES paciente (cpf)
);

CREATE TABLE paciente_possui_responsavel(
	crm int,
    paciente char(11) UNIQUE,
    horario date,
    PRIMARY KEY(crm, paciente),
    FOREIGN KEY (crm) REFERENCES medico (crm),
    FOREIGN KEY (paciente) REFERENCES paciente (cpf)
);
