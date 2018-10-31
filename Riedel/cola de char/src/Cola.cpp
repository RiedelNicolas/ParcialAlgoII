/*
 * Cola.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */

#include "Cola.h"
#define NULL 0

Cola::Cola() {
	primero = ultimo =  NULL;
}
bool Cola::estaVacia(){
	return (primero ==NULL);
}

void Cola::insertar(Dato insertado){
	Nodo* nuevoNodo =new Nodo(insertado);

	if ( estaVacia() ){
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}else{
		ultimo->setSiguiente(nuevoNodo);
		ultimo =nuevoNodo;
	}
}
Dato Cola::getDato(){
	return primero->getDato();
}
void Cola ::delDato(){
	Nodo* aux = primero->getSiguiente();
	delete primero;
	primero = aux;
}

Cola::~Cola() {
	while( !estaVacia() ){
		delDato();
	}
}

