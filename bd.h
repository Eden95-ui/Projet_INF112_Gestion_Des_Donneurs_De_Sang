#ifndef _DB_H_
#define _DB_H_
    #include <mysql/mysql.h>
    // structure pour stocker les donnees de connection a la base de donnees
    typedef struct DBConfig {
        const char *host;
        const char *user;
        const char *password;
        const char *database; 
    } DBConfig;
    // fonction pour se connecter a la base de donnees
    MYSQL* init_connection(DBConfig config);

    //fonction pour fermer la connexion a BD
    void close_connection(MYSQL *conn);
#endif