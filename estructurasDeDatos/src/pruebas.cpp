#include <iostream>
#include "vector.h"


using namespace std;

void pruebasVector(){
	//An example for handling vector data structure

	Vector v1;
	Vector v2(5);
	Vector v3 = v2;
	v1.cargarDato(10,2);
	v2.cargarDato(1,1);
	v2.cargarDato(2,2);
	v2.cargarDato(5,5);
	v3.cargarDato(100,6);

	if (!v1.estaVacio())
		cout << "v1 its not empty!"<<endl;
	cout << "En v1, en la posicion 2 tiene que haber un 10: "<<v1.obtenerDato(2)<<endl;
	cout << "tamanio v1 es 2:"<<v1.obtenerTamanio()<<endl;
	cout << "tamanio v2 es 5:"<<v2.obtenerTamanio()<<endl;
	cout << "tamanio v3 es 6:"<<v3.obtenerTamanio()<<endl;
	cout << "En v1 el valor en la posicion 2 es 10:"<<v1.obtenerDato(2)<<endl;

	cout <<"VECTOR1: "<<endl;
	v1.mostrar();
	cout <<"VECTOR2: "<<endl;
	v2.mostrar();
	cout <<"VECTOR3: "<<endl;
	v3.mostrar();
	cout <<"VECTOR1: "<<endl;
	v1.mostrar();
	cout <<"VECTOR2: "<<endl;
	v2.mostrar();
	cout <<"VECTOR3: "<<endl;
	v3.mostrar();
	v3[1] = 1;
	v3[2] = 2;
	v3.mostrar();
}



void pruebasListaSimplementeEnlazada(){

}
