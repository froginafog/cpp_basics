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

    int total_num_bytes = sizeof(data);
    cout << "total_num_bytes: " << total_num_bytes << endl;

    int num_bytes_per_item = sizeof(data[0][0]);
    cout << "num_bytes_per_item: " << num_bytes_per_item << endl;

    int num_bytes_per_row = sizeof(data[0]);  //number of bytes in row 0 (first row)
    cout << "num_bytes_per_row: " << num_bytes_per_row << endl;

    int num_rows = total_num_bytes / num_bytes_per_row;
    cout << "num_rows: " << num_rows << endl;

    cout << "data: " << endl;
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
total_num_bytes: 60
num_bytes_per_item: 4
num_bytes_per_row: 20
num_rows: 3
data:
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
*/
