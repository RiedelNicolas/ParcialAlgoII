#include <iostream>
#include "Pila.h"
using namespace std;

int main(){
	int a = 20, b = 26, c = 33;
	Pila pila;
	pila.apilar(a);
	pila.apilar(c);
	pila.apilar(b);

	while(!pila.estaVacia()){
		cout << pila.obtenerTope() << endl;
		pila.desapilar();
	}

	return 0;
}
