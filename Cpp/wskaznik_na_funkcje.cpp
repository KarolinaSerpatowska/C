#include <iostream>

using namespace std;

void fajnafunkcja()
{
	cout << "Wywolanie funkcji" << endl;
}

int fun(int a, int b)
{
	return a + b;
}


int main()
{
	void(*wskaznik)(); //deklaracja wskaznika
	wskaznik = &fajnafunkcja; //przypisanie do wskaznika adresu funkcji
	
	(*wskaznik)(); //wywolanie funkcji po wskazniku

	int a = 1;
	int b = 2;

	int(*wsk2)(int, int);
	wsk2 = &fun;
	
	cout<<(*wsk2)(a, b)<<endl;

	system("PAUSE");
	return 0;
}
