#include <iostream>
#include <cmath>

using namespace std;

class Piechota
{
	int ilosc;
	float zapotrzebowanie;

public:
	Piechota(int ilosc, float zapotrzebowanie)
	{
		this->ilosc = ilosc;
		this->zapotrzebowanie = zapotrzebowanie;
	}
	Piechota()
	{
		ilosc = 100;
		zapotrzebowanie = 5;
	}
	Piechota operator+(const Piechota& p)
	{
		Piechota ps;
		ps.ilosc = p.ilosc + ilosc;
		ps.zapotrzebowanie = (p.zapotrzebowanie + zapotrzebowanie) / ilosc;	
		return ps;
	}
	Piechota operator+=(Piechota& p)
	{
		p.ilosc +=ilosc;
		p.zapotrzebowanie = (p.zapotrzebowanie + zapotrzebowanie) / ilosc;
		return p;
	}
	Piechota operator-(const Piechota& p)
	{
		Piechota ps;
		ps.ilosc = p.ilosc - ilosc;
		ps.zapotrzebowanie = sqrt(zapotrzebowanie);
		return ps;
	}
	Piechota operator-=(Piechota& p)
	{
		p.ilosc -= ilosc;
		p.zapotrzebowanie = sqrt(zapotrzebowanie);
		return p;
	}
	Piechota operator*(float x)
	{
		zapotrzebowanie = zapotrzebowanie*x;
		return *this;
	}
	Piechota operator/(float x)
	{
		zapotrzebowanie = zapotrzebowanie / 5;
		return *this;
	}
	friend ostream &operator<<(ostream &wyjscie, const Piechota&p);
};

ostream &operator<<(ostream &wyjscie, const Piechota& p)
{
	return wyjscie << "ILOSC ZOLNIERZY: " << p.ilosc << " ZAPOTRZEBOWANIE NA GORZALKE: " << p.zapotrzebowanie;
}


int main()
{
	Piechota p;
	Piechota p2;
	cout << p + p2 << endl;
	cout << p - p2 << endl;
	cout << p2 << endl;
	cout << p * 5 << endl;
	cout << p << endl;

	system("PAUSE");
	return 0;
}
