#include <stdio.h>
#include "miLibPersona.h"

void imprimirPersona(const Persona *p) {
    printf("ID: %d\n", p->id);
    printf("Nombre: %s\n", p->nombre);
    printf("Edad: %d\n", p->edad);
}

