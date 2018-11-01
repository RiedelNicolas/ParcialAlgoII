#include "Nodo.h"

Nodo::Nodo(int elemento){
	this->elemento = elemento;
	siguiente = 0;
}

Nodo::~Nodo(){

}

void Nodo::setSiguiente(Nodo* siguienteNodo){
	siguiente = siguienteNodo;
}

Nodo* Nodo::getSiguiente(){
	return siguiente;
}

void Nodo::setElemento(int elemento){
	this->elemento = elemento;
}

int Nodo::getElemento(){
	return elemento;
}

