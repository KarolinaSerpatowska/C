#include <iostream>
#include <memory>

using namespace std;

class Triangle
{
	float x, y, z;

public:
	Triangle() {}
	Triangle(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}
	void obwod(unique_ptr<Triangle> &ptr)
	{
		cout << ptr->x + ptr->y + ptr->z << endl;
	}
};


int main()
{
	unique_ptr<Triangle> ptr1(new Triangle(1, 2, 3));
	unique_ptr<Triangle> ptr2(new Triangle(5, 6, 7));
	ptr1->obwod(ptr2);

	system("PAUSE");
	return 0;
}
