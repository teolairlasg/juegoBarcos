all: programa

tablero.o: ./src/tablero.c ./src/tablero.h
	gcc -c ./src/tablero.c

programa: tablero.o ./main.c
	gcc tablero.o ./main.c -o programa

clean: programa
	rm ./programa ./*.o