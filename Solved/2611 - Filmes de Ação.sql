select id, name from movies where id_genres in
(select id from genres where description='Action');