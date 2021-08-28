//overloading
//Functions with the same name with different types of variable in the parameters
//can be called based on the types of variables in the parameters.
#include <iostream>

using namespace std;

void print(char);
void print(int);
void print(double);

int main()
{
	print('T');
	print(5);
	print(123.45);

	return 0;
}

void print(char inputCharacter)
{
	cout << "character: " << inputCharacter << endl;
}

void print(int inputInteger)
{
	cout << "integer: " << inputInteger << endl;
}

void print(double inputDouble)
{
	cout << "double: " << inputDouble << endl;
}

/*
character: T
integer: 5
double: 123.45
 */


