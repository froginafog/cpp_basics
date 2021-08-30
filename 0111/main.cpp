#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size = 5;
	vector<int> A(size);

	fill(A.begin(), A.end(), 10);

	cout << "A: ";
	for(vector<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}

/*
A: 10 10 10 10 10
 */
