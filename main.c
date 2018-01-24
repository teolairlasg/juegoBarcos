/**
 * @file
 */

#include "src/tablero.h"

/**
 * Método de prueba.
 *
 * Inicializa un tablero con agua, cambia el valor de determinadas posiciones y finalmente lo imprime
 */



int main (){


	inicializar_tablero();
	tablero[0][0]='B';
	tablero[1][0]='T';
	tablero[2][0]='B';
	tablero[5][4]='H';
	tablero[4][4]='H';
	tablero[3][4]='H';
	imprimir_tablero();

	return 0;
}
