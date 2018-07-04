#include <iostream>
#include <string>

using namespace std;

float dzielenie(int a, int b)
{
	if (b == 0)
	{
		string wyjatek = "nie mozna dzielic przez 0";
		throw wyjatek;
	}

	return a / b;
}

int main()
{
	try
	{
		dzielenie(2, 0);
	}
	catch(string w)
	{
		cout << "Wyjatek: " << w << endl;
	}
	catch(...)
	{
		cout << "Pozostale wyjatki " << endl;
	}


	system("PAUSE");
	return 0;
}
