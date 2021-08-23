#include <iostream>

using namespace std;

int main()
{
    int a;  //create variable of the type "int" and call it "a"
    int b;  //create variable of the type "int" and call it "b"

    a = 7;  //assign the value 7 to "a"
    b = 2;  //assign the value 2 to "b"

    int quotient;  //create a variable of the type "int" and call it "quotient"

    quotient = a / b;  //divide the value stored in "a" by the value stored in "b" and store the result in "quotient"
    //a / b = 7 / 2 = (1 + 6) / 2 = 1/2 + 6/2 = 0 + 3 = 3
    //an "int" divided by an "int" has no fractional part

    cout << "quotient: " << quotient << endl;

    return 0;
}

/*
quotient: 3
*/
