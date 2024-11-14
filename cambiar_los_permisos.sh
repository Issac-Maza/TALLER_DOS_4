#!/bin/bash


if [ -z "$1" ]; then
    echo "Debe proporcionar la ubicación del directorio."
    exit 1
fi


while [ ! -d "$1" ]; do
    echo "El directorio no existe. Por favor ingrese una ubicación válida:"
    read dir
    set -- "$dir"
done


original="$1/original.txt"
final="$1/final.txt"
ls -lR "$1" > "$original"


find "$1" -type f -exec chmod 743 {} \;
find "$1" -type d -exec chmod 542 {} \;


ls -lR "$1" > "$final"

echo "Proceso completado. Archivos 'original.txt' y 'final.txt' generados en $1"
