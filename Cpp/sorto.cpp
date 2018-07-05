#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Sortowanie 
{
	//vector<int> g;
public:
	/*Sortowanie()
	{
		g.push_back(3);
		g.push_back(10);
		g.push_back(5);
		g.push_back(100);
		g.push_back(0);
	}*/
	bool operator()(int a, int b)
	{
		return a>b;
	}
};

bool funkcja(const int &a, const int &b)
{
	return a>b;
}

int main()
{
	vector<int> v;

	v.push_back(3);
	v.push_back(10);
	v.push_back(5);
	v.push_back(100);
	v.push_back(0);
	
	vector<int> p;
	int rozmiar;
	rozmiar = v.size();
	int *tab = new int[rozmiar];
	//lambda
	sort(v.begin(), v.end(), [](int a, int b)->bool {return a > b; });
	//funkcja;
	sort(v.begin(), v.end(), funkcja);
	//funktor
	Sortowanie o1;
	sort(v.begin(), v.end(), o1);
	return 0;
}
