#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> A;

	A.push_back(2);
	A.push_back(4);
	A.push_back(6);
	A.push_back(8);
	A.push_back(10);

	vector<int>::iterator it;

	cout << "A: ";
	for(it = A.begin(); it != A.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}

/*
A: 2 4 6 8 10
 */
