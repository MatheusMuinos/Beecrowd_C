SELECT products_2.id, products_2.name FROM products_2

join CATEGORIES on products_2.id_categories = categories.id
where categories.name like '%super%'