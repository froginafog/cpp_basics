#include <iostream>

using namespace std;

int main()
{
    int integer;
    int num_integers = 5;
    int integers[num_integers];

    for(int i = 0; i < num_integers; i++)
    {
        cout << "Enter an integer: ";
        cin >> integer;
        integers[i] = integer;
    }

    cout << "integers: " << endl;
    for(int i = 0; i < num_integers; i++)
    {
        cout << integers[i] << endl;
    }

    return 0;
}

/*
Enter an integer: 10
Enter an integer: 20
Enter an integer: 30
Enter an integer: 40
Enter an integer: 50
integers:
10
20
30
40
50
*/
