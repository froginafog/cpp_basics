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

    int num_rows = 3;

    for(int i = 0; i < num_rows; i++)
    {
        for(int j = 0; j < num_columns; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
*/
