INSERT INTO customers (name, street, city, state, credit_limit) VALUES
('Pedro Augusto da Rocha', 'Rua Pedro Carlos Hoffman', 'Porto Alegre', 'RS', 700.00),
('Antonio Carlos Mamel', 'Av. Pinheiros', 'Belo Horizonte', 'MG', 3500.50),
('Luiza Augusta Mhor', 'Rua Salto Grande', 'Niteroi', 'RJ', 4000.00),
('Jane Ester', 'Av 7 de setembro', 'Erechim', 'RS', 800.00),
('Marcos Antonio dos Santos', 'Av Farrapos', 'Porto Alegre', 'RS', 4250.25);

INSERT INTO providers (name, street, city, state) VALUES
('Henrique', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
('Marcelo Augusto', 'Rua Imigrantes', 'Belo Horizonte', 'MG'),
('Caroline Silva', 'Av Sao Paulo', 'Salvador', 'BA'),
('Guilerme Staff', 'Rua Central', 'Porto Alegre', 'RS'),
('Isabela Moraes', 'Av Juiz Grande', 'Curitiba', 'PR'),
('Francisco Accer', 'Av Paulista', 'Sao Paulo', 'SP');

INSERT INTO categories (name) VALUES
('old stock'),
('new stock'),
('modern'),
('commercial'),
('recyclable'),
('executive'),
('superior'),
('wood'),
('super luxury'),
('vintage');

INSERT INTO products (name, amount, price, id_providers, id_categories) VALUES
('Two-door wardrobe', 100, 800.00,
 (SELECT id FROM providers WHERE name = 'Francisco Accer'),
 (SELECT id FROM categories WHERE name = 'wood')),
('Dining table', 1000, 560.00,
 (SELECT id FROM providers WHERE name = 'Henrique'),
 (SELECT id FROM categories WHERE name = 'super luxury')),
('Towel holder', 10000, 25.50,
 (SELECT id FROM providers WHERE name = 'Isabela Moraes'),
 (SELECT id FROM categories WHERE name = 'old stock')),
('Computer desk', 350, 320.50,
 (SELECT id FROM providers WHERE name = 'Guilerme Staff'),
 (SELECT id FROM categories WHERE name = 'executive')),
('Chair', 3000, 210.64,
 (SELECT id FROM providers WHERE name = 'Caroline Silva'),
 (SELECT id FROM categories WHERE name = 'executive')),
('Single bed', 750, 460.00,
 (SELECT id FROM providers WHERE name = 'Henrique'),
 (SELECT id FROM categories WHERE name = 'new stock'));


INSERT INTO products_2 (id, name, amount, price, id_categories) VALUES
(1, 'Lampshade', 100, 800.00, 4),
(2, 'Table for painting', 1000, 560.00, 9),
(3, 'Notebook desk', 10000, 25.50, 9),
(4, 'Computer desk', 350, 320.50, 6),
(5, 'Chair', 3000, 210.64, 9),
(6, 'Home alarm', 750, 460.00, 4);