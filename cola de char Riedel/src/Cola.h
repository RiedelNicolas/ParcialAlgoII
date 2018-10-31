/*
 * Cola.h
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */

#ifndef COLA_H_
#define COLA_H_

#include "Nodo.h"

class Cola {
private:
	Nodo* primero;
	Nodo* ultimo;
public:
	Cola();
	virtual ~Cola();
	bool estaVacia();
	void insertar(Dato);
	Dato getDato();
	void delDato();
};

#endif /* COLA_H_ */
