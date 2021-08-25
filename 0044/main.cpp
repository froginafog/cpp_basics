#include <iostream>

using namespace std;

void print_matrix_of_integers(int num_rows, int matrix[][5]) //we must specify the number of columns
{
    for(int i = 0; i < num_rows; i++)
    {
        int num_columns = sizeof(matrix[i])/sizeof(int);
        for(int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    const int num_columns = 5;
    //We declare num_columns as a constant so that we can pass the matrix "data" to a function.

    int data[][num_columns] = {{11, 12, 13, 14, 15},
                               {21, 22, 23, 24, 25},
                               {31, 32, 33, 34, 35}};
    //Create a matrix consisting of 3 rows and 5 columns.
    //We don't have to specify the number of rows but we have to specify the number of columns.

    cout << "data: " << endl;
    print_matrix_of_integers(3, data);

    return 0;
}

/*
data:
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
*/
