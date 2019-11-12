#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

class LoadScores {
public:
	void SortBubblescores(int* arreglo, int tamano) {
		bool validatepath = true;
		while (validatepath) {
			validatepath = false;
			for (int i = 0; i < tamano - 1; ++i) {

				if (arreglo[i + 1] > arreglo[i]) {
					validatepath = true;
					swap(arreglo[i], arreglo[i + 1]);
				}
			}

		}




	}
};

class Sorter {
public:
	void Sort() {
		LoadScores Scores;


		string names[6];


		int position[6], participants[6];



		fstream archivo;

		archivo.open("Results.txt");


		for (int i = 0; i < 6; i++) {
			archivo >> names[i] >> position[i];
			participants[i] = position[i];
		}
		archivo.close();


		Scores.SortBubblescores(participants, 6);

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 6; j++) {

				if (participants[i] == position[j]) {
					cout << names[j] << " " << position[j] << endl;

					position[j] = -1;
					break;
				}
			}
		}


	}

};




int main()
{
	cout << "The Top 3 Scores are:    " << endl;
	Sorter S;
	S.Sort();

}

