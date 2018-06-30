#include <iostream>
#include <string>

using namespace std;


template<class type>
type funkcja2(type a, type b)
{
	return a + b;
}


template<> string funkcja2<string>(string a, string b)
{
	return a + b;
}



int main()
{
	double a, b;
	a = 1.5;
	b = 2.5;

	cout << funkcja2<double>(a, b) << endl;

	int x, y;
	x = 1;
	y = 2;

	cout << funkcja2<int>(x, y) << endl;

	string n1 = "ble";
	string n2 = "ala";

	cout << funkcja2<string>(n1, n2) << endl;

	system("PAUSE");
	return 0;
}
