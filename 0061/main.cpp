#include <iostream>

using namespace std;

int main()
{
	double * p_1 = new double;
	double * p_2 = new double;
	double * result = new double;

	*p_1 = 5.3;
	*p_2 = 10.6;
	*result = *p_1 + *p_2;
	cout << "*result: " << *result << endl;

	return 0;
}

/*
*result: 15.9
*/
