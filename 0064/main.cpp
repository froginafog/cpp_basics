#include <iostream>

using namespace std;

int main()
{
	char characters[]{'A','P','P','L','E'};
	int num_items;

	num_items = sizeof(characters)/sizeof(characters[0]);
	cout << "num_items: " << num_items << endl;

	char * pointers[num_items];  //array of pointers to characters

	for(int i = 0; i < num_items; i++)
	{
		pointers[i] = &characters[i];
	}

	cout << "*pointers[i]: ";
	for(int i = 0; i < num_items; i++)
	{
		cout << *pointers[i] << ' ';
	}
	cout << endl;

	return 0;
}

/*
size: 5
*pointers[i]: A P P L E
 */


