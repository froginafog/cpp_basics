#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers(5);  //Create a vector of 5 elements of the type int.

	cout << "numbers.size(): " << numbers.size() << endl;

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;

	cout << "numbers: ";
	for(auto it = numbers.begin(); it != numbers.end(); it++)  //it = iterator
	{
		cout << *it << ' ';
	}
	cout << endl;

	cout << "erase the vector" << endl;
	numbers.erase(numbers.begin(), numbers.end());
	//numbers.begin() is of the type "iterator"

	cout << "numbers.size(): " << numbers.size() << endl;

	cout << "numbers: ";
	for(auto it = numbers.begin(); it != numbers.end(); it++)  //it = iterator
	{
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}

/*
numbers.size(): 5
numbers: 1 2 3 4 5
erase the vector
numbers.size(): 0
numbers:
 */
