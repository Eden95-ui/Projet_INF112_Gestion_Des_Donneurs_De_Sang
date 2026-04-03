#ifndef _TYPE_H_
#define _TYPE_H_
    typedef struct Donneur{
        char nompremon[100]; // nom et prenom du donneur
        char groupe[3]; // groupe sanguin A, B, AB ou O
        char rhesus[1]; // facteur rhesus - ou +
        char villeadresse[40]; // ville et adresse du donneur
        char tel[13]; // numero de telephone du donneur
        int disponible; // etat de disponibilite du donneur 1 : disponible et 0: indisponible
        struct Donneur *suivant;
    }donneur;
#endif
