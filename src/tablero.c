#include <stdio.h>
#include "./tablero.h"

void imprimir_linea_superior();
void imprimir_linea_inferior();
void imprimir_linea_central();
void imprimir_posicion(char);
void imprimir_fila_datos(int);
void imprimir_cuerpo_tablero();

void inicializar_tablero(){

	int i, j;
	for (int i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			tablero[i][j]='A';
		}
	}
}

void imprimir_linea_superior(){
	printf(TLC);
	int i;
	for (i=0; i<(TAM - 1); i++){
		printf(HL TCL);
	}
	printf(HL TRC "\n");
}

void imprimir_linea_inferior(){
	printf(BLC);
	int i;
	for (i=0; i<(TAM - 1); i++){
		printf(HL BCL);
	}
	printf(HL BRC "\n");
}

void imprimir_linea_central(){
	printf(LCL);
	int i;
	for (i=0; i<(TAM - 1); i++){
		printf(HL CL);
	}
	printf(HL RCL "\n");
}

void imprimir_posicion(char c){
	switch (c){

		case 'A':
			printf(AGUA);
			break;
		case 'B':
			printf(BARCO);
			break;
		case 'T':
			printf(TOCADO);
			break;
		case 'H':
			printf(HUNDIDO);
			break;
		case 'O':
			printf("   ");
			break;
	}
}

void imprimir_fila_datos(int fila){
	printf(VL);
	int col;
	for (col=0; col<(TAM); col++){
		imprimir_posicion(tablero[fila][col]);
		printf(VL);
	}
	printf("\n");
}


void imprimir_cuerpo_tablero(){
	int i;
	for(i = 0; i<(TAM-1);i++){
		imprimir_fila_datos(i);
		imprimir_linea_central();
	}
	imprimir_fila_datos(i);
}

void imprimir_tablero(){

	imprimir_linea_superior();
	imprimir_cuerpo_tablero();
	imprimir_linea_inferior();
}
