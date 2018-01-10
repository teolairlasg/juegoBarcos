#ifndef TABLERO_H
#define TABLERO_H

#define AMARILLO "\033[1;5;3m"
#define AGUACOLOR "\033[1;94m ~"
#define RESET "\033[0m"

#define TLC "┌"
#define TRC "┐"
#define HL "───"
#define LCL "├"
#define RCL "┤"
#define CL "┼"
#define BCL "┴"
#define TCL "┬"
#define VL "│"
#define BLC "└"
#define BRC "┘"
#define AGUA "\033[1;94m\u2588\u2588\u2588\033[0m"
#define BARCO "\033[1;90m\u2588\u2588\u2588\033[0m"
#define TOCADO "\033[1;93m\u2588\u2588\u2588\033[0m"
#define HUNDIDO "\033[1;91m\u2588\u2588\u2588\033[0m"
#define TAM 20
char tablero[TAM][TAM];

void inicializar_tablero();
void imprimir_tablero();

#endif

