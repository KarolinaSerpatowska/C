#include <iostream>

using namespace std;

class Linear
{
	double a;
	double b;

public:
	Linear(){}
	Linear(double x, double y)
	{
		a = x;
		b = y;
	}

	double operator()(double x)
	{
		return (a + b) * x;
	}

};


int main()
{
	Linear a(1, 3);
	double wynik = a(2);
	cout << wynik << endl;

	system("PAUSE");
	return 0;
}
