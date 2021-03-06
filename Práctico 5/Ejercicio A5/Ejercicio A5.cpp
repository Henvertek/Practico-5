// Ejercicio A5.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

void printTemp(int d, int h, int data[31][24]) {
	cout << "El dia " << d + 1 << " a la hora " << h << ":00 la temperatura fue de " << data[d][h] << " grados\n";
}

int main()
{
	srand(time(NULL));
	const int DAYS = 31, HOURS = 24;
	int temps[DAYS][HOURS], choice, day, hour;

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			temps[i][j] = rand() % 20 + 10;
			printTemp(i, j, temps);
		}
	}
	do {
		do {
			cout << "\n1. Ver las temperaturas de cada dia del mes a una hora determinada.\n";
			cout << "2. Ver las temperaturas de cada hora de un dia del mes determinado.\n";
			cout << "3. Mostrar dia y hora cuando se produjo la temperatura maxima del mes.\n";
			cout << "4. Salir.\n\n>>> ";
			cin >> choice;
			if (choice < 1 || choice > 4) {
				cout << "Opcion no valida.\n";
			}
		} while (choice < 1 || choice > 4);
		switch (choice) {
		case 1:
			do {
				cout << "Ingrese una hora del dia valida (0 - 23)\n>>>";
				cin >> hour;
				if (hour < 0 || hour > 23) {
					cout << "Hora no valida.\n\n";
				}
			} while (hour < 0 || hour > 23);
			cout << endl;
			for (int i = 0; i < DAYS; i++) {
				printTemp(i, hour, temps);
			}
			break;
		case 2:
			do {
				cout << "Ingrese un dia del mes valido (1 - 31)\n>>>";
				cin >> day;
				if (day < 1 || day > 31) {
					cout << "Dia no valido.\n\n";
				}
			} while (day < 1 || day > 31);
			day--;
			cout << endl;
			for (int i = 0; i < HOURS; i++) {
				printTemp(day, i, temps);
			}
			break;
		case 3:
			int max = 0, maxD, maxH;
			for (int i = 0; i < DAYS; i++) {
				for (int j = 0; j < HOURS; j++) {
					if (temps[i][j] > max) {
						max = temps[i][j];
						maxD = i;
						maxH = j;
					}
				}
			}
			printTemp(maxD, maxH, temps);
		}
	} while (choice != 4);
	cout << "Saliendo...";
  return 0;
}

