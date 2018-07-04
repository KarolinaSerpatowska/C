#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	
	v.push_back(3);
	v.push_back(1);
	v.push_back(5);
	v.push_back(10);
	v.push_back(0);

	for (int i = 0; i < v.size(); i++)
	{
		cout <<"Przed sortowaniem:" << v[i] << endl;
	}

	sort(v.begin(), v.end(), [](int a, int b)->bool {return a > b; }); //lambda :)

	for (int i = 0; i < v.size(); i++)
	{
		cout << "Po: " << v[i] << endl;
	}

	system("PAUSE");
	return 0;
}
