//n! = n * (n-1)! = n * (n-1) * (n-2) *... * 3 * 2 * 1
#include <iostream>

using namespace std;

unsigned long long int factorial(unsigned long long int);

int main()
{
	int number;

	number = 4;
	cout << number << "!: " << factorial(number) << endl;

	return 0;
}

unsigned long long int factorial(unsigned long long int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}

/*
4!: 24
*/
