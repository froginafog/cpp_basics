#include <iostream>

using namespace std;

int * increment(int);

int main()
{
	int number;

	number = 0;
	number = *increment(number);
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
