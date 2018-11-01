#ifndef NODOTEMPLATE_H_
#define NODOTEMPLATE_H_
//YA SE QUE NO ESTA BIEN PONER LA FORMA EN QUE ESTA IMPLEMENTADO
//EN EL NOMBRE, PERO ME PINTO PONERLE ASÍ PORQUE HICE TODO EN UNA
//MISMA CARPETA Y TA TENIA OTRO NODO.H
template<class T>
class NodoT{

	private:
		NodoT<T>* siguiente;
		T elemento;

	public:
		NodoT(T elemento);
		~NodoT();
		void setSiguiente(NodoT<T>* siguiente);
		NodoT<T>* getSiguiente();
		T getElemento();
		void setElemento(T elemento);
};


template<class T>
NodoT<T>::NodoT(T elemento){
	siguiente = 0;
	this->elemento = elemento;
}

template<class T>
NodoT<T>::~NodoT(){

}

template<class T>
void NodoT<T>::setSiguiente(NodoT<T>* siguiente){
	this->siguiente = siguiente;
}

template<class T>
NodoT<T>* NodoT<T>::getSiguiente(){
	return siguiente;
}

template<class T>
T NodoT<T>::getElemento(){
	return elemento;
}

template<class T>
void NodoT<T>::setElemento(T elemento){
	this->elemento = elemento;
}


#endif /* NODOTEMPLATE_H_ */
