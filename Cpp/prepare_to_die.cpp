#include <iostream>
#include <string>

using namespace std;

template<class type>
class MagicBox
{
	type dupa;

public:
	void setDupa(type d)
	{
		dupa = d;
	}
	type getDupa()
	{
		return dupa;
	}
};

template<>
class MagicBox<string>
{
	string dupa;

public:
	void setDupa(string d)
	{
		dupa = d;
	}
	string getDupa()
	{
		return dupa+"Prepare to die!";
	}
};

template<class type, int size>
class SuperMagicBox
{
	type *tab;

public:
	SuperMagicBox()
	{
		tab = new int[size];
	}
	~SuperMagicBox()
	{
		delete[] tab;
	}
	type &operator[](int index)
	{
		return tab[index];
	}
	void settab(type a) //funkcja dla testu, wstawia przekazana wartosc na pierwsze miejsce w tablicy
	{
		tab[0] = a;
	}
};

template<class type>
type &funkcja(type *begin, type *end)
{
	type max = *begin;
	for (auto x = begin; x != end; x++)
	{
		if (*x > max)
		{
			max = *x;
		}
	}
	return max;
}

int main()
{
	int tab[3];
	tab[0] = 3;
	tab[1] = 10;
	tab[2] = 1;

	cout << funkcja<int>(tab, &tab[2]) << endl;

	MagicBox<int> box;
	box.setDupa(6);
	cout << box.getDupa() << endl;

	MagicBox<string> box2;
	box2.setDupa("Masakra ");
	cout << box2.getDupa() << endl;

	SuperMagicBox<int, 2> sbox;
	sbox.settab(2);
	cout << sbox[0] << endl;
	


	system("PAUSE");
	return 0;
}
