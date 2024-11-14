#include <stdio.h>
#include "miReporte.h"

void generarReporte(const Persona *p, const Institucion *i) {
    printf("Reporte de Persona y Institucion:\n");
    imprimirPersona(p);
    imprimirInstitucion(i);
}
