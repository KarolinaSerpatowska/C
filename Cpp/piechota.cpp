#include <iostream>
#include <math.h>

using namespace std;

class Piechota {
private:
	int ilosc;
	float zap;
public:
	Piechota(int il = 100, float zapo = 5.0)
	{
		ilosc = il;
		zap = zapo;
	}
	void operator +(Piechota o1)
	{
		Piechota o2;
		o2.ilosc = o1.ilosc + ilosc;
		o2.zap = (o1.zap + zap) / 2;
	}
	void operator +=(Piechota o1)
	{
		int a = 100;
		float b = 5.0;
		o1.ilosc += a;
		o1.zap += b;
		o1.zap = o1.zap / 2;
	}
	void operator -(Piechota o1)
	{
		Piechota o2;
		o2.ilosc = o1.ilosc - ilosc;
		if (o2.ilosc<0)
			o2.ilosc = o2.ilosc*(-1);
		o2.zap = sqrt(o1.zap + zap);
	}
	void operator -=(Piechota o1)
	{
		int a = 100;
		float b = 5.0;
		o1.ilosc -= a;
		if (o1.ilosc<0)
			o1.ilosc *= (-1);
		o1.zap = sqrt(o1.zap + b);
	}
	float operator *(float x)
	{
		x = 2.5;
		float n_zap;
		n_zap = zap*x;
		return n_zap;
	}
	Piechota operator /(float x)
	{
		x = 2.5;
		float n_zap2;
		n_zap2 = zap / x;
		return n_zap2;
	}
	
	friend ostream &operator<< (ostream &wyjscie, const Piechota &p);

};

ostream &operator<< (ostream &wyjscie, const Piechota &p)
{
	return wyjscie << "ILOSC ZOLNIERZY: " << p.ilosc << ", ZAPOTRZEBOWANIE NA GORZALKE: " << p.zap << endl;
}

int main()
{
	Piechota o1 = Piechota(120, 15.5);
	cout << o1;
	
	system("PAUSE");
	return 0;
}
