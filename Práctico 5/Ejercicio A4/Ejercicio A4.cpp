// Ejercicio A4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const unsigned int size = 100;
	int list[size];
	int newSize = size, pos;
	char type;
	cout << "Arreglo original:\n";
	for (int i = 0; i < size; i++) {
		list[i] = rand() % 10;
		cout << list[i] << ' ';
		if ((i + 1) % 50 == 0) {
			cout << endl;
		}
	}
	do {
		do {
			cout << "\nIngrese el indice del elemento a eliminar:\n>>> ";
			cin >> pos;
			if (pos < 0 || pos > 99) {
				cout << "Indice no valido, intente nuevamente. (validos entre 0 y " << newSize - 1 << ")\n";
			}
		} while (pos < 0 || pos > 99);
		do {
			cout << "\nDesea eliminarlo de forma fisica o logica? (F/L)\n>>> ";
			cin >> type;
			if (type != 'l' && type != 'f' && type != 'L' && type != 'F') {
				cout << "Tipo no valido, intente nuevamente\n";
			}
		} while (type != 'l' && type != 'f' && type != 'L' && type != 'F');
		switch (type) {
		case 'l':
		case 'L':
			list[pos] = -1;
			break;
		default:
			newSize--;
			for (int i = pos; i < newSize; i++) {
				list[i] = list[i + 1];
			}
		}
		cout << "Nuevo arreglo:\n\n";
		for (int i = 0; i < size; i++) {
			cout << list[i] << ' ';
			if ((i + 1) % 50 == 0) {
				cout << endl;
			}
		}
		cout << "\nDesea eliminar otro elemento? (S/N)\n>>>";
		cin >> type;
	} while (type != 'n' && type != 'N');
	system("pause");
  return 0;
}

