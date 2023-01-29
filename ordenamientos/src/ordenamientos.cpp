#include "ordenamientos.h"

//FUNCION AUXILIAR
//PRE: Recibe 2 enteros pre y post por referencia
//POST: Intercambia ambos valores
void intercambiar(int & pre, int & post){
	int aux = pre;
	pre = post;
	post = aux;
}


void burbujeo(int* vector, int tamanio){
	for(int i=0 ; i<tamanio-1 ; i++)
		for(int j=0 ; j< tamanio-(i+1) ; j++)
			if(vector[j]>vector[j+1])
				intercambiar(vector[j],vector[j+1]);
}


void burbujeoMejorado(int* vector, int tamanio){
	bool ordenado = false;
	int tamanioLogico = 0;
	while(!ordenado && (tamanioLogico < tamanio-1)){
		ordenado =true;
		for(int i=0 ; i<tamanio-1 ; i++){
			if (vector[i]>vector[i+1]){
				intercambiar(vector[i],vector[i+1]);
				ordenado = false;
			}
		tamanioLogico++;
		}
	}
}


void seleccion(int* vector, int tamanio){
	for(int j=0 ; j<tamanio-1 ; j++)
		for(int i=j+1 ; i<=tamanio-1 ; i++)
			if (vector[i] < vector[j])
				intercambiar(vector[i],vector[j]);
}


void cocktailSort(int* vector, int tamanio){
	int izq=0, der=tamanio-1;
	while (izq < der){
		for(int i=izq; i<der; i++)
			if(vector[i]> vector[i+1])
				intercambiar(vector[i],vector[i+1]);
		der = der-1;
		for(int i=der; i>izq; i--)
			if(vector[i]<vector[i+1])
				intercambiar(vector[i],vector[i+1]);
		izq = izq +1;
	}
}

