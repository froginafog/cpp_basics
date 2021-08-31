#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	cout << "Enter 3 integers: ";

	istream_iterator<int> inputInt = cin;

	int n1, n2, n3;

	n1 = *inputInt;
	inputInt++;
	n2 = *inputInt;
	inputInt++;
	n3 = *inputInt;

	ostream_iterator<int> outputInt = cout;

	cout << "n1: ";
	*outputInt = n1;
	cout << endl;
	outputInt++;

	cout << "n2: ";
	*outputInt = n2;
	cout << endl;
	outputInt++;

	cout << "n3: ";
	*outputInt = n3;
	cout << endl;

	return 0;
}

/*
Enter 3 integers: 10 20 30
n1: 10
n2: 20
n3: 30
 */
