#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int A[]{1,2,3};

	vector<int *> pointers{&A[0], &A[1], &A[2]};  //vector of pointers

	cout << "pointers: ";
	for(size_t i = 0; i < pointers.size(); i++)
	{
		cout << pointers[i] << ' ';
	}
	cout << endl;

	cout << "*pointers: ";
	for(size_t i = 0; i < pointers.size(); i++)
	{
		cout << *pointers[i] << ' ';
	}
	cout << endl;

	return 0;
}

/*
pointers: 0x62fdd4 0x62fdd8 0x62fddc
*pointers: 1 2 3
 */
