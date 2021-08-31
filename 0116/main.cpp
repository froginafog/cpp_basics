#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> A{1, 2, 3, 4, 5};

	ostream_iterator<int> output1{cout};

	cout << "A (output1): ";
	copy(A.begin(), A.end(), output1);
	cout << endl;

	cout << "---------------------------" << endl;

	ostream_iterator<int> output2{cout, " "};

	cout << "A (output2): ";
	copy(A.begin(), A.end(), output2);

	/*
	This is similar to
	cout << "A (output2): ";
	for(vector<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		cout << *it << " ";
	}

	*/
	return 0;
}

/*
A (output1): 12345
---------------------------
A (output2): 1 2 3 4 5
 */
