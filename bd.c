#include <stdio.h>
#include "bd.h"
MYSQL* init_connection(DBConfig config){
    MYSQL *conn = mysql_init (NULL);

    if (conn == NULL){
        fprintf(stderr, "Echec de la connection a la base de donnees. \n");
        return NULL;
    }
    if (mysql_real_connect(conn, config.host, config.user, config.password, config.database, 0, NULL, 0) == NULL){
        fprintf (stderr, "Echec de la connection a la base de donnees. %s\n", mysql_error(conn));
        mysql_close(conn);
        return NULL;
    }
    return conn;
}

void close_connection(MYSQL *conn){
    if (conn != NULL){
        mysql_close(conn);
    }
}