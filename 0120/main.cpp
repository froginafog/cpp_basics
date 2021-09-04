#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> A;

	A.push(1);

	cout << "A.top(): " << A.top() << endl;

	A.push(2);

	cout << "A.top(): " << A.top() << endl;

	A.push(3);

	cout << "A.top(): " << A.top() << endl;

	A.push(4);

	cout << "A.top(): " << A.top() << endl;

	A.push(5);

	cout << "A.top(): " << A.top() << endl;

	return 0;
}

/*
A.top(): 1
A.top(): 2
A.top(): 3
A.top(): 4
A.top(): 5
 */
