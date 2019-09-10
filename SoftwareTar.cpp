#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

void Metodoburbuja(int *arreglo,int tamano) {
	bool huboIntercambios = true;
	while (huboIntercambios) {
		huboIntercambios = false;

		for (int i = 0; i < tamano - 1; ++i) {

			if (arreglo[i + 1] > arreglo[i]) {
				huboIntercambios = true;
				swap(arreglo[i], arreglo[i + 1]);
			}
		}
		//print(arreglo, tamano);
		//cout << "\n";
	}




}

int main()
{
	string arrapala[6];


	int arraynum[6], arrcopy[6];




	fstream archivo;
	archivo.open("Results.txt");
	for (int i = 0; i < 6; i++) {
		archivo >> arrapala[i] >> arraynum[i]; //recibir nombre y calificacion
		arrcopy[i] = arraynum[i]; //duplica arraynum
	}
	archivo.close();


	Metodoburbuja(arrcopy, 6); //copiar cosas de adentro

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) { //agarrar nombres

			if (arrcopy[i] == arraynum[j]) {
				cout << arrapala[j] << " " << arraynum[j] << endl;

				arraynum[j] = -1; //para que no tome el mismo valor del nombre por si se repite

				break;
			}
		}
	}



}

