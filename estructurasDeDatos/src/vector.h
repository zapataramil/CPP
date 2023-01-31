#ifndef VECTOR_H_
#define VECTOR_H_

typedef int Datos;

class Vector{
private:
	Datos* dato;
	int longitud;

public:

	//PRE: -
	//POST: Crea la instancia vector vacia
	Vector();

	//PRE: -
	//POST: Crea la instancia vector de tamanio "largo" cargada con ceros
	Vector(int largo);

	//PRE: -
	//POST: Crea la instancia vector identico al vector "vectorsito"
	Vector(const Vector & vectorsito);

	//PRE: Recibe el "dato" a cargar, y la "posicion" donde cargarlo
	//POST: Carga dato en la posicion indicada
	void cargarDato(Datos dato, int posicion);

	//PRE: Recibe una "posicion" valida
	//POST: Devuelve el dato de la posicion
	Datos obtenerDato(int posicion);

	//PRE: -
	//POST: Devuelve TRUE si esta vacio, sino FALSE
	bool estaVacio();

	//PRE: -
	//POST: Muestra el vector en columna
	void mostrar();

	//PRE: -
	//POST: Devuelve el tamanio de la instancia
	int obtenerTamanio();

	//PRE: Recibe una instancia "vectorsito"
	//POST: Asigna a la instancia el "vectorsito"
	void operator= (const Vector & vectorsito);

	//PRE:Recibe una posicion valida
	//POST: Devuelve el valor en esa posicion como referencia, permitiendo ser modificado
	Datos& operator[](int posicion);

	//PRE: Instancia creada
	//POST: Destruye la instancia
	~Vector();

};



#endif /* VECTOR_H_ */
