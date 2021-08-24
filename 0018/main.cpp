#include <iostream>

using namespace std;

double add(double x_1, double x_2)
{
    return x_1 + x_2;
}

double subtract(double x_1, double x_2)
{
    return x_1 - x_2;
}

double multiply(double x_1, double x_2)
{
    return x_1 * x_2;
}

double divide(double x_1, double x_2)
{
    return x_1 / x_2;
}

int main()
{
    double sum, difference, product, quotient;

    sum = add(10, 5);
    difference = subtract(10, 5);
    product = multiply(10, 5);
    quotient = divide(10, 5);

    cout << "sum       : " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product   : " << product << endl;
    cout << "quotient  : " << quotient << endl;

    return 0;
}

/*
sum       : 15
difference: 5
product   : 50
quotient  : 2
*/
