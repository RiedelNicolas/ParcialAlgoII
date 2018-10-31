//============================================================================
// Name        : Simplemente.cpp
// Author      : Riedel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
	cout << "arranca o no arranca?" << endl;
	Lista lista;
	char aux;
	cin>>aux;
	while(aux!='0'){
		lista.insertar(aux);
		cin>>aux;
	}
	cout<<lista.obtenerDato(5)<<endl;
	cout<<lista.obtenerDato(3)<<endl;
	return 0;
}
