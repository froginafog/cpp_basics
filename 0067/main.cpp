#include <iostream>

using namespace std;

int main()
{
    int num_items = 5;
    int * a = new int[num_items];  //create an array of "num_items" integers

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

    cout << "a: ";
    for(int i = 0; i < num_items; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    delete [] a;  //free the memory allocated to "a"

	return 0;
}

/*
a: 10 20 30 40 50
*/
