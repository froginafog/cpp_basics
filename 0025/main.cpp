#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    x = 10;
    y = 20;

    if(x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
    else if(x == y)
    {
        cout << x << " is equal to " << y << endl;
    }
    else  //x < y
    {
        cout << x << " is less than " << y << endl;
    }

    return 0;
}

/*
10 is less than 20
*/
