//============================================================================
// Name        : pila.cpp
// Author      : Riedel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cola.h"
using namespace std;

int main() {
	Cola cola;
	char ingresado;

	do{
		cin>>ingresado;
		if(ingresado!='0')
			cola.insertar(ingresado);
	}while(ingresado !='0');

	cout<<"Ahora te muestro la palabra "<<endl;

	while( !cola.estaVacia() ){
		cout<<cola.getDato();
		cola.delDato();
	}

	return 0;
}
