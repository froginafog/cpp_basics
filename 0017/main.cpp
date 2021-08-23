#include <iostream>

using namespace std;

int add(int a, int b)
{
    int result;

    result = a + b;

    return result;
}

int main()
{
    int sum;

    sum = add(10, 5);

    cout << "sum: " << sum << endl;

    return 0;
}

/*
sum: 15
*/
