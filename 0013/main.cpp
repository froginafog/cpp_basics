#include <iostream>

using namespace std;

int main()
{
    int a;  //create variable of the type "int" and call it "a"
    int b;  //create variable of the type "int" and call it "b"

    a = 7;  //assign the value 7 to "a"
    b = 2;  //assign the value 2 to "b"

    int remainder;  //create a variable of the type "int" and call it "remainder"

    remainder = a % b;  //the remainder of "a" divided by "b"
    //a % b = 7 % 2 = (1 + 6) % 2 = 1 % 2 + 6 % 2 = 1 + 0 = 1
    //1 divided by 2 has a remainder of 1
    //6 divided by 2 has no remainder

    cout << "remainder: " << remainder << endl;

    return 0;
}

/*
remainder: 1
*/
