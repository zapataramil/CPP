/*
 * modulos.cpp
 *
 *  Created on: 4/4/2019
 *      Author: ramil
 */
#include<iostream>
using namespace std;

void inicializarTablero(char x[10][10]){
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			x[i][j] = ' ';
}

bool esPar(int n){
	if (n%2 == 0)
		return true;
	return false;
}

void cargarTablero(char tablero[10][10], int n){
	int columna = 0;
	bool encontro = false;
	do{
		cout << "ingresar columna a jugar:" <<endl;
		cin >> columna;
		int i=0;
		while(!encontro && i<10 &&  columna <=10 && columna >=1){
			if (tablero[9-i][columna-1] == ' '){
				if (esPar(n))
					tablero[9-i][columna-1] = 'X';
				else
					tablero[9-i][columna-1] = 'O';
			encontro = true;
			}
			i++;
		}
		if (encontro == false)
			cout<< "COLUMNA LLENA (recuerde que las columnas sólo van del 1 al 10)"<< endl;
	}while(encontro == false);
}


void inicializarEspacio(int espacio[8]){
	for(int i=0;i<8;i++)
		espacio[i] = 0;
}

void calcularEspacio(int espacio[8], int &posibilidades,int fila, int columna){
	inicializarEspacio(espacio);
	if (fila+4 <= 9){
		espacio[posibilidades] = 7;
		posibilidades++;
	}
	if (fila-4 >=0){
		espacio[posibilidades] = 3;
		posibilidades++;
	}
	if (columna+4 <= 9){
		espacio[posibilidades] = 1;
		posibilidades++;
	}
	if (columna-4 >= 0){
		espacio[posibilidades] = 5;
		posibilidades++;
	}
	if ((fila+4 <= 9) && (columna+4 <=9)){
		espacio[posibilidades] = 8;
		posibilidades++;
	}
	if ((fila+4 <= 9) && (columna-4 >= 0)){
		espacio[posibilidades] = 6;
		posibilidades++;
	}
	if ((fila-4 >= 0) && (columna+4 <= 9)){
		espacio[posibilidades] = 2;
		posibilidades++;
	}
	if ((fila-4 >= 0) && (columna-4 >= 0)){
		espacio[posibilidades] = 4;
		posibilidades++;
	}
}


char ganaAlguien(char tablero[10][10]){
	char jugador = 'a';
	bool ganador = false;
	int espacio[8],posibilidades = 0,i=0,j=0;
	while((i<10) && (!ganador)){
		while((j<10) && (!ganador)){
			if (tablero[9-i][9-j] != ' '){
				calcularEspacio(espacio,posibilidades,9-i,9-j);
				while(posibilidades > 0 && !ganador){
					switch(espacio[posibilidades-1]){
					case 1:
						if((tablero[9-i][9-j] == tablero[9-i][9-j+1])&&(tablero[9-i][9-j+1] == tablero[9-i][9-j+2])&&(tablero[9-i][9-j+2] == tablero[9-i][9-j+3])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 2:
						if((tablero[9-i][9-j] == tablero[9-i-1][9-j+1])&&(tablero[9-i-1][9-j+1] == tablero[9-i-2][9-j+2])&&(tablero[9-i-2][9-j+2] == tablero[9-i-3][9-j+3])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 3:
						if((tablero[9-i][9-j] == tablero[9-i-1][9-j])&&(tablero[9-i-1][9-j] == tablero[9-i-2][9-j])&&(tablero[9-i-2][9-j] == tablero[9-i-3][9-j])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 4:
						if((tablero[9-i][9-j] == tablero[9-i-1][9-j-1])&&(tablero[9-i-1][9-j-1] == tablero[9-i-2][9-j-2])&&(tablero[9-i-2][9-j-2] == tablero[9-i-3][9-j-3])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 5:
						if((tablero[9-i][9-j] == tablero[9-i][9-j-1])&&(tablero[9-i][9-j-1] == tablero[9-i][9-j-2])&&(tablero[9-i][9-j-2] == tablero[9-i][9-j-3])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 6:
						if((tablero[9-i][9-j] == tablero[9-i+1][9-j-1])&&(tablero[9-i+1][9-j-1] == tablero[9-i+2][9-j-2])&&(tablero[9-i+2][9-j-2] == tablero[9-i+3][9-j-3])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 7:
						if((tablero[9-i][9-j] == tablero[9-i+1][9-j])&&(tablero[9-i+1][9-j] == tablero[9-i+2][9-j])&&(tablero[9-i+2][9-j] == tablero[9-i+3][9-j])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					case 8:
						if((tablero[9-i][9-j] == tablero[9-i+1][9-j+1])&&(tablero[9-i+1][9-j+1] == tablero[9-i+2][9-j+2])&&(tablero[9-i+2][9-j+2] == tablero[9-i+3][9-j+3])){
							ganador = true;
							jugador = tablero[9-i][9-j];
						}
						break;
					}
				posibilidades--;
				}
			}
			j++;
		}
		i++;
	}
	return jugador;

}


