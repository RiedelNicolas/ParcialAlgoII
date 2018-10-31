/*
 * Lista.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: riedel
 */

#include "Lista.h"
#define NULL 0
Lista::Lista() {
	primero = NULL;
	tam = 0;
}

void Lista::borrarDato(int pos){
	Nodo* nodoAuxiliar = primero;

	if(pos==1){
		primero = nodoAuxiliar->getSiguiente();
	}else{
		Nodo* anterior;
		int i = pos;
		while(i<pos ){
			anterior=nodoAuxiliar;
			nodoAuxiliar = nodoAuxiliar->getSiguiente();
			i++;
		}
		anterior->setSiguiente( nodoAuxiliar->getSiguiente() );
	}
	delete nodoAuxiliar;
	tam--;
}

void Lista::insertar(Dato ingreso){

	if(tam==0){
		primero =new Nodo(ingreso);
	}else{
		Nodo* aux;
		aux=primero;
		while( aux->getSiguiente() ){
			aux = aux->getSiguiente();
		}
		aux->setSiguiente( new Nodo(ingreso) );
	}
	tam++;
}

Dato Lista::obtenerDato(int pos){
	Nodo* aux = primero;

	for(int i=1;i<pos;i++){
		aux= aux->getSiguiente();
	}

	return aux->getDato();
}


Lista::~Lista() {
	for(int i=1;i<=tam;i++){
		this->borrarDato(1);
	}
}

