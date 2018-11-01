#include "Pila.h"

Pila::Pila(){
	tope = 0;
	elementosApilados = 0;
}

Pila::~Pila(){
	while(!estaVacia()){
		desapilar();
	}
}

void Pila::apilar(int elemento){

	Nodo* nuevo = new Nodo(elemento);
	nuevo->setSiguiente(tope);
	tope = nuevo;
	elementosApilados++;
}

void Pila::desapilar(){
	Nodo* nodoAEliminar;

	if(!estaVacia()){
		nodoAEliminar = tope;
		tope = nodoAEliminar->getSiguiente();
		delete nodoAEliminar;
		elementosApilados--;
	}
}

bool Pila::estaVacia(){
	return (elementosApilados == 0);
}

int Pila::obtenerTope(){
	return tope->getElemento();
}

