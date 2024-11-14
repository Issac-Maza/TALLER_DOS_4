#include <stdio.h>
#include "miLibInstitucion.h"

void imprimirInstitucion(const Institucion *i) {
    printf("Institucion ID: %d\n", i->id);
    printf("Nombre de la Institucion: %s\n", i->nombre);
    printf("Director:\n");
    imprimirPersona(&i->director);
}

