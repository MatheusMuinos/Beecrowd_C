# Como testar consultas SQL localmente

## 1) O que voce precisa
- Ter o `sqlite3` instalado no sistema.
- Arquivos com extensao `.sql`.

## 2) Arquivos deste modelo
- `00_schema.sql`: cria as tabelas.
- `01_seed.sql`: insere dados de exemplo.
- `2602.sql`, `2603.sql`, `2604.sql`: consultas dos exercicios.

## 3) Comandos no terminal (dentro da pasta SQL)
```bash
sqlite3 beecrowd.db ".read 00_schema.sql"; sqlite3 beecrowd.db ".read 01_seed.sql"  -> CRIAR E POVOAR TABELAS

sqlite3 beecrowd.db ".read XXXX.sql" -> TESTAR QUALQUER SCRIPT
...

```