#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;

	cout << "numbers.size(): " << numbers.size() << endl;
	numbers.push_back(10);
	cout << "numbers.size(): " << numbers.size() << endl;
	numbers.push_back(20);
	cout << "numbers.size(): " << numbers.size() << endl;
	numbers.push_back(30);
	cout << "numbers.size(): " << numbers.size() << endl;

	cout << "----------------------------------" << endl;

	cout << "numbers: ";
	while(numbers.empty() == false)
	{
		cout << numbers.back() << ' ';  //print the last item in the vector
		numbers.pop_back();  //remove the last item of the vector from the vector
	}
	cout << endl;

	cout << "----------------------------------" << endl;

	cout << "numbers.size(): " << numbers.size() << endl;

	return 0;
}

/*
numbers.size(): 0
numbers.size(): 1
numbers.size(): 2
numbers.size(): 3
----------------------------------
numbers: 30 20 10
----------------------------------
numbers.size(): 0
 */
