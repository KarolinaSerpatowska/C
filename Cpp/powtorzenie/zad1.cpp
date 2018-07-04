#include <iostream>
#include <list>
#include <map>

using namespace std;

template<class T>
map<T, int> funkcja(list<T> lista)
{
	map<T, int> mapa;
	for (T element : lista)
	{
		mapa[element]++; 
	}
	
	return mapa;
}

int main()
{
	list<int> l;
	l.push_back(2);
	l.push_back(7);
	l.push_back(0);

	auto m = funkcja(l);

	for (auto i : m)
	{
		cout << i.first << " " << i.second << endl;
	}


	system("PAUSE");
	return 0;
}
