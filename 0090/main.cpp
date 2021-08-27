#include <iostream>

using namespace std;

class A
{
private:
	int x;

protected:
	int y;

public:
	int z;
};

int main()
{
	A a;

	//a.x = 5;
	//This line results in error.
	//We cannot access private members directly with an object.

	//a.y = 10;
	//This line results in error.
	//We cannot access protected members directly with an object.

	a.z = 15;

	cout << "a.z: " << a.z << endl;

	return 0;
}

/*
a.z: 15
 */
