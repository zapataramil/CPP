/*
 * modulos.h
 *
 *  Created on: 4/4/2019
 *      Author: ramil
 */

#ifndef MODULOS_H_
#define MODULOS_H_

//Recibe una matriz de 10x10 y la devuelve inicializada con caracteres del tipo ' '
void inicializarTablero(char x[10][10]);


//Recibe el tablero inicializado y una variable entera
//Devuelve el tablero cargado con la ficha nueva
void cargarTablero(char x[10][10], int n);

//Recibe el tablero con datos ya cargados
//Devuelve un caracter: X si gano el JUGADOR1, O si gano el JUGADOR2, a si hubo empate o no paso nada
char ganaAlguien(char x[10][10]);


#endif /* MODULOS_H_ */


