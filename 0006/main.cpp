#include <iostream>
#include <iomanip> //to use setprecision()

using namespace std;

int main()
{
    double pi;
    //create a variable of the type "double" and call it "pi"
    //"double" is similar to float, except that "double" can hold more digits

    pi = 123.1415926535897932;
    //assign the value 3.1415926535897932 to the variable "pi"

    cout << "pi: " << pi << endl;

    cout << "pi: " << setprecision(15) << pi << endl;
    //setprecision(15) sets the precision for display of the value stored in "pi" to 15 digits
    //the remaining digits are discarded

    return 0;
}

/*
pi: 3.14159
pi: 3.14159265358979
*/
