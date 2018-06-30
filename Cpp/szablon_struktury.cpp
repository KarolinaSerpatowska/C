#include <iostream>

using namespace std;


template<int size, class type>
struct struktura
{
	type a[size];
};


int main()
{
	struktura<4, int> liczby;
	cin >> liczby.a[2];
	cout << liczby.a[2] << endl;

	system("PAUSE");
	return 0;
}
