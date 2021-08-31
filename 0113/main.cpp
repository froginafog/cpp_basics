#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	cout << "Enter 3 integers: ";

	istream_iterator<int> inputInt = cin;  //Create an input stream for reading integers.

	int n1, n2, n3;

	n1 = *inputInt;
	inputInt++;
	n2 = *inputInt;
	inputInt++;
	n3 = *inputInt;

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;
	cout << "n3: " << n3 << endl;

	return 0;
}

/*
Enter 3 integers: 10 20 30
n1: 10
n2: 20
n3: 30
 */
