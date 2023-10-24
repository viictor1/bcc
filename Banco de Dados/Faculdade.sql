DROP TABLE IF EXISTS inscricao_turma,
					 inscricao,
					 turma,
					 curso_tem_disciplina,
					 disciplina_pre,
					 curso,
					 disciplina,
					 auxilio,
					 aluno,
					 funcionario,
                     professor,
					 pessoa,
                     demo;

CREATE TABLE pessoa(
  id INT PRIMARY KEY
);

CREATE TABLE aluno(
  id INT PRIMARY KEY,
  FOREIGN KEY (id) REFERENCES pessoa(id)
);

CREATE TABLE funcionario(
  id INT PRIMARY KEY,
  FOREIGN KEY (id) REFERENCES pessoa(id)
);

CREATE TABLE professor(
  id INT PRIMARY KEY,
  FOREIGN KEY (id) REFERENCES pessoa(id)
);

CREATE TABLE auxilio(
  id_funcionario INT,
  id_professor INT,
  PRIMARY KEY(id_funcionario, id_professor),
  FOREIGN KEY(id_funcionario) REFERENCES funcionario(id),
  FOREIGN KEY(id_professor) REFERENCES professor(id)
);

CREATE TABLE curso(
  nome VARCHAR(200) PRIMARY KEY
);

CREATE TABLE disciplina(
  nome VARCHAR(200) PRIMARY KEY
);

CREATE TABLE disciplina_pre(
  disciplina VARCHAR(200) PRIMARY KEY,
  pre_requisito VARCHAR(200),
  serial INT,
  FOREIGN KEY(disciplina) REFERENCES disciplina(nome),
  FOREIGN KEY(pre_requisito) REFERENCES disciplina(nome)
);

CREATE TABLE curso_tem_disciplina(
  nome_curso VARCHAR(200),
  nome_disciplina VARCHAR(200),
  PRIMARY KEY (nome_curso, nome_disciplina),
  FOREIGN KEY(nome_disciplina) REFERENCES disciplina(nome),
  FOREIGN KEY(nome_curso) REFERENCES curso(nome)
);

CREATE TABLE turma(
  semestre int,
  nome_curso VARCHAR(200),
  nome_disciplina VARCHAR(200),
  professor INT,
  PRIMARY KEY (nome_curso, nome_disciplina),
  FOREIGN KEY(nome_disciplina) REFERENCES disciplina(nome) ON DELETE CASCADE,
  FOREIGN KEY(nome_curso) REFERENCES curso(nome) ON DELETE CASCADE,
  FOREIGN KEY(professor) REFERENCES professor(id)
);

CREATE TABLE inscricao(
  id INT PRIMARY KEY,
  inicio DATE,
  fim DATE,
  stats BOOLEAN,
  pessoa int,
  FOREIGN KEY (pessoa) REFERENCES pessoa(id),
  nome_curso VARCHAR(200),
  nome_disciplina VARCHAR(200),
  FOREIGN KEY(nome_disciplina) REFERENCES disciplina(nome),
  FOREIGN KEY(nome_curso) REFERENCES curso(nome)
);

CREATE TABLE inscricao_turma(
  inscricao INT,
  nome_curso VARCHAR(200),
  nome_disciplina VARCHAR(200),
  nota int,
  FOREIGN KEY(inscricao) REFERENCES inscricao(id),
  FOREIGN KEY(nome_disciplina) REFERENCES disciplina(nome),
  FOREIGN KEY(nome_curso) REFERENCES curso(nome),
  PRIMARY KEY(inscricao, nome_curso, nome_disciplina)
);