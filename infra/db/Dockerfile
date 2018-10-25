#FROM takitake/gradle-alpine
FROM postgres:10.5

MAINTAINER Yusuke Sasajima <rpg.360.c@gmail.com>

COPY ./infra/db/*.sql /docker-entrypoint-initdb.d/
