/**
 * @file
 * Librería de tablero.
 *
 * Esta librería incluye dos métodos para la inicialización
 * y la impresión por consola del tablero 
 *
 * @author Teo
 */

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
#define TAM 10
char tablero[TAM][TAM];


/**
 * Inicializa las posiciones del tablero a agua.
 *
 * Inicializa todas las posiciones del tablero a agua, como si estuvieran vacías
 */

void inicializar_tablero();

/**
 * Imprimie por pantalla el estado de un tablero.
 * Imprime el tablero por la consola con diferentes colores para cada estado de la casilla.
 */

void imprimir_tablero();

#endif

