#include <iostream>

using namespace std;

int main()
{
	int num_rows = 2;
	int num_columns = 3;

	//Allocate an array of "rows" integer pointers.
	//These are the rows.
	int ** A = new int * [num_rows];

	for(int i = 0; i < num_rows; i++)
	{
		A[i] = new int [num_columns];  //Allocate the columns.
	}

	A[0][0] = 11;
	A[0][1] = 12;
	A[0][2] = 13;
	A[1][0] = 21;
	A[1][1] = 22;
	A[1][2] = 23;

	cout << "A: " << endl;
	for(int i = 0; i < num_rows; i++)
	{
		for(int j = 0; j < num_columns; j++)
		{
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}

	for(int i = 0; i < num_rows; i++)
	{
		delete [] A[i];
	}
	delete [] A;

	return 0;
}

/*
A:
11 12 13
21 22 23
 */
