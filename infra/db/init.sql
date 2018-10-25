create role root WITH LOGIN ;
create database cia_db OWNER root;
grant all privileges on database cia_db to root;
