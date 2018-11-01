#include <iostream>
#include "Cola.h"

int main(){
	int a = 10, b = 20, c = 35, d = -10;
	Cola<int> cola;

	cola.acolar(a);
	cola.acolar(b);
	cola.acolar(c);
	cola.acolar(d);

	while(!cola.estaVacia()){
		std::cout << "En el frente de la cola se encuentra: " << cola.obtenerFrente();
		std::cout << ", y en el fondo: " << cola.obtenerFondo() << std::endl;
		cola.desacolar();
	}

	return 0;
}
