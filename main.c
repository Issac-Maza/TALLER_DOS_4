#include <stdio.h>
#include "miLibPersona.h"
#include "miLibInstitucion.h"
#include "miReporte.h"

int main() {
    Persona persona = {1, "Juan Perez", 30};
    Institucion institucion = {1, "Instituto de Investigacion", persona};

    printf("=== Datos de la Persona ===\n");
    imprimirPersona(&persona);

    printf("\n=== Datos de la Institucion ===\n");
    imprimirInstitucion(&institucion);

    printf("\n=== Generando Reporte ===\n");
    generarReporte(&persona, &institucion);

    return 0;
}
