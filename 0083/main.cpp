#include <iostream>

using namespace std;

int main()
{
	int numerator;
	int denominator;
	int quotient;

	numerator = 1;
	denominator = 0;

	if(denominator == 0)
	{
		throw invalid_argument("division by zero is not allowed");
	}

	quotient = numerator/denominator;

	cout << "quotient: " << quotient << endl;

	return 0;
}

/*
terminate called after throwing an instance of 'std::invalid_argument'
  what():  division by zero is not allowed
 */
