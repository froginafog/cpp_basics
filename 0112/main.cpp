#include <iostream>
#include <vector>
#include <algorithm>  //to use "newIt = remove(A.begin(), A.end(), valueToBeRemoved);"

using namespace std;

int main()
{
	vector<int> A{1, 2, 3, 3, 4, 3, 5, 3};

	cout << "A: ";
	for(vector<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	vector<int>::iterator newIt;

	int valueToBeRemoved = 3;

	newIt = remove(A.begin(), A.end(), valueToBeRemoved);
	cout << "newIt = remove(A.begin(), A.end(), valueToBeRemoved);" << endl;

	cout << "A: ";
	for(vector<int>::iterator it = A.begin(); it != newIt; it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}

/*
A: 1 2 3 3 4 3 5 3
newIt = remove(A.begin(), A.end(), valueToBeRemoved);
A: 1 2 4 5
 */
