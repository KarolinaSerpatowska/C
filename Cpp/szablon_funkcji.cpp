#include <iostream>

using namespace std;


template<class type>
type funkcja2(type a, type b)
{
	return a + b;
}



int main()
{
	double a, b;
	a = 1.5;
	b = 2.5;

	cout << funkcja2(a, b) << endl;

	int x, y;
	x = 1;
	y = 2;

	cout << funkcja2(x, y) << endl;

	system("PAUSE");
	return 0;
}
