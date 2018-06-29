#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> w;
	int liczba;
	for (int i = 0; i < 5; i++)
	{
		cin >> liczba;
		w.push_back(liczba); //dodaje nowy element na koniec vectora
	}
	cout << "Ktory element vectora wypisac? ";
	cin >> liczba;
	cout << w[liczba] << endl;

	cout << "Liczba elemntow vectora " << w.size() << endl;

	sort(w.begin(), w.end());  //bez funkcji sortuje rosnaco

	for (auto j=w.begin(); j!=w.end(); j++)
	{
		cout << *j << endl;
	}


	/*inne metody vectora
	begin() iterator na pierwszy element
	end() iterator na element za ostatnim elementem vectora
	erase(iterator na element do usuniecia, iterator na pierwszy element zakresu, iterator na element za ostatni (np. end() ) ) usuwa element z vectora
	pop_back() usuwa ostatni element
	*/
	system("PAUSE");
	return 0;
}
