#include <iostream>

using namespace std;

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


	cout << funkcja<int>(tab, &tab[2])<<endl;

	system("PAUSE");
	return 0;
}
