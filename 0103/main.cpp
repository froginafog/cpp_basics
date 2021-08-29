#include <iostream>
#include <vector>  //to use vector<int>

using namespace std;

int main()
{
	vector<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	size_t num_elements = numbers.size();
	cout << "num_elements: " << num_elements << endl;

	cout << "numbers: ";
	for(auto it = numbers.begin(); it != numbers.end(); it++)  //it = iterator
	{
		cout << *it << ' ';
	}
	cout << endl;

	cout << "-------------------------------------------" << endl;

	cout << "clear the vector" << endl;
	numbers.clear();  //remove all elements from the vector

	num_elements = numbers.size();
	cout << "num_elements: " << num_elements << endl;

	cout << "numbers: ";
	for(auto it = numbers.begin(); it != numbers.end(); it++)  //it = iterator
	{
		cout << *it << ' ';
	}
	cout << endl;

	//By using iterators, we can see that the vector has been cleared.

	return 0;
}

/*
num_elements: 5
numbers: 1 2 3 4 5
-------------------------------------------
clear the vector
num_elements: 0
numbers:
 */
