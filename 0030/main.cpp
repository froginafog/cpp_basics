#include <iostream>

using namespace std;

int main()
{
    float a[]{10.2, 20.3, 30.1, 40.5, 50.7};
    //create an array of 5 integers
    //we don't have to specify the size of the array when we specify the values

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

/*
10.2
20.3
30.1
40.5
50.7
*/
