#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers{1,2,3,4,5};  //Create a vector of 5 elements of the type int.

	cout << "numbers: ";
	for(int current : numbers)
	{
		cout << current << ' ';
	}
	cout << endl;

	return 0;
}

/*
numbers: 1 2 3 4 5
 */
