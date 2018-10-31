/*
 * Nodo.h
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */

#ifndef NODO_H_
#define NODO_H_

typedef char Dato;

class Nodo {
private:
	Dato caracter;
	Nodo* siguiente;
public:
	Nodo(Dato);
	Nodo* getSiguiente();
	void  setSiguiente(Nodo*);
	Dato getDato();
	Dato setDato();
	virtual ~Nodo();
};

#endif /* NODO_H_ */
