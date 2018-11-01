#ifndef NODO_H_
#define NODO_H_

class Nodo{
private:
	Nodo* siguiente;
	int elemento;
public:
	/*
	 * Post: crea un nodo.
	 */
	Nodo(int elemento);

	/*
	 *
	 */
	~Nodo();

	/*
	 *
	 */
	void setSiguiente(Nodo* siguienteNodo);

	/*
	 *
	 */
	Nodo* getSiguiente();

	/*
	 *
	 */
	void setElemento(int elemento);

	/*
	 *
	 */
	int getElemento();
};




#endif /* NODO_H_ */
