select id,name from products where id_categories in
(select id from categories where name like 'super%');