# Beecrowd_C

[![C](https://img.shields.io/badge/linguagem-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language))

## Como compilar e executar os programas

Para compilar e executar um programa em C deste repositório, utilize os comandos abaixo no terminal:

1. Entre no diretorio do programa:
    ```bash
    cd iniciante
    ```

2. Compile o arquivo desejado (exemplo para o arquivo `iniciante/1051.c`):
	```bash
	gcc 1051.c -o 1051
	```

3. Execute o programa compilado:
	```bash
	./1051
	```

Se o programa precisar de entrada, digite o valor após rodar o comando de execução.

## Como criar e usar o banco para os exercicios SQL

Os exercicios SQL ficam na pasta `SQL` e podem ser testados localmente com SQLite.

### Arquivos adicionados para teste local

- `SQL/00_schema.sql`: cria as tabelas.
- `SQL/01_seed.sql`: povoa as tabelas com dados de exemplo.

### Passo a passo

1. Entre na pasta de SQL:
	```bash
	cd SQL
	```

2. Crie e povoe o banco em um comando:
	```bash
	sqlite3 beecrowd.db ".read 00_schema.sql"; sqlite3 beecrowd.db ".read 01_seed.sql"
	```

3. Rode as consultas:
	```bash
	sqlite3 beecrowd.db ".read 2602.sql"
	sqlite3 beecrowd.db ".read 2603.sql"
	sqlite3 beecrowd.db ".read 2604.sql"
	
	... ou qualquer outro ...
	```

4. Se quiser conferir os dados direto no terminal:
	```bash
	sqlite3 beecrowd.db "SELECT * FROM customers;"
	sqlite3 beecrowd.db "SELECT * FROM products;"
	```

## Sobre este repositório

Progresso e estatísticas diretamente no meu perfil do Beecrowd:

[Matheus Muiños](https://judge.beecrowd.com/pt/users/statistics/476772)