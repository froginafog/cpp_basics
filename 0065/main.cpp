#include <iostream>

using namespace std;

int main()
{
	int A[]{10, 20, 30, 40, 50};  //create an array of 5 integers
	int num_items;

	num_items = sizeof(A) / sizeof(A[0]);

	int * pointers[5];  //create an array of 5 pointers to integers

	//assign the address of each element of the array "A" to the array "pointers"
	for(int i = 0; i < num_items; i++)
	{
		pointers[i] = &A[i];
	}

	cout << "pointers: ";
	for(int i = 0; i < num_items; i++)
	{
		cout << pointers[i] << ' ';
	}
	cout << endl;

	cout << "*pointers: ";
	for(int i = 0; i < num_items; i++)
	{
		cout << *pointers[i] << ' ';
	}
	cout << endl;

	return 0;
}

/*
pointers: 0x62fdf0 0x62fdf4 0x62fdf8 0x62fdfc 0x62fe00
*pointers: 10 20 30 40 50
*/
