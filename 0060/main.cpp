#include <iostream>

using namespace std;

int main()
{
	int * p_1 = new int;
	int * p_2 = new int;
	int * result = new int;

	*p_1 = 5;
	*p_2 = 10;
	*result = *p_1 + *p_2;
	cout << "*result: " << *result << endl;

	return 0;
}

/*
*result: 15
*/
