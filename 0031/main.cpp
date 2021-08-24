#include <iostream>

using namespace std;

int main()
{
    string a[]{"one apple", "two bananas", "three cerries", "four donuts", "five eggs"};
    //create an array of 5 strings

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

/*
one apple
two bananas
three cerries
four donuts
five eggs
*/
