//============================================================================
// Name        : pila.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Pila.h"
using namespace std;

/*para probarlo voy a apilar una serie de chars y luego voy a desapilar la misma
 * mientras imprimo el resultado;
 */
int main() {
	char ingresado;
	Pila pila;

	cout<<"Manda char a lo loco y termina con un '0' "<<endl;
	do{
		cin>>ingresado;
		pila.insertar(ingresado);
	}while(ingresado !='0');
	pila.deleteDato();//borro el '0'

	cout<<"Ahora te muestro la palabra dada vuelta re loco"<<endl;

	while( !pila.pilaVacia() ){
		cout<<pila.getDato();
		pila.deleteDato();
	}
	return 0;
}
