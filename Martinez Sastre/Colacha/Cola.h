#ifndef COLA_H_
#define COLA_H_
#include "NodoTemplate.h"
template <class T>
class Cola{

	private:
		NodoT<T>* primero;
		NodoT<T>* ultimo;

	public:
		Cola();
		~Cola();
		void acolar(T elemento);
		void desacolar();
		bool estaVacia();
		T obtenerFrente();
		T obtenerFondo();
};

template <class T>
Cola<T>::Cola(){
	primero = 0;
	ultimo = 0;
}

template <class T>
Cola<T>::~Cola(){
	while(!estaVacia()){
		desacolar();
	}
}

template<class T>
void Cola<T>::acolar(T elemento){

	NodoT<T>* nuevo = new NodoT<T>(elemento);

	if(estaVacia()){
		primero = nuevo;
	}

	else{
		ultimo->setSiguiente(nuevo);
	}

	ultimo = nuevo;
}

template<class T>
void Cola<T>::desacolar(){

	if(!estaVacia()){
		NodoT<T>* aDesacolar = primero;
		primero = primero->getSiguiente();

		if(primero==0){
			ultimo = 0;
		}

		delete aDesacolar;
	}
}

template<class T>
bool Cola<T>::estaVacia(){
	return (primero==0);
}

template<class T>
T Cola<T>::obtenerFondo(){
	return ultimo->getElemento();
}

template<class T>
T Cola<T>::obtenerFrente(){
	return primero->getElemento();
}
#endif /* COLA_H_ */
