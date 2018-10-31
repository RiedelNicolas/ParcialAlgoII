/*
 * Nodo.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */
#define NULL 0
#define CARACTER_NULO '\0'
#include "Nodo.h"

Nodo::Nodo(Dato entrada) {
	this->siguiente = NULL;
	this->caracter = entrada ;
}

Dato Nodo::getDato(){
	return this->caracter;
}

 Nodo* Nodo::getSiguiente(){
	return (this->siguiente);
}
void Nodo::setSiguiente(Nodo* nuevoSiguiente){
	this->siguiente = nuevoSiguiente;
}

Nodo::~Nodo() {
	// TODO Auto-generated destructor stub
}

