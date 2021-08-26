#include <iostream>

using namespace std;

int countdown(int n);

int main()
{
    int starting_number = 5;
    int ending_number;

    cout << "starting_number: " << starting_number << endl;
    ending_number = countdown(starting_number);
    cout << "ending_number: " << ending_number << endl;

    return 0;
}

int countdown(int n)
{
    cout << n << endl;
    if(n == 0)
    {
        return n;
    }
    else
    {
        countdown(n - 1);
    }
}

/*
starting_number: 5
5
4
3
2
1
0
ending_number: 0
*/
