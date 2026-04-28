DROP TABLE IF EXISTS customers;
DROP TABLE IF EXISTS products;
DROP TABLE IF EXISTS products_2;
DROP TABLE IF EXISTS providers;
DROP TABLE IF EXISTS categories;

CREATE TABLE customers (
    id INTEGER PRIMARY KEY,
    name VARCHAR(225),
    street VARCHAR(225),
    city VARCHAR(225),
    state VARCHAR(225),
    credit_limit NUMERIC(10, 2)
);

CREATE TABLE products (
    id INTEGER PRIMARY KEY,
    name VARCHAR(225),
    amount INTEGER NOT NULL,
    price NUMERIC(10, 2) NOT NULL,
    id_providers INTEGER,
    id_categories INTEGER,
    FOREIGN KEY (id_providers) REFERENCES providers(id),
    FOREIGN KEY (id_categories) REFERENCES categories(id)
);

CREATE TABLE products_2 (
    id INTEGER PRIMARY KEY,
    name VARCHAR(225),
    amount INTEGER NOT NULL,
    price NUMERIC(10, 2) NOT NULL,
    id_categories INTEGER,
    FOREIGN KEY (id_categories) REFERENCES categories(id)
);

CREATE TABLE providers (
    id INTEGER PRIMARY KEY,
    name VARCHAR(225),
    street VARCHAR(225),
    city VARCHAR(225),
    state VARCHAR(225)
);

CREATE TABLE categories (
    id INTEGER PRIMARY KEY,
    name VARCHAR(255)
);


