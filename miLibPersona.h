#ifndef MILIBPERSONA_H
#define MILIBPERSONA_H

typedef struct {
    int id;
    char nombre[50];
    int edad;
} Persona;

void imprimirPersona(const Persona *p);

#endif // MILIBPERSONA_H
