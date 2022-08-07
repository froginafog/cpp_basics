#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num_rows;     //number of columns
	int num_columns;  //number of rows
	int i;        //row index
	int j;        //column index

	num_rows = 3;
	num_columns = 3;

	int A[num_rows][num_columns];  //create a matrix called "A"
	int B[num_rows][num_columns];  //create a matrix called "B"

	A[0][0] = 1;
	A[0][1] = 2;
	A[0][2] = 3;
	A[1][0] = 4;
	A[1][1] = 5;
	A[1][2] = 6;
	A[2][0] = 7;
	A[2][1] = 8;
	A[2][2] = 9;

	B[0][0] = 10;
	B[0][1] = 20;
	B[0][2] = 30;
	B[1][0] = 40;
	B[1][1] = 50;
	B[1][2] = 60;
	B[2][0] = 70;
	B[2][1] = 80;
	B[2][2] = 90;

	cout << "A: " << endl;
	for(i = 0; i < num_rows; i++)
	{
		for(j = 0; j < num_columns; j++)
		{
			cout << setw(5) << A[i][j];
		}
		cout << endl;
	}

	cout << "------------------------" << endl;

	cout << "B: " << endl;
	for(i = 0; i < num_rows; i++)
	{
		for(j = 0; j < num_columns; j++)
		{
			cout << setw(5) << B[i][j];
		}
		cout << endl;
	}

	return 0;
}

/*
A:
    1    2    3
    4    5    6
    7    8    9
------------------------
B:
   10   20   30
   40   50   60
   70   80   90
*/
