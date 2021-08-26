#include <iostream>

using namespace std;

int main()
{
    int num_items = 5;
    double * a = new double[num_items];  //create an array of "num_items" floating point numbers

    a[0] = 10.12;
    a[1] = 20.23;
    a[2] = 30.34;
    a[3] = 40.45;
    a[4] = 50.56;

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
a: 10.12 20.23 30.34 40.45 50.56
*/
