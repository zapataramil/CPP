#ifndef SRC_ORDENAMIENTOS_H_
#define SRC_ORDENAMIENTOS_H_

//PRE: Recibe un puntero a vector y el tamanio del vector que es la cantidad de elementos que posee
//POST: Devuelve al vector ordenado
void burbujeo(int* vector, int tamanio);

//PRE: Recibe un puntero a vector y el tamanio del vector que es la cantidad de elementos que posee
//POST: Devuelve al vector ordenado
void burbujeoMejorado(int* vector, int tamanio);

//PRE:  Recibe un puntero a vector y el tamanio del vector que es la cantidad de elementos que posee
//POST: Devuelve al vector ordenado
void seleccion(int* vector, int tamanio);

//PRE: Recibe un puntero a vector y el tamanio del vector
//POST: Devuelve el vector ordenado
void cocktailSort(int* vector, int tamanio);

#endif /* SRC_ORDENAMIENTOS_H_ */
