#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> A{1, 2, 3, 4, 5};
	vector<int> B{A.cbegin(), A.cend()};

	vector<int>::iterator it;

	cout << "A: ";
	for(it = A.begin(); it != A.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	cout << "B: ";
	for(it = B.begin(); it != B.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}

/*
A: 1 2 3 4 5
B: 1 2 3 4 5
 */
