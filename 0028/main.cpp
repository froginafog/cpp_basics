#include <iostream>

using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    //create an array of 5 integers
    //we don't have to specify the size of the array when we specify the values

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

/*
10
20
30
40
50
*/
