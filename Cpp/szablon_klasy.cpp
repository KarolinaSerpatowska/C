#include <iostream>

using namespace std;


template<class type>
class klasa
{
	type a;
	type b;

public:
	klasa(){}
	klasa(type x, type y)
	{
		a = x;
		b = y;
	}
	void wypisz()
	{
		cout << a << endl << b << endl;
	}
	type suma()
	{
		return a + b;
	}


};

int main()
{
	klasa<int> o(1, 2);
	o.wypisz();
	cout << o.suma() << endl;

	system("PAUSE");
	return 0;
}
