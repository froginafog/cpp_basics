#include <iostream>

using namespace std;

int main()
{
    int x_data[]{1, 2, 3, 4, 5};
    int y_data[]{-1, -2, -3, -4, -5};
    int num_points = sizeof(x_data)/sizeof(x_data[0]);

    cout << "before swapping the values between x_data and y_data:" << endl;

    cout << "x_data: ";
    for(int i = 0; i < num_points; i++)
    {
        cout << x_data[i] << "\t";  //"\t" means tab
    }
    cout << endl;

    cout << "y_data: ";
    for(int i = 0; i < num_points; i++)
    {
        cout << y_data[i] << "\t";
    }
    cout << endl;

    for(int i = 0; i < num_points; i++)
    {
        int temp = x_data[i];
        x_data[i] = y_data[i];
        y_data[i] = temp;
    }

    cout << "after swapping the values between x_data and y_data:" << endl;

    cout << "x_data: ";
    for(int i = 0; i < num_points; i++)
    {
        cout << x_data[i] << "\t";
    }
    cout << endl;

    cout << "y_data: ";
    for(int i = 0; i < num_points; i++)
    {
        cout << y_data[i] << "\t";
    }
    cout << endl;

    return 0;
}

/*
before swapping the values between x_data and y_data:
x_data: 1	2	3	4	5
y_data: -1	-2	-3	-4	-5
after swapping the values between x_data and y_data:
x_data: -1	-2	-3	-4	-5
y_data: 1	2	3	4	5
*/
