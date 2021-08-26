#include <iostream>

using namespace std;

int countDigits(int);
int * getDigits(int, int);

int main()
{
	int number;
	int numberOfDigits;

	cout << "Enter a number: ";
	cin >> number;

	numberOfDigits = countDigits(number);
	int * arrayOfDigits;
	arrayOfDigits = getDigits(number, numberOfDigits);

	cout << "The digits: " << endl;
	for(int i = 0; i < numberOfDigits; i++)
	{
		cout << arrayOfDigits[i] << " ";
	}
	cout << endl;

	return 0;
}

int countDigits(int n)
{
	int count = 0;

	//count the number of digits
	while(n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}

int * getDigits(int number, int numberOfDigits)
{
	int temp;
	int * digits = new int [numberOfDigits];

	temp = number;
	//get the digits of the number
	for(int i = 0; i < numberOfDigits; i++)
	{
		digits[i] = temp % 10;
		temp = temp / 10;
	}

	int * tempDigits = new int [numberOfDigits];

	//copy the array "digits" into "tempDigits"
	for(int i = 0; i < numberOfDigits; i++)
	{
		tempDigits[i] = digits[i];
	}

	for(int i = numberOfDigits - 1, j = 0; i >= 0 && j < numberOfDigits ; i--, j++)
	{
		digits[j] = tempDigits[i];
	}

	return digits;
}



