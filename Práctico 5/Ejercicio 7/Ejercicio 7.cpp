// Ejercicio 7.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int nums[10][20];
	for(int i = 0; i < 10; i++) {
		cout << "\nIngrese 20 numeros:\n>>> ";
		for(int j = 0; j < 20; j++) {
			cin >> nums[i][j];
		}
	}
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 20; j++) {
			cout << nums[i][j] << "|";
		}
		cout << endl;
	}
	system("pause");
  return 0;
}

