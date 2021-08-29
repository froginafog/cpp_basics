#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int A[]{1,2,3};

	vector<int *> pointers{&A[0], &A[1], &A[2]};

	cout << "pointers: ";
	for(int * current: pointers)
	{
		cout << current << ' ';
	}
	cout << endl;

	cout << "pointers: ";
	for(int * current: pointers)
	{
		cout << *current << ' ';
	}
	cout << endl;

	return 0;
}

/*
pointers: 0x62fdc4 0x62fdc8 0x62fdcc
pointers: 1 2 3
 */
