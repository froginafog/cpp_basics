#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> A;

	A.push_back(10);
	A.push_back(20);
	A.push_back(30);

	cout << "A: ";
	for(vector<int>::const_iterator it = A.cbegin(); it != A.cend(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	cout << "A (reverse): ";
	for(vector<int>::const_reverse_iterator it = A.crbegin(); it != A.crend(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}

/*
A: 10 20 30
A (reverse): 30 20 10
 */
