// Ejercicio 15.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char phoneBook[100];
	int num;
	cout << "Ingrese los numeros separados por barras:\n>>> ";
	cin.getline(phoneBook, 40);
	cout << "El numero de cual posicion desea imprimir?\n>>> ";
	cin >> num;
	for(int i = 0; phoneBook[i] != '\0'; i++) {
		if(phoneBook[i] == '/') {
			num--;
		}
		else if(num == 1) {
		  cout << phoneBook[i];
		}
		
	}
	cout << endl;
	system("pause");
  return 0;
}

