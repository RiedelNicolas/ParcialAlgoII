#ifndef PILA_H_
#define PILA_H_
#include "Nodo.h"

class Pila{
private:
	Nodo* tope;
	int elementosApilados;
public:
	/*
	 * Post: crea pila vacía.
	 */
	Pila();

	/*
	 * Pre: pila creada.
	 * Post: -
	 */
	~Pila();

	/*
	 * Pre: pila creada.
	 * Post: añade el elemento a la pila.
	 */
	void apilar(int elemento);

	/*
	 * Pre: la pila no está vacía
	 * Post: elimina el elemento en la posición 'tope' de la pila
	 */
	void desapilar();

	/*
	 * Pre: pila creada.
	 * Post: responde a la pregunta ¿La pila está vacía?
	 */
	bool estaVacia();

	int obtenerTope();
};



#endif /* PILA_H_ */
