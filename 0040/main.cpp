#include <iostream>

using namespace std;

int main()
{
    int num_columns = 5;
    int data[][num_columns] = {{11, 12, 13, 14, 15},
                               {21, 22, 23, 24, 25},
                               {31, 32, 33, 34, 35}};
    //Create a matrix consisting of 3 rows and 5 columns.
    //We don't have to specify the number of rows but we have to specify the number of columns.

    cout << data[0][0] << " " << data[0][1] << " " << data[0][2] << " " << data[0][3] << " " << data[0][4] << endl;
    cout << data[1][0] << " " << data[1][1] << " " << data[1][2] << " " << data[1][3] << " " << data[1][4] << endl;
    cout << data[2][0] << " " << data[2][1] << " " << data[2][2] << " " << data[2][3] << " " << data[2][4] << endl;

    return 0;
}

/*
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
*/
