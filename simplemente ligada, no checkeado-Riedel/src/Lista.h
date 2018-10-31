

#ifndef LISTA_H_
#define LISTA_H_

#include "Nodo.h"

class Lista {
private:
	int tam;
	Nodo* primero;
public:
	Lista();
	 void insertar(Dato);
	 void borrarDato(int pos);
	 Dato obtenerDato (int pos);
	virtual ~Lista();
};

#endif /* LISTA_H_ */
