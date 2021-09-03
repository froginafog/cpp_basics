#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> A{1, 2, 3, 4, 5};

	vector<int>::iterator it;

	cout << "A: ";
	for(it = A.begin(); it != A.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	cout << "A.front(): " << A.front() << endl;
	cout << "A.back() : " << A.back() << endl;

	cout << "--------------------------" << endl;

	A[0] = 10;
	A.at(4) = 50;

	cout << "A: ";
	for(it = A.begin(); it != A.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	cout << "A.front(): " << A.front() << endl;
	cout << "A.back() : " << A.back() << endl;

	return 0;
}

/*
A: 1 2 3 4 5
A.front(): 1
A.back() : 5
--------------------------
A: 10 2 3 4 50
A.front(): 10
A.back() : 50
 */


