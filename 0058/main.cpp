#include <iostream>

using namespace std;

int * increment(int);

int main()
{
	int number;
	int * pointer;

	number = 0;
	pointer = increment(number);
	number = *pointer;
	cout << "number: " << number << endl;

	return 0;
}

int * increment(int n)
{
	int * p;

	p = &n;
	n++;

	return p;
}

/*
number: 1
*/
