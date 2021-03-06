// Ejercicio 8.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int A[5][4];
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 4; j++) {
			A[i][j] = rand() % 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int largest = -1, smallest = 10, row, col;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 4; j++) {
			if(A[i][j] > largest) {
				largest = A[i][j];
				col = j + 1;
			}
			if(A[i][j] < smallest) {
				smallest = A[i][j];
				row = i + 1;
			}
		}
	}
	cout << "\nEl mas grande esta en la columna " << col << " y el mas pequeno esta en la fila " << row << ".\n";
	system("pause");
  return 0;
}