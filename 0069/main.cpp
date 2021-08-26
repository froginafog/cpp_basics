#include <iostream>

using namespace std;

int main()
{
    int num_items = 5;
    string * a = new string[num_items];  //create an array of "num_items" strings

    a[0] = "This is the first string.";
    a[1] = "This is the second string.";
    a[2] = "This is the third string.";
    a[3] = "This is the fourth string.";
    a[4] = "This is the fifth string.";

    cout << "a: " << endl;
    for(int i = 0; i < num_items; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;

    delete [] a;  //free the memory allocated to "a"

	return 0;
}

/*
a:
This is the first string.
This is the second string.
This is the third string.
This is the fourth string.
This is the fifth string.
*/
