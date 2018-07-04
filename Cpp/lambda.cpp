#include <iostream>

using namespace std;

int main()
{
	
	cout << [](int a, int b)->int {return a + b; }(1, 2) << endl;

	[]()->void {cout << "lambda" << endl; }();

	auto wsk = []()->void {cout << "lambda" << endl; };
	wsk();

	auto wsk2 = [](int a, int b)->int {return a + b; };
	cout<<wsk2(3, 4)<<endl;

	system("PAUSE");
	return 0;
}
