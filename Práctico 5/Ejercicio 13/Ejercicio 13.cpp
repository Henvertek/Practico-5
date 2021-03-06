// Ejercicio 13.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int M[4][3], sumaCol[3] = {0,0,0}, sumaFil[4] = {0,0,0,0};
	srand(time(NULL));
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			M[i][j] = rand() % 10;
			cout << M[i][j] << " ";
			sumaCol[j] += M[i][j];
			sumaFil[i] += M[i][j];
		}
		cout << endl;
	}
	cout << "\nSuma Filas:\n";
	for(int i = 0; i < 4; i++) {
		cout << sumaFil[i] << "   ";
	}
	cout << "\nSuma Columnas:\n";
	for(int i = 0; i < 3; i++) {
		cout << sumaCol[i] << "   ";
	}
	cout << "\n\n";
	system("pause");
  return 0;
}

