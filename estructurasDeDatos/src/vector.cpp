#include "vector.h"
#include <iostream>


void inicializar(Datos* dato, int largo){
	for(int i=0 ; i<largo ; i++)
		dato[i] = 0;
}


void copiarDatos(Datos* nuevo,Datos* viejo, int cantidad){
	for(int i=0 ; i<cantidad ; i++)
		nuevo[i] = viejo[i];
}


Vector::Vector(){
	dato = 0;
	longitud = 0;
}


Vector::Vector(int largo){
	if (largo >0){
		longitud = largo;
		dato = new Datos[longitud];
		inicializar(dato,longitud);
	}
}


Vector::Vector(const Vector & vec){
	longitud = vec.longitud;
	if (longitud > 0){
		Datos* aux = new Datos[longitud];
		copiarDatos(aux,vec.dato,longitud);
		dato = aux;
	}else
		dato = 0;
}


void Vector::operator= (const Vector & vec){
	if (vec.dato != dato){
		Datos* aux = new Datos[longitud];
		if (longitud != vec.longitud)
			longitud = vec.longitud;
		copiarDatos(aux,vec.dato,longitud);
		delete []dato;
		dato = aux;
	}
}


Datos& Vector::operator[](int posicion){
	return dato[posicion-1];
}

void Vector::cargarDato(Datos valor, int pos){
	if(pos > longitud){
		Datos* aux = new Datos[pos];
		inicializar(aux,pos);
		copiarDatos(aux,dato,longitud);
		delete []dato;
		dato = aux;
		longitud = pos;
	}
	dato[pos-1]= valor;
}


Datos Vector::obtenerDato(int posicion){
	return dato[posicion-1];
}


bool Vector::estaVacio(){
	if (longitud == 0)
		return true;
	return false;
}


void Vector::mostrar(){
	for(int i=0; i<longitud ;i++)
		std::cout << dato[i]<<std::endl;
}


int Vector::obtenerTamanio(){
	return longitud;
}


Vector::~Vector(){
	if(dato)
		delete []dato;
}
