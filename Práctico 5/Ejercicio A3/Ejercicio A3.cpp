// Ejercicio A3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int numeros[100][100], repeat[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	srand(time(NULL));
	for(int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++) {
			numeros[i][j] = rand() % 10;
			cout << numeros[i][j] << " ";
			repeat[numeros[i][j]]++;
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < 10; i++) {
		cout << repeat[i] << " " << endl;
	}

	system("pause");
  return 0;
}