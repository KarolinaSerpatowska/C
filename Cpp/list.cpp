#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> w;
	int liczba;
	list<int>::iterator j;
	for (int i = 0; i < 5; i++)
	{
		cin >> liczba;
		w.push_back(liczba); //dodaje nowy element na koniec
	}

	for (auto j = w.begin(); j != w.end(); j++)
	{
		cout << *j<<endl;
	}
	

	cout << "Liczba elemntow " << w.size() << endl;

	/*
	pop_front() usuwa element z poczatku
	push_front() dodaje element na poczatek
	*/


	system("PAUSE");
	return 0;
}
