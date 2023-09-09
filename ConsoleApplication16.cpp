using namespace std;
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	int ilosc;
	float ocena;
	float srednia;
	double suma = 0;


	cout << "podaj ilosc ocen: " << endl;
	cin >> ilosc;

	for (int i = 1; i <= ilosc; i++)
	{
		cout << "podaj ocenene nr " << i << ": " << endl;
		cin >> ocena;
		suma = suma + ocena;
	}

	srednia = suma / ilosc;
	cout << srednia;

}


