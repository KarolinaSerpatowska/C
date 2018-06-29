#include <iostream>

using namespace std;

class cosik
{
public:
	int a;
	int b;

	cosik(){}
	cosik(int x, int y)
	{
		a = x;
		b = y;
	}

	cosik operator+(const cosik &c)
	{
		cosik c1;
		c1.a = c.a + a;
		c1.b = c.b + b;
		return c1;
	}

	cosik operator-(const cosik &c)
	{
		cosik c1;
		c1.a = c.a - a;
		c1.b = c.b - b;
		return c1;
	}

};


int main()
{
	cosik obiekt(1, 2);
	cosik obiekt2(2, 3);

	cosik sum = obiekt + obiekt2;
	cout << sum.a << endl<<sum.b<<endl;


	system("PAUSE");
	return 0;
}
