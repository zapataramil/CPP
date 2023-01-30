//============================================================================
// Name        : tp1.cpp
// Author      : ramil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "modulos.h"

int main() {
	char tablero[10][10],ganador=' ';
	int maximoFichas=0;
	bool final = false;
	inicializarTablero(tablero);
	while((!final)&&(maximoFichas<100)){
		cargarTablero(tablero,maximoFichas);
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++)
				cout << tablero[i][j];
			cout<<"\n";
		}
		maximoFichas++;
		ganador = ganaAlguien(tablero);
		if (ganador == 'X' || ganador == 'O')
			final = true;
	}
	switch (ganador){
	case 'X':
		cout <<"GANADOR JUGADOR 1!" << endl;
		break;
	case 'O':
		cout <<"GANADOR JUGADOR 2!" << endl;
		break;
	case 'a':
		cout <<"EMPATE!" << endl;
		break;
	}

	return 0;
}
