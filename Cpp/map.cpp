#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<int, string> mapa; //map<klucz, wartosc> 

	mapa[0] = "Zbych";
	mapa[1] = "Janusz";
	mapa[2] = "Zbychu";
	mapa[3] = "Drugi zbych";
	mapa[4] = "Zbych junior";
	mapa[5] = "Zbych senior";

	cout << "Konkretny element:" << mapa[2] << endl; //wypisujemy konkretny element (jak w tablicy)

	for (map<int, string>::iterator it1 = mapa.begin(); it1 != mapa.end(); it1++)
	{
		cout << it1->first << "  " << it1->second << endl;
		//chodzi tu o wypisanie pozycji(first) (klucza) i co się przy nim znajduje(second)
		//czyli mozna powiedziec ze "indeks tablicy i co w nim jest" - tak na chlopski rozum :)
	}

	cout << mapa.size() << endl;


	system("PAUSE");
	return 0;
}
