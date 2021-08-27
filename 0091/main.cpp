#include <iostream>

using namespace std;

class A
{
private:
	int x;

protected:
	int y;

public:
	void setX(int inputX)
	{
		x = inputX;
	}

	int getX()
	{
		return x;
	}

	void setY(int inputY)
	{
		y = inputY;
	}

	int getY()
	{
		return y;
	}
};

int main()
{
	A a;

	a.setX(5);
	a.setY(10);

	cout << "a.getX(): " << a.getX() << endl;
	cout << "a.getY(): " << a.getY() << endl;

	//We can use public member functions to access private and protected members.

	return 0;
}

/*
a.getX(): 5
a.getY(): 10
 */
