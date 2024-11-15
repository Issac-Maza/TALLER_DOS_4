CC = gcc
CFLAGS = -Wall -g
OBJ = persona.o institucion.o reporte.o main.o
EXEC = programa

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)


persona.o: persona.c miLibPersona.h miLibInstitucion.h
	$(CC) $(CFLAGS) -c persona.c

institucion.o: institucion.c miLibPersona.h miLibInstitucion.h
	$(CC) $(CFLAGS) -c institucion.c

reporte.o: reporte.c miLibPersona.h miLibInstitucion.h miReporte.h
	$(CC) $(CFLAGS) -c reporte.c

main.o: main.c miLibPersona.h miLibInstitucion.h miReporte.h
	$(CC) $(CFLAGS) -c main.c


clean:
	rm -f $(OBJ) $(EXEC)
