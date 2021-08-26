#include <iostream>

using namespace std;

int main()
{
	int * pointer = new int;

	*pointer = 10;
	cout << "*pointer: " << *pointer << endl;

	return 0;
}

/*
*pointer: 10
*/
