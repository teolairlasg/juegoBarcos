SOURCES=main.c src/tablero.c
LIBS=
TARGET=juegoBarcos
CC=gcc
CFLAGS=-Wall
OBJECTS=$(SOURCES:.c=.o)
HEADERS=src/tablero.h

all: $(TARGET)

clean:
	rm -f $(TARGET) $(OBJECTS) .depend

-include .depend

.depend: $(SOURCES) $(HEADERS)
	gcc -MM $(SOURCES) > .depend

$(TARGET): $(OBJECTS) $(LIBS)
	$(CC) -o $@ $^

doc: Doxyfile $(SOURCES) $(HEADERS) main.c
	doxygen