/*
 * Pila.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */

#include "Pila.h"


Pila::Pila() {
	this->primero = NULL;
}
bool Pila::pilaVacia(){
	return (this->primero==NULL);

}
void Pila::insertar(Dato nuevoDato){
	Nodo* nuevoNodo = new Nodo(nuevoDato);
	nuevoNodo->setSiguiente(this->primero);
	this->primero = nuevoNodo;
}
Dato Pila::getDato(){
	return (this->primero->getDato() );
}
void Pila::deleteDato(){
	Nodo* auxiliar = this->primero ;
	this->primero = auxiliar->getSiguiente();
	delete auxiliar;
}


Pila::~Pila() {
	while( !pilaVacia() ){
		deleteDato();
	}
}

