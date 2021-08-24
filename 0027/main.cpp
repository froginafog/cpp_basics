#include <iostream>

using namespace std;

int main()
{
    int a[5];  //create an array which can store 5 integers

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

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
