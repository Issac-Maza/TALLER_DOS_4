#ifndef MILIBINSTITUCION_H
#define MILIBINSTITUCION_H

#include "miLibPersona.h"

typedef struct {
    int id;
    char nombre[100];
    Persona director;
} Institucion;

void imprimirInstitucion(const Institucion *i);

#endif // MILIBINSTITUCION_H
