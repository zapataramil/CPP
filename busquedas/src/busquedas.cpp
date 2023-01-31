#include "busquedas.h"

int secuencial(int* vector, int tamanio, int valor){
	bool encontro = false;
	int tamanioLogico = 0;
	while((!encontro)&&(tamanioLogico<tamanio)){
		if (vector[tamanioLogico] == valor)
			encontro = true;
		tamanioLogico++;
	}
	if (encontro)
		return tamanioLogico-1;
	return -1;
}


int binaria(int* vector, int tamanio, int valor){
	int max=tamanio-1, min=0, medio=tamanio/2;
	bool encontro = false;
	while (!encontro){
		if ( (valor > vector[max]) || (valor < vector[min]) )
			encontro = false;
		else
			if (valor == vector[medio])
				return medio;
			else
				if (valor > vector[medio])
					min = medio;
				else
					max = medio;
	}
	return -1;
}
