#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    x = 5;
    y = 10;

    cout << "before swapping the values between x and y: " << endl;
    cout << "x: " << x << " , y: " << y << endl;

    int temp; //temporary storage
    temp = x;
    x = y;
    y = temp;
    cout << "after swapping the values between x and y: " << endl;
    cout << "x: " << x << " , y: " << y << endl;

    return 0;
}

/*
before swapping the values between x and y:
x: 5 , y: 10
after swapping the values between x and y:
x: 10 , y: 5
*/
