/*
 * Pila.h
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */
#include "Nodo.h"
#include <iostream>

#ifndef PILA_H_
#define PILA_H_

class Pila {
private:
	Nodo* primero;
public:
	Pila();
	bool pilaVacia();
	void insertar(Dato);
	Dato getDato();
	void deleteDato();
	virtual ~Pila();
};

#endif /* PILA_H_ */
