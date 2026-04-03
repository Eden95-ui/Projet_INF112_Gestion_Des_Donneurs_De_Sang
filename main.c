#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "bd.h"
#include "fonction.h"

int main(int argc, char *argv[]) {
    DBConfig config = {
        .host = "localhost",
        .user = "joris",
        .password = "eden95ui",
        .database = "Gestion_sang"
    };
    MYSQL *conn = init_connection(config);
    if (conn != NULL){
        printf("Connexion a la base de donnees reuissie. !!!\n\n");
        close_connection(conn);
    }
    return 0;
}