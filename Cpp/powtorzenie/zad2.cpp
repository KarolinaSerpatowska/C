#include <iostream>
#include <list>
#include <map>
#include <sstream>

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

template<> map<string, int> funkcja(list<string> lista)
{
	map<string, int> mapa;
	for (string x : lista)
	{
		stringstream ss(x);
		string slowo;
		while (ss >> slowo) 
		{
			mapa[slowo]++; 
		}
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

	list<string> a;
	a.push_back("Gupie zdanie");
	a.push_back("Dlaczemu?");
	a.push_back("Gorzej nie bedzie");
	auto c = funkcja(a);
	for (auto x : c)
	{
		cout << x.first << " " << x.second << endl;
	}


	system("PAUSE");
	return 0;
}
