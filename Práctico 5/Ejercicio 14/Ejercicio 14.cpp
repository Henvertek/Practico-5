// Ejercicio 14.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int squareA[3][3];
	int squareB[3][3];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			squareA[i][j] = rand() % 9;
			cout << squareA[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			squareB[i][j] = squareA[j][i];
			cout << squareB[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
  return 0;
}