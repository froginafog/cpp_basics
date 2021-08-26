//convert an array of digits into a number
#include <iostream>
#include <cmath>

using namespace std;

int getNumber(int * digits, int numberOfDigits);

int main()
{
	int inputDigits[] = {2,4,6,8};
	int numberOfInputDigits;

	numberOfInputDigits = sizeof(inputDigits)/sizeof(inputDigits[0]);

	int resultingNumber = getNumber(inputDigits, numberOfInputDigits);
	cout << "resultingNumber: " << resultingNumber << endl;

	return 0;
}

int getNumber(int * digits, int numberOfDigits)
{
	int i;
	int number;

	number = 0;
	for(i = 0; i < numberOfDigits; i++)
	{
		number = number + *(digits + i) * pow(10,numberOfDigits - 1 - i);
	}
	return number;
}

/*
resultingNumber: 2468
*/
