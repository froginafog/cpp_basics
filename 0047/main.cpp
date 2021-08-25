#include <iostream>

using namespace std;

int main()
{
    int * p;  //create a pointer of the type int
    int n;

    n = 5;
    p = &n;  //let p point to the address of n
    //now p contains the memory address of n
    //& is the address of operator
    cout << "n: " << n << endl;
    cout << "&n: " << &n << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    //*p gets the value store in the memory address at which p currently points to

    return 0;
}

/*
n: 5
&n: 0x7ffea56c223c
p: 0x7ffea56c223c
*p: 5
*/
